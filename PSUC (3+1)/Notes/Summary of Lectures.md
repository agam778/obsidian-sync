# MCQ Quiz Cheat Sheet — Problem Solving Using Computers / C Programming

---

## 1. Computer Fundamentals & Architecture

**Von Neumann Architecture**
- Proposed by **John von Neumann (1945)**
- **Single memory** stores both instructions and data (contrast with **Harvard Architecture**, which separates them and can fetch both in parallel — used in embedded systems/ARM microcontrollers/DSPs)
- Components: CPU (Control Unit + ALU), Memory, I/O, Bus
- Executes via **Fetch → Decode → Execute (→ Store)** cycle
- Weakness: **Von Neumann bottleneck** — single bus for instructions & data causes CPU idle time

**CPU components**
- **Control Unit (CU):** directs operations, fetches/decodes instructions
- **ALU:** arithmetic + logic operations
- **Registers:** fastest storage inside CPU — Accumulator, Program Counter (PC), Instruction Register (IR), Status Register
- **Cache:** small, high-speed memory between CPU and RAM (L1 < L2 < L3 in speed; L1 fastest/smallest)

**Memory hierarchy (fastest→slowest, smallest→largest capacity)**
Registers → Cache → RAM (primary, volatile) → Secondary storage (HDD/SSD, non-volatile)
- **RAM:** volatile, read/write, random access
- **ROM:** non-volatile, permanent, stores BIOS/bootstrap programs
- **Bit** = 0/1; **Byte** = 8 bits; **Word** = 16/32/64 bits depending on architecture

**Buses**
- **Data bus** – carries data
- **Address bus** – carries memory addresses (not data)
- **Control bus** – carries control signals

**Languages & Translators**
| | Compiler | Interpreter | Assembler |
|---|---|---|---|
| Converts | High-level → machine code | High-level → machine code, line by line | Assembly → machine code |
| Scans | Entire program first | Line by line | Two phases |
| Errors | Full report after scan | Stops at first error | Detects in phase 1 |
| Speed | Faster execution (pre-translated) | Slower (translated at runtime) | Very fast |
| Examples | GCC, javac (C, C++, Java) | Python, JS, Perl | NASM, MASM |

- **High-level language** examples: C, C++, Java, Python — portable, easy to debug, needs compiler/interpreter
- **Low-level language** (assembly/machine code) — machine-friendly, hard to debug, needs assembler, non-portable

**Algorithm characteristics:** Input, Output, **Definiteness**, **Finiteness**, Effectiveness

**Flowchart rules**
- Only **one start and one stop** symbol
- On-page connectors → numbers; off-page connectors → **letters**
- Flow generally top-to-bottom / left-to-right
- Arrows should not cross

---

## 2. C Basics / Preprocessor

- `#` = preprocessor directive symbol; preprocessor runs **before** compilation
- `#include <stdio.h>` → **angle brackets** search system directories (standard headers); `"file.h"` → searches current directory first (user headers)
- Common headers: `stdio.h` (I/O), `stdlib.h` (utilities), `string.h`, `math.h`, `ctype.h`
- **`int main()`** is the ISO-standard entry point; only **one `main()`** allowed per program; `void main()` is non-standard (older Turbo C/Borland only)
- `return 0;` = successful execution
- **Compilation process:** Source (.c) → Preprocessor → Compiler → Assembler → Linker → Executable

**Macros (`#define`)**
- **Object-like macro:** `#define PI 3.14159` — pure text substitution, no type checking, no memory used
- **Function-like macro:** `#define SQUARE(x) ((x)*(x))`
- ⚠️ Classic trap: `#define SQUARE(x) x*x` then `SQUARE(2+3)` → expands to `2+3*2+3` = **11**, NOT 25 — always wrap macro params (and the whole expression) in parentheses
- Advantages: faster (no function-call overhead), reduces repetition
- Disadvantages: no type checking, debugging harder, can misbehave without parentheses

---

## 3. Data Types, Variables & Constants

**Format specifiers**
| Type | Specifier |
|---|---|
| int | %d |
| unsigned int | %u |
| float | %f |
| double | %lf |
| char | %c |
| string | %s |
| short int | %hd |
| long int | %ld |
| long long int | %lld |

**Typical sizes:** char=1B, short int=2B, int=4B, long int=4/8B, long long=8B, float=4B, double=8B, long double=10/12/16B

**Constants**
- Integer constants: decimal (123), octal (**starts with 0**, e.g. 0123), hex (starts with **0x/0X**)
- 8-bit signed integer range: **-128 to +127**, stored via **two's complement**
  - To get two's complement of a negative number: binary of magnitude → invert bits (1's complement) → add 1
