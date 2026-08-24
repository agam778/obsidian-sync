# Computer Fundamentals & Architecture

## Von Neumann Architecture
- Proposed by **John von Neumann (1945)**
- **Single memory** stores both instructions and data
- Contrast with **[[Harvard Architecture]]**, which separates them and can fetch both in parallel (used in embedded systems/ARM microcontrollers/DSPs)
- Components: [[CPU]] (Control Unit + ALU), Memory, I/O, Bus
- Executes via **Fetch → Decode → Execute (→ Store)** cycle
> [!warning] Von Neumann Bottleneck
> Single bus for instructions & data causes CPU idle time

## CPU Components
- **Control Unit (CU):** directs operations, fetches/decodes instructions
- **ALU:** arithmetic + logic operations
- **Registers:** fastest storage inside CPU — Accumulator, Program Counter (PC), Instruction Register (IR), Status Register
- **Cache:** small, high-speed memory between CPU and RAM (L1 < L2 < L3 in speed; L1 fastest/smallest)

## Memory Hierarchy
*(Fastest → Slowest, Smallest → Largest Capacity)*
`Registers → Cache → RAM (primary, volatile) → Secondary storage (HDD/SSD, non-volatile)`

- **RAM:** volatile, read/write, random access
- **ROM:** non-volatile, permanent, stores BIOS/bootstrap programs
- **Bit** = 0/1; **Byte** = 8 bits; **Word** = 16/32/64 bits depending on architecture

## Buses
- **Data bus** – carries data
- **Address bus** – carries memory addresses (not data)
- **Control bus** – carries control signals

## Languages & Translators
| Feature | Compiler | Interpreter | Assembler |
|---|---|---|---|
| **Converts** | High-level → machine code | High-level → machine code, line by line | Assembly → machine code |
| **Scans** | Entire program first | Line by line | Two phases |
| **Errors** | Full report after scan | Stops at first error | Detects in phase 1 |
| **Speed** | Faster execution (pre-translated) | Slower (translated at runtime) | Very fast |
| **Examples** | GCC, javac (C, C++, Java) | Python, JS, Perl | NASM, MASM |

- **High-level language** examples: C, C++, Java, Python — portable, easy to debug, needs compiler/interpreter
- **Low-level language** (assembly/machine code) — machine-friendly, hard to debug, needs assembler, non-portable

> [!info] Algorithm & Flowchart
> - **Algorithm characteristics:** Input, Output, **Definiteness**, **Finiteness**, Effectiveness
> - **Flowchart rules:** Only **one start and one stop** symbol. On-page connectors → numbers; off-page connectors → **letters**. Flow generally top-to-bottom / left-to-right. Arrows should not cross.

---

# C Basics & Preprocessor

- `#` = preprocessor directive symbol; preprocessor runs **before** compilation
- `#include <stdio.h>` → **angle brackets** search system directories (standard headers); `"file.h"` → searches current directory first (user headers)
- Common headers: `stdio.h` (I/O), `stdlib.h` (utilities), `string.h`, `math.h`, `ctype.h`
- **`int main()`** is the ISO-standard entry point; only **one `main()`** allowed per program; `void main()` is non-standard (older Turbo C/Borland only)
- `return 0;` = successful execution
- **Compilation process:** Source (.c) → Preprocessor → Compiler → Assembler → Linker → Executable

## Macros (`#define`)
- **Object-like macro:** `#define PI 3.14159` — pure text substitution, no type checking, no memory used
- **Function-like macro:** `#define SQUARE(x) ((x)*(x))`
- Advantages: faster (no function-call overhead), reduces repetition
- Disadvantages: no type checking, debugging harder, can misbehave without parentheses

> [!danger] Classic Macro Trap
> `#define SQUARE(x) x*x` then `SQUARE(2+3)` → expands to `2+3*2+3` = **11**, NOT 25. Always wrap macro params (and the whole expression) in parentheses.

