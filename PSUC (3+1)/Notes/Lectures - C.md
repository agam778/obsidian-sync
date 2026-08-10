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
Statement: Expression followed by semi-colon.
Variable:
- Name of memory location
- Memory size is decided by the datatype
### Tokens:
- The smallest element of the program is called token.