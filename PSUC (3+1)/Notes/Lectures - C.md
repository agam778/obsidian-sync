#### Compilation process:
- Preprocessor $\longrightarrow$  Compiler 

`<stdio.h>` - Standard I/O - From Buffer
`<conio.h>` - Console I/O - From Console

#### Header file includes functions. Two parts:
- **Definition**: The code
- **Declaration**: e.g. `sqrt(100);`

Library file is included with `<>`, User-defined file is included with `""`

`#` - Pre-processing symbol
`include` - Keyword
`#include` - Pre-processing directive
`#define` - Macro
`int main(void) or void(main)` - Mandatory function

**Pre-processing statement:**
- Any statement starting with `#` symbol.
- Example: `#include <stdio.h>`

> [!Important] Check Viva Questions from Slides
### Macros:
- If you want to create any symbolic name for constant value is called Macro.
- It is used to create symbolic constant.
- Macro symbolic value cannot be changed during the execution of the program

```c
// Examples
#define g 9.8
#define PI 3.14159
#define NAME "MUJ"
#define YES "Y"
```

### Macro Function:
`#define MACRO_NAME(parameter) expression`
#### Conditional Operator:
`#define MAX(a,b) ((a)>(b)?(a):(b))`

### Datatype, variable and constant:
**Statement:** Expression followed by semi-colon.
**Variable:**
- Name of memory location where value can be changed during the execution of the program
- Memory size is decided by the datatype
**Datatype:** Keyword which is used to specify memory and type of value stored into a variable
**Modifiers:** Keyword which is used before datatypes
#### Tokens:
- The smallest element of a program is called token.
> [!Important] a=017, b=2, c=a+b; so c would be 17 since we convert octal to decimal
- 256 Symbols in Character
#### String constant:
- Characters enclosed into double quotes.
- Last character of every string is null character.
- ASCII value of null character is 0.

**Invalid identifiers:**
- 1sum, total=marks, @value, %count, sum value, float (keyword), do (keyword), a+b

> [!Important] Macro function for Quiz

- **`enum`** is a keyword which is used to create list of integer constant
- Value of first symbolic constant is 0 by default and other values are one increment of previous one.

- We can also create constant variables using `const` keyword.
- If you want to use any variable as a constant, then we can use `const` keyword before its definition place.
- `const` means you cannot change the value of a variable later in the program.
#### Values:
In char, if 130, then it will print negative value like +127+3=-126
cycle is like +126, +127, -128, -127, -126
(research)

in int, if signed int, then we actually get 15 bits because 1 bit is for +/-, but if unsigned int, we get all 16 bits because there's no need of sign here.
so signed int range 2 power -15 to 2 power 15

if outside range, overflow, it will give negative value instead of positive

learn byte size for viva of datatypes
float has mantissa part and exponent part

Q. why add f for float
- f shows that it is a floating point constant
- if f not added it means double constant

### Input in C:
#### Input using `scanf`:
- Static input: `float x=12.65f; int a=12; etc.`
- If we are using more than one format specifier, input can be separated by default terminators like space, enter or tab, or you can also specify your own terminator: `scanf("%f,%f", &a, &b)`, which will use the , terminator.
- If we use `%*d`, `*` is the skip symbol so it will take the input but will not store it.

### If-else:
- When execution of statement depends on some condition, then we use if-else statement

```C
if (condition) {
statement // Runs when condition is non-zero/true
}
else {
statement // Runs when condition is zero/false
}
```

- If block will run if the condition is non-zero/true, else if zero/false
- If these blocks contain only one statement, then braces are option.
- If true block does not contain any statement:

```C
if (condition); // Null statement
else {
statement
}
```

- If-else can be nested according to application.
	- Nested: If-else inside if-else

> [!Important] Learn operators (Lecture 10) for exams

> [!Important] Precedence

### Operators
- Increment works only on variables, not constants.