## Identifiers and Tokens
- **Tokens** are the smallest individual units in a C program. Types include:
    - **Keywords:** Reserved words (e.g., `int`, `if`, `return`).
    - **Identifiers:** User-defined names for variables, functions, arrays, etc.
    - **Constants:** Fixed values.
    - **String Literals:** Sequences of characters in double quotes.
    - **Operators:** Symbols performing operations.
    - **Separators:** Used to separate elements (e.g., `( )`, `{ }`, `,`, `;`).
    - **Preprocessor Directives:** Instructions starting with `#`.

### Rules for Identifiers
- Can contain letters (A-Z, a-z), digits (0-9), and underscores (`_`).
- Must start with a letter or underscore; **cannot start with a digit**.
- No special characters (`@`, `#`, `$`, `%`, etc.) allowed.
- C is **case-sensitive** (`sum` $\neq$ `Sum` $\neq$ `SUM`).
- Cannot be a keyword.
- Best practices: Use *camelCase*, *snake_case*, or *UPPER_CASE* (usually for macros).

---

# Data Types, Variables & Constants

A **variable** is a named memory location used to store data that can be modified **duluring** program execution.

## Data Types
C has primary (built-in) data types: Integer, Character, Floating Point, and Void.

| Type            | Specifier | Typical Size |
| --------------- | --------- | ------------ |
| `char`          | `%c`      | 1B           |
| `short int`     | `%hd`     | 2B           |
| `int`           | `%d`      | 4B           |
| `unsigned int`  | `%u`      |              |
| `long int`      | `%ld`     | 4/8B         |
| `long long int` | `%lld`    | 8B           |
| `float`         | `%f`      | 4B           |
| `double`        | `%lf`     | 8B           |
| `long double`   |           | 10/12/16B    |
| `string`        | `%s`      |              |

## Constants
Constants are fixed values that do not change during execution.
- **Integer constants:** decimal (123), octal (**starts with 0**, e.g. 0123), hex (starts with **0x/0X**)
- 8-bit signed integer range: **-128 to +127**, stored via **two's complement**
    - To get two's complement of a negative number: binary of magnitude → invert bits (1's complement) → add 1
- **Floating-point constants:** e.g., `3.14`, `6.022e23` (scientific notation). Stored in IEEE 754 standard format (Sign bit + Exponent + Mantissa).
- **Character constant:** single quotes `'A'`; **String constant:** double quotes `"Hello"`. (note: `'5'` $\neq$ `5` — char vs int)
- `const int g = 10;` — value can't change after initialization.

### Enumeration (`enum`)
Used to create symbolic names for a set of integer constants.
- By default, the first member = 0, and each subsequent member increments by 1.
- You can explicitly set values: `enum Number { A = 5, B, C = 10, D, E };` (Here B=6, D=11, E=12).

## Formatting Tricks
> [!note] `scanf()` Tricks
> - `%d` reads int; `%*d` reads but **discards** (assignment suppression)
> - `%2d` reads max 2 chars as integer
> - Whitespace/literal chars in format string are used to skip separators like `-` or `/`
> - `%i` can input decimal, octal, AND hex integers

> [!note] `printf()` Formatting
> - `%9.3f` → field width 9, precision 3 (digits after decimal), right-justified
> - `*` can be used in place of field width/precision, matched from argument list: `printf("%*.*f", 7, 2, 98.736)` → width 7, precision 2
> - `e`/`E` = exponential notation; `g`/`G` = shorter of `e`/`f`, no trailing zeros
> - `%c` needs a char; `%s` needs pointer to char, prints until ` `
> - Negative field width → left-justified

---

# Operators

- **Precedence (high→low):** `* / %` → `+ -` → relational (`< <= > >=`) → equality (`== !=`) → `&&` → `||` → assignment
- **Associativity:** left-to-right for arithmetic/relational/logical; same-precedence ops evaluated left to right
    - *Exception:* Assignment (`=`, `+=`, etc.), Ternary (`?:`), Unary (`+`, `-`, `!`, `~`, `++`, `--`, `(type)`, `*`, `&`, `sizeof`) evaluate **right-to-left**.