- Float constants: e.g., 3.14, 6.022e23 (scientific notation)
- Character constant: single quotes `'A'`; String constant: double quotes `"Hello"` (note: `'5'` ≠ `5` — char vs int)
- `const int g = 10;` — value can't change after initialization
- **enum**: first member = 0 by default, each next increments by 1 (can override explicitly, e.g. `A=5` then B=6, C=10, D=11...)

**scanf() format tricks**
- `%d` reads int; `%*d` reads but **discards** (assignment suppression)
- `%2d` reads max 2 chars as integer
- Whitespace/literal chars in format string are used to skip separators like `-` or `/`
- `%i` can input decimal, octal, AND hex integers

**printf() formatting**
- `%9.3f` → field width 9, precision 3 (digits after decimal), right-justified
- `*` can be used in place of field width/precision, matched from argument list: `printf("%*.*f", 7, 2, 98.736)` → width 7, precision 2
- `e`/`E` = exponential notation; `g`/`G` = shorter of `e`/`f`, no trailing zeros
- `%c` needs a char; `%s` needs pointer to char, prints until `'\0'`
- Negative field width → left-justified

---

## 4. Operators (very testable — trace the output!)

**Precedence (high→low):** `* / %` → `+ -` → relational (`< <= > >=`) → equality (`== !=`) → `&&` → `||` → assignment

**Associativity:** left-to-right for arithmetic/relational/logical; same-precedence ops evaluated left to right.

**Increment/Decrement**
- `++var` (prefix): increment **first**, then use value
- `var++` (postfix): use value **first**, then increment
- Example: `var1=5; printf("%d", var1++);` prints **5**, var1 becomes 6
- `c = a++ + b;` with a=1,b=1 → c=2, **a becomes 2**, b stays 1
- ⚠️ `++(5)` and `++(x+1)` are **syntax errors** — can't increment a non-variable expression

**Relational/Logical**
- `==` (equality) vs `=` (assignment) — classic trap
- Logical AND `&&`, OR `||`, NOT `!` → result is always 0 or 1
- ⚠️ `if (5 <= x <= 10)` is a **semantic error** — evaluates left to right as `(5<=x) <= 10`, which is always true (result 0 or 1, always ≤10) — must write `x>=5 && x<=10`

**Bitwise**
- `&` AND, `|` OR, `^` XOR, `~` complement, `<<` shift left, `>>` shift right
- 12 & 25 = 8; 12 | 25 = 29; 12 ^ 25 = 21; ~35 = -36 (complement of N = -(N+1))

**Assignment shorthand:** `count += 10;` ≡ `count = count + 10;`
`a /= b + c;` ≡ `a = a / (b + c);` (whole RHS grouped)

**Ternary/Conditional operator:** `condition ? expr1 : expr2;`

---

## 5. Control Structures — if / else

- 3 control types: **Sequential, Selectional (decision), Iterational (repetition)**
- Forms of `if`: simple if, if-else, nested if-else, else-if ladder, jump statements (break/continue/goto/return)
- ⚠️ `if (x == 0);` — the trailing semicolon creates an **empty statement**; the `printf` after it always executes regardless of the condition (syntactically valid, semantically a bug)
- **Dangling else rule:** an `else` binds to the **nearest unmatched `if`**, unless braces say otherwise
- **else-if ladder:** only ONE branch executes; first true condition wins, rest are skipped
- Leap year logic: divisible by 4 AND (not divisible by 100 OR divisible by 400)

---

## 6. Number System Conversions

- **Decimal → Binary/Octal/Hex:** repeatedly divide by 2/8/16, read remainders **bottom to top**
- **Binary → Decimal:** multiply each bit by its power-of-2 positional value, sum
- **Binary → Octal:** group bits in **3s** from the right (pad with leading zeros)
- **Binary → Hex:** group bits in **4s** from the right
- **Octal → Binary:** each octal digit → 3-bit binary
- **Hex → Binary:** each hex digit → 4-bit binary
- **Octal ↔ Hex:** no direct method — convert via binary as intermediate step
- Hex digits A–F represent 10–15

---

## 7. Quick Self-Test Traps to Remember
1. `SQUARE(2+3)` with unparenthesized macro → 11, not 25
2. `if(x==0);` → semicolon bug, next line always runs
3. `5 <= x <= 10` → always true regardless of x (left-to-right evaluation trap)
4. Prefix vs postfix ++ output order
5. `'5'` (char, ASCII 53) vs `5` (int) vs `"5"` (string)
6. Octal literals start with a leading `0` — `0123` is NOT 123 decimal
7. `int main()` is correct; `void main()` is non-standard
8. `<header.h>` vs `"header.h"` — search order difference
9. Two's complement for negative number storage
10. `&&`/`||` short-circuit and only return 0 or 1
