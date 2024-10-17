#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>  // For sleep()

#define SHM_SIZE 1024  // Shared memory size

int main() {
    // Generate a unique key for shared memory
    key_t key = ftok("shmfile", 65); 
    
    // Create shared memory segment
    int shmid = shmget(key, SHM_SIZE, 0666 | IPC_CREAT);
    if (shmid == -1) {
        perror("Failed to create shared memory");
        exit(1);
    }

    // Attach to the shared memory
    char *shared_memory = (char *)shmat(shmid, NULL, 0);
    if (shared_memory == (char *)-1) {
        perror("Failed to attach shared memory");
        exit(1);
    }

    // Write a message into the shared memory
    char message[] = "Hello from server!";
    strcpy(shared_memory, message);
    
    // Set a flag after the message
    shared_memory[strlen(message) + 1] = 0;  // Set the flag to 0 (message not yet read)
    
    printf("Server wrote to shared memory: %s\n", message);

    // Wait until the client reads the message (flag changes to 1)
    while (shared_memory[strlen(message) + 1] == 0) {
        printf("Waiting for client to read the message...\n");
        sleep(1);  // Sleep for 1 second before checking again
    }

    printf("Client has read the message. Server exiting...\n");

    // Detach from shared memory
    if (shmdt(shared_memory) == -1) {
        perror("Failed to detach shared memory");
        exit(1);
    }

    // Optionally, destroy the shared memory segment
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}

