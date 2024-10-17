#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdlib.h>
#include <string.h>
#define SHM_SIZE 1024  // Size of shared memory segment

int main() {
    // Generate the same key used by the server
    key_t key = ftok("shmfile", 65);

    // Locate the shared memory segment created by the server
    int shmid = shmget(key, SHM_SIZE, 0666);
    if (shmid == -1) {
        perror("shmget failed");
        exit(1);
    }

    // Attach the shared memory segment to client's address space
    char *shared_memory = (char *)shmat(shmid, NULL, 0);
    if (shared_memory == (char *)-1) {
        perror("shmat failed");
        exit(1);
    }

    // Read the message from shared memory
    printf("Client read from shared memory: %s\n", shared_memory);

    // Set the flag to indicate that the message has been read
    shared_memory[strlen(shared_memory) + 1] = 1;

    // Detach the shared memory segment
    if (shmdt(shared_memory) == -1) {
        perror("shmdt failed");
        exit(1);
    }

    return 0;
}

