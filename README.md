### holbertonschool-printf
### Welcome to our printf project for our Holberton cursus

This project's goal is to recreate the `printf` function in order to push further our understanding of this tool.
Further down this page you will get informations aswell as instructions on how to use our `_printf`function.

# Summary
+ [Contents of the repository](https://github.com/Lucasleg24/holbertonschool-printf/README.md#Contents_of_the_repository)
+ [Prerequisite](https://github.com/Lucasleg24/holbertonschool-printf/README.md#Prerequisite)
+ [Installation](https://github.com/Lucasleg24/holbertonschool-printf/README.md#Installation)
+ [How to use](https://github.com/Lucasleg24/holbertonschool-printf/README.md#How_to_use)
+ [Flowchart](https://github.com/Lucasleg24/holbertonschool-printf/README.md#Flowchart)
+ [Authors](https://github.com/Lucasleg24/holbertonschool-printf/README.md#Authors)

## Contents of the repository
# README.md
> This is where you are right now, it is used to explain how to use `_printf.c`

# `main.h`
> `main.h` is the file where all of the prototypes for every functions are, it is used as a local library.

# `_putchar.c`
> `_putchar` is used to print a single character at the time.

# `_printf.c`
> `_printf` is used to call upon other functions such as `_printc` and `_prints` in order to print integers and characters.

# `_printc.c`
> `_printc` is used to print a single character.

# `_prints.c`
> `_prints` is used to print a string of characters.

# `_printm.c`
> `_printm`is used to print a modulo (%).

# `_printd.c`
> `_printi` is used to print integers/numbers.

## Prerequisite
If you wish to compile, you will need a compiler such as gcc.

## Installation
First, you will need to clone the repository in your terminal.
```bash
git clone https://github.com/Lucasleg24/holbertonschool-printf.git
```
Then you will need to move to the folder where `_printf.c` is located.
```bash
cd holbertonschool-printf.
```
There you will be able to see the various files.
However if you want to compile and do various tests, you may do as follows:
```bash
gcc {YourFile}.c -o {NameDesired} && ./{NameDesired}
```

## How to use
How to display a character :
```c
#include "main.h"
/**
This will be used to include the prototypes from the main.h file
/**

int main() 
{
	_printf("Character: [%c]\n", "A");
	return (0);
}
```

The output expected should be:
```c
Character: A
```

Of course you can use the other variations such as :
| Variation  |     Output     |
| ---------- | -------------- |
| `%c`        | character      |
| `%s`        | string         |
| `%d` or `%i` | Signed integer |
| `%`        | %              |

## Flowchart

(Insert Flowchart image here)

## Authors

This project was done by [Lucas Legrand](https://github.com/Lucasleg24) and [Florian Bombeeck](https://github.com/Pandor3) during their first year at Holberton School.
