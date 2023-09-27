# <p align="center">⚙️ Holberton School Monty</p>
## <p align="center">Project : C - Stacks, Queues - LIFO, FIFO</p>
### Monty Interpreter
The Monty interpreter is a simple program designed to execute Monty scripts. A Monty script is a series of instructions written in a custom language that operates on a stack data structure (**LIFO** -> Last In First Out).

## ✅ Project Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc
- All our files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Our code should use the `Betty` style. It will be checked using [betty-style.pl ](https://github.com/hs-hq/Betty/blob/main/betty-style.pl)and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- We are not allowed to use global variables
- No more than 5 functions per file
- We are allowed to use the standard library
- All our header files should be include guarded

## 🛠️ Compilation & Usage

First of all, you'll need to clone this git repository :

`git clone https://github.com/ValPumpkins/holbertonschool-monty.git`
### 1. Compilation
Then, compile with the following :

`gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

### 2. Usage

Finally, run the interpreter on a file :

`./monty file`

where `file` is the path to the Monty ByteCode file you want to execute.

## 📖 The Monty Language & Program
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.
### ❗️ Prerequisites
If the user does not give any file or more than one argument to your program, print the error message `USAGE: monty file`, followed by a new line, and exit with the status `EXIT_FAILURE`.

If, for any reason, it’s not possible to open the file, print the error message `Error: Can't open file <file>`, followed by a new line, and exit with the status `EXIT_FAILURE` where `<file>` is the name of the file.

If the file contains an invalid instruction, print the error message `L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status `EXIT_FAILURE`.
The monty program runs the bytecodes line by line and stop if either:
- it executed properly every line of the file
- it finds an error in the file
- an error occured

If you can’t malloc anymore, print the error message `Error: malloc failed`, followed by a new line, and exit with status `EXIT_FAILURE`.
We have to use `malloc` and `free` and are not allowed to use any other function from `man malloc` (`realloc`, `calloc`…)

## 🗂️ Files description

| Filename | Description |
| -------- | -------- |
| monty.c    | main program : reads and executes Monty ByteCode files    |
| monty.h    | header file with struct and prototypes   |
| variable.h   | header file defining global variable    |
| getOpcodes.c     | function that that executes the given opcode    |
| free.c    |  function to free memory  |

All the others files are describes below, in the **Supported Opcodes** section.

## 👉 Supported Opcodes
| Opcode/File | Description |
| -------- | -------- |
| push.c    | push an element to the stack |
| pall.c    | print all elements of the stack |
| pint.c   | pint an element to the stack  |
| pop.c    | delete an element from the stack  |
| swap.c   | swap two elements from the stack  |
| add.c    | add two elements to the stack  |
| nop.c    | do nothing  |
| sub.c    | sub the top element from the second top element of the stack  |
| div.c    | divide top two elements of stack  |
| mul.c    | multiplies the second top element of the stack  |
| mod.c    | computes the rest of the division of the second element of the stack  |

## 👥 Team
👨‍💻 Cassandra Boudier *aka* [CassandraB670](https://github.com/CassandraB670)

👩‍💻 Valentine Quignon *aka* [ValPumpkins](https://github.com/ValPumpkins)

<p>🎓For <strong>Holberton School</strong> / September 2023</p>
