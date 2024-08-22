# Working_With_OS

## Description

This repository contains a collection of laboratory assignments and practical exercises related to operating systems, concurrency control, and system programming. The assignments cover key concepts such as process/thread synchronization, mutual exclusion, deadlock handling, inter-process communication (IPC), and memory management.

## Contents

1. **Shell Programming**
   - **Description**: A shell script for managing an address book with functionalities to create, view, insert, delete, and modify records.
   - **Directory**: `shell_programming/`

2. **Process Control System Calls**
   - **Description**: Demonstrates the use of `fork`, `execve`, and `wait` system calls in C for process management and synchronization.
   - **Directory**: `process_control/`

3. **Thread Management**
   - **Description**: Implements matrix multiplication using the `pthread` library, where threads compute rows of the resultant matrix.
   - **Directory**: `thread_management/`

4. **Thread Synchronization**
   - **Description**: Solves the producer-consumer problem using counting semaphores and mutexes for synchronization and mutual exclusion.
   - **Directory**: `thread_synchronization/`

5. **Deadlock Avoidance**
   - **Description**: Implements the Dining Philosophers Problem, addressing deadlock and starvation issues using semaphores.
   - **Directory**: `deadlock_avoidance/`

6. **Inter-Process Communication (IPC)**
   - **Pipes**
     - **Description**: Demonstrates full duplex communication between parent and child processes using pipes.
     - **Directory**: `ipc_pipes/`
   - **Shared Memory**
     - **Description**: Implements a client-server application using System V shared memory for IPC.
     - **Directory**: `ipc_shared_memory/`

## Getting Started

To get started with the examples in this repository, follow these steps:

1. **Clone the Repository**
   ```bash
   git clone https://github.com/yourusername/OS-Lab-Assignments.git

2. **Navigate to the Desired Directory**
   ```bash
    cd working-with-os-/assignment_directory-name

3. **Build and Run**
    Each directory contains specific instructions for compilation and execution. Typically, you might use make or gcc for building. Refer to the README.md file in each directory or the provided documentation for detailed instructions.