## Increment/Decrement
- `++var` (prefix): increment **first**, then use value
- `var++` (postfix): use value **first**, then increment
- Example: `var1=5; printf("%d", var1++);` prints **5**, var1 becomes 6
- `c = a++ + b;` with a=1,b=1 → c=2, **a becomes 2**, b stays 1
> [!error] Syntax Error
> `++(5)` and `++(x+1)` are **syntax errors** — can't increment a non-variable expression

## Relational/Logical & Bitwise
- `==` (equality) vs `=` (assignment) — classic trap
- Logical AND `&&`, OR `||`, NOT `!` → result is always 0 or 1
- **Bitwise:** `&` AND, `|` OR, `^` XOR, `~` complement, `<<` shift left, `>>` shift right
    - Examples: 12 & 25 = 8; 12 | 25 = 29; 12 ^ 25 = 21; ~35 = -36 (complement of N = -(N+1))
- **Assignment shorthand:** `count += 10;` $\equiv$ `count = count + 10;` `a /= b + c;` $\equiv$ `a = a / (b + c);` (whole RHS grouped)
- **Ternary/Conditional operator:** `condition ? expr1 : expr2;`

> [!danger] Semantic Error Trap
> `if (5 <= x <= 10)` is a **semantic error**. Evaluates left to right as `(5<=x) <= 10`, which is always true (result 0 or 1, always $\leq$ 10). Must write `x>=5 && x<=10`.

---

# Control Structures

Control structures determine the order of program execution.
- 3 control types: **Sequential, Selectional (decision/branching), Iterational (repetition)**.

## Decision Making & Branching
Forms of selection statements:
1.  **Simple `if` statement**
2.  **`if-else` statement**
3.  **Nested `if-else` statement**
4.  **`else-if` ladder**
5.  **`switch` statement**
6.  **Jump statements:** `break`, `continue`, `goto`, `return`

- **Dangling else rule:** an `else` binds to the **nearest unmatched `if`**, unless braces indicate otherwise.
- **else-if ladder:** only ONE branch executes; first true condition wins, rest are skipped.
- Leap year logic: divisible by 4 AND (not divisible by 100 OR divisible by 400).

> [!bug] Empty Statement Bug
> `if (x == 0);` — the trailing semicolon creates an **empty statement**. The `printf` after it always executes regardless of the condition (syntactically valid, semantically a bug).

---

# Number System Conversions

- **Decimal → Binary/Octal/Hex:** repeatedly divide by 2/8/16, read remainders **bottom to top**
- **Binary → Decimal:** multiply each bit by its power-of-2 positional value, sum
- **Binary → Octal:** group bits in **3s** from the right (pad with leading zeros)
- **Binary → Hex:** group bits in **4s** from the right
- **Octal → Binary:** each octal digit → 3-bit binary
- **Hex → Binary:** each hex digit → 4-bit binary
- **Octal ↔ Hex:** no direct method — convert via binary as intermediate step
- Hex digits A–F represent 10–15

---

# Quick Self-Test Traps to Remember

- [ ] `SQUARE(2+3)` with unparenthesized macro → 11, not 25
- [ ] `if(x==0);` → semicolon bug, next line always runs
- [ ] `5 <= x <= 10` → always true regardless of x (left-to-right evaluation trap)
- [ ] Prefix vs postfix `++` output order
- [ ] `'5'` (char, ASCII 53) vs `5` (int) vs `"5"` (string)
- [ ] Octal literals start with a leading `0` — `0123` is NOT 123 decimal
- [ ] `int main()` is correct; `void main()` is non-standard
- [ ] `<header.h>` vs `"header.h"` — search order difference
- [ ] Two's complement for negative number storage
- [ ] `&&` / `||` short-circuit and only return 0 or 1