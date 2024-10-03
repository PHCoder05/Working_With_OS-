
# C Programming Projects - Operating System Concepts

This repository contains various C programming projects demonstrating key Operating System concepts such as process control, threading, synchronization, and inter-process communication.

## Table of Contents

1. [Address Book Implementation](#address-book-implementation)
2. [Process Control with Fork, Execve, and Wait](#process-control-with-fork-execve-and-wait)
3. [Matrix Multiplication Using Pthreads](#matrix-multiplication-using-pthreads)
4. [Producer-Consumer Problem](#producer-consumer-problem)
5. [Dining Philosophers Problem](#dining-philosophers-problem)
6. [Inter-Process Communication Using Pipes](#inter-process-communication-using-pipes)
7. [Inter-Process Communication Using Shared Memory](#inter-process-communication-using-shared-memory)

## Requirements

- A C compiler (GCC recommended)
- POSIX compliant system (Linux or macOS)
- `pthread` library for threading examples

## How to Compile and Run

Each program can be compiled using the following command:

```bash
gcc program_name.c -o program_name -lpthread
```

Replace `program_name.c` with the name of the C file you want to compile.

After compiling, run the program using:

```bash
./program_name
```

## Address Book Implementation

This program allows users to create, view, insert, delete, and modify records in an address book.

### Options

- Create Address Book
- View Address Book
- Insert a Record
- Delete a Record
- Modify a Record
- Exit

### Usage

1. Compile the program:
   ```bash
   gcc address_book.c -o address_book
   ```
2. Run the program:
   ```bash
   ./address_book
   ```

## Process Control with Fork, Execve, and Wait

This program demonstrates the use of `fork`, `execve`, and `wait` system calls. The parent process sorts an integer array and passes it to the child process, which performs a binary search.

### Usage

1. Compile the program:
   ```bash
   gcc process_control.c -o process_control
   ```
2. Run the program:
   ```bash
   ./process_control
   ```

## Matrix Multiplication Using Pthreads

This application demonstrates matrix multiplication using multithreading with the `pthread` library. Each thread computes a part of the product, and results are collected in the main thread.

### Usage

1. Compile the program:
   ```bash
   gcc matrix_multiplication.c -o matrix_multiplication -lpthread
   ```
2. Run the program:
   ```bash
   ./matrix_multiplication
   ```

## Producer-Consumer Problem

This example uses counting semaphores and mutexes to demonstrate the producer-consumer problem. The producer generates data, and the consumer processes it.

### Usage

1. Compile the program:
   ```bash
   gcc producer_consumer.c -o producer_consumer -lpthread
   ```
2. Run the program:
   ```bash
   ./producer_consumer
   ```

## Dining Philosophers Problem

This implementation shows the dining philosophers problem, demonstrating how to avoid deadlock and starvation using semaphores.

### Usage

1. Compile the program:
   ```bash
   gcc dining_philosophers.c -o dining_philosophers -lpthread
   ```
2. Run the program:
   ```bash
   ./dining_philosophers
   ```

## Inter-Process Communication Using Pipes

This program implements full duplex communication between parent and child processes using pipes. The parent sends a file path, and the child returns the file contents.

### Usage

1. Compile the program:
   ```bash
   gcc pipes_example.c -o pipes_example
   ```
2. Run the program:
   ```bash
   ./pipes_example
   ```

## Inter-Process Communication Using Shared Memory

This application demonstrates a client-server model using shared memory. The server writes a message to a shared memory segment, which the client reads and displays.

### Usage

1. Compile the server program:
   ```bash
   gcc shared_memory_server.c -o shared_memory_server
   ```
2. Compile the client program:
   ```bash
   gcc shared_memory_client.c -o shared_memory_client
   ```
3. Run the server in one terminal:
   ```bash
   ./shared_memory_server
   ```
4. Run the client in another terminal:
   ```bash
   ./shared_memory_client
   ```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


## 📬 Stay Connected

Continue your learning journey and stay updated with more resources:

- [GitHub Profile](https://github.com/phcoder05)
- [LinkedIn Profile](https://www.linkedin.com/in/pankaj-hadole-722476232/)

Happy coding! 😊
