# Unix Utilities

## Description

This repository contains four C programs (`mypwd.c`, `myecho.c`, `mymv.c`, and `myshell.c`) that serve as Unix utilities, providing various functionalities such as printing the current working directory, echoing messages, renaming/moving files, and implementing a simple shell.

## Programs

### mypwd.c

- **Description**: Prints the current working directory.
- **Usage**:
  ```bash
  vim mypwd.c # Edit the program
  gcc mypwd.c -o mypwd # Compile the program
  ./mypwd # Execute the program
  ```
- **Output**:
  ```
  /home/sttraining
  ```

### myecho.c

- **Description**: Echoes a message to the standard output.
- **Usage**:
  ```bash
  vim myecho.c # Edit the program
  gcc myecho.c -o myecho # Compile the program
  ./myecho "Hello world" # Execute the program
  ```
- **Output**:
  ```
  Hello world
  ```

### mymv.c

- **Description**: Renames/moves a file.
- **Usage**:
  ```bash
  vim mymv.c # Edit the program
  gcc mymv.c -o mymv # Compile the program
  ./mymv printhello.c ./Documents/newfile.c # Execute the program
  ```
- **Output**:
  ```
  file "printhello.c" is removed from the home and created with name "newfile.c" in Documents
  ```

### myshell.c

- **Description**: Implements a simple shell.
- **Usage**:
  ```bash
  vim myshell.c # Edit the program
  gcc myshell.c -o myshell # Compile the program
  ./myshell # Execute the program
  ```
- **Sample Session**:
  ```
  Enter your message : echo hello world
  hello world

  Enter your message : pwd
  /home/sttraining

  Enter your message : cd ./Documents
  Enter your message : pwd
  /home/sttraining/Documents

  Enter your message : ls
  14.c PrintHello.c testmymv.c

  Enter your message : ps
  PID TTY          TIME CMD
  3889 pts/0 00:00:00 bash
  4090 pts/0 00:00:00 myshell
  4095 pts/0 00:00:00 ps

  Enter your message : vim 14.c -> file 14.c is opened

  Enter your message : exit
  Good Bye :)
  ```
