### holbertonschool-printf
### Welcome to our printf project for our Holberton cursus

This project's goal is to recreate the `printf` function in order to push further our understanding of this tool.
Further down this page you will get informations aswell as instructions on how to use our `_printf`function.

# Summary
+ [Contents of the repository](https://github.com/Lucasleg24/holbertonschool-printf/blob/Florian/README.md#contents-of-the-repository)
+ [Prerequisite](https://github.com/Lucasleg24/holbertonschool-printf/blob/Florian/README.md#prerequisite)
+ [Installation](https://github.com/Lucasleg24/holbertonschool-printf/blob/Florian/README.md#installation)
+ [How to use](https://github.com/Lucasleg24/holbertonschool-printf/blob/Florian/README.md#how-to-use)
+ [Flowchart](https://github.com/Lucasleg24/holbertonschool-printf/blob/Florian/README.md#flowchart)
+ [Authors](https://github.com/Lucasleg24/holbertonschool-printf/blob/Florian/README.md#flowchart)

## Contents of the repository
**README.md**
> This is where you are right now, it is used to explain how to use `_printf.c`

**main.h**
> `main.h` is the file where all of the prototypes for every functions are, it is used as a local library.

**putchar.c**
> `_putchar` is used to print a single character at the time.

**printf.c**
> `_printf` is used to call upon other functions such as `_printc` and `_prints` in order to print integers and characters.

**printc.c**
> `_printc` is used to print a single character.

**prints.c**
> `_prints` is used to print a string of characters.

**printm.c**
> `_printm`is used to print a modulo (%).

**printd.c**
> `_printi` is used to print integers/numbers.

## Prerequisite
If you wish to compile, you will need a compiler such as gcc.

## Installation
First, you will need to clone the repository in your terminal.
```bash
git clone https://{YOURTOKEN}@github.com/Lucasleg24/holbertonschool-printf.git
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
Example:
How to display a character
```c
#include "main.h"
*This will let you use the prototype stored in main.h*
int main()
{
	_printf("Character: [%c]\n", A);
*The %c is used to call the _printc function located in the _printc file which is pointed into the main.h file*
	return (0);
}
```

The expected output should be
```c
Character: A
```

Of course you can use the other variations such as :
| Input  |     Output     |
| ---------- | -------------- |
| `%c`        | character      |
| `%s`        | string         |
| `%`        | %              |

### In case of a bad input !
Let's say you want to print the string `'Hello World!'`
for example :
```c
#include "main.h"

int main()
{
	_printf("Hello World!\n", %c);

	return(0);
)
```
This wouldn't work because you want to print a string but use `%c` which is used to print a single character so the output would be as follows.
```c
H
```
In order to get the expected result, you should have replaced the `%c` with an `%s` which is used to print strings.

## Flowchart

![Flowchart picture](https://www.pixenli.com/image/2snmsbb3)

## Authors

This project was done by [Lucas Legrand](https://github.com/Lucasleg24) and [Florian Bombeeck](https://github.com/Pandor3) during their first year at Holberton School.
