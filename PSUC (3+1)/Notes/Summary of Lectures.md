# Computer Fundamentals & Architecture

## Von Neumann Architecture
- Proposed by **John von Neumann (1945)** [cite: 1].
- **Single memory** stores both instructions and data [cite: 1].
- Contrast with **[[Harvard Architecture]]**, which separates them and can fetch both in parallel (used in embedded systems/ARM microcontrollers/DSPs) [cite: 1].
- Components: [[CPU]] (Control Unit + ALU), Memory, I/O, Bus [cite: 1].
- Executes via **Fetch → Decode → Execute (→ Store)** cycle [cite: 1].
> [!warning] Von Neumann Bottleneck
> Single bus for instructions & data causes CPU idle time [cite: 1].

## CPU Components
- **Control Unit (CU):** directs operations, fetches/decodes instructions [cite: 1].
- **ALU:** arithmetic + logic operations [cite: 1].
- **Registers:** fastest storage inside CPU — Accumulator, Program Counter (PC), Instruction Register (IR), Status Register [cite: 1].
- **Cache:** small, high-speed memory between CPU and RAM [cite: 1]. (L1 < L2 < L3 in speed; L1 fastest/smallest) [cite: 1].

## Memory Hierarchy
*(Fastest → Slowest, Smallest → Largest Capacity)* [cite: 1]
`Registers → Cache → RAM (primary, volatile) → Secondary storage (HDD/SSD, non-volatile)` [cite: 1]

- **RAM:** volatile, read/write, random access [cite: 1].
- **ROM:** non-volatile, permanent, stores BIOS/bootstrap programs [cite: 1].
- **Bit** = 0/1 [cite: 1]; **Byte** = 8 bits [cite: 1]; **Word** = 16/32/64 bits depending on architecture [cite: 1].

## Buses
- **Data bus** – carries data [cite: 1].
- **Address bus** – carries memory addresses (not data) [cite: 1].
- **Control bus** – carries control signals [cite: 1].

## Languages & Translators
| Feature | Compiler | Interpreter | Assembler |
|---|---|---|---|
| **Converts** | High-level → machine code [cite: 1] | High-level → machine code, line by line [cite: 1] | Assembly → machine code [cite: 1] |
| **Scans** | Entire program first [cite: 1] | Line by line [cite: 1] | Two phases [cite: 1] |
| **Errors** | Full report after scan [cite: 1] | Stops at first error [cite: 1] | Detects in phase 1 [cite: 1] |
| **Speed** | Faster execution (pre-translated) [cite: 1] | Slower (translated at runtime) [cite: 1] | Very fast [cite: 1] |
| **Examples** | GCC, javac (C, C++, Java) [cite: 1] | Python, JS, Perl [cite: 1] | NASM, MASM [cite: 1] |

- **High-level language** examples: C, C++, Java, Python — portable, easy to debug, needs compiler/interpreter [cite: 1].
- **Low-level language** (assembly/machine code) — machine-friendly, hard to debug, needs assembler, non-portable [cite: 1].

> [!info] Algorithm & Flowchart
> - **Algorithm characteristics:** Input, Output, **Definiteness**, **Finiteness**, Effectiveness [cite: 1].
> - **Flowchart rules:** Only **one start and one stop** symbol [cite: 1]. On-page connectors → numbers; off-page connectors → **letters** [cite: 1]. Flow generally top-to-bottom / left-to-right [cite: 1]. Arrows should not cross [cite: 1].

---

# C Basics & Preprocessor

- `#` = preprocessor directive symbol; preprocessor runs **before** compilation [cite: 1].
- `#include <stdio.h>` → **angle brackets** search system directories (standard headers) [cite: 1]; `"file.h"` → searches current directory first (user headers) [cite: 1].
- Common headers: `stdio.h` (I/O), `stdlib.h` (utilities), `string.h`, `math.h`, `ctype.h` [cite: 1].
- **`int main()`** is the ISO-standard entry point [cite: 1]; only **one `main()`** allowed per program [cite: 1]; `void main()` is non-standard (older Turbo C/Borland only) [cite: 1].
- `return 0;` = successful execution [cite: 1].
- **Compilation process:** Source (.c) → Preprocessor → Compiler → Assembler → Linker → Executable [cite: 1].

## Macros (`#define`)
- **Object-like macro:** `#define PI 3.14159` — pure text substitution, no type checking, no memory used [cite: 1].
- **Function-like macro:** `#define SQUARE(x) ((x)*(x))` [cite: 1].
- Advantages: faster (no function-call overhead), reduces repetition [cite: 1].
- Disadvantages: no type checking, debugging harder, can misbehave without parentheses [cite: 1].

> [!danger] Classic Macro Trap
> `#define SQUARE(x) x*x` then `SQUARE(2+3)` → expands to `2+3*2+3` = **11**, NOT 25 [cite: 1]. Always wrap macro params (and the whole expression) in parentheses [cite: 1].

---

# Data Types, Variables & Constants

## Format Specifiers
| Type | Specifier | Typical Size |
|---|---|---|
| `char` | `%c` | 1B [cite: 1] |
| `short int` | `%hd` | 2B [cite: 1] |
| `int` | `%d` | 4B [cite: 1] |
| `unsigned int` | `%u` | [cite: 1] |
| `long int` | `%ld` | 4/8B [cite: 1] |
| `long long int` | `%lld` | 8B [cite: 1] |
| `float` | `%f` | 4B [cite: 1] |
| `double` | `%lf` | 8B [cite: 1] |
| `long double` | | 10/12/16B [cite: 1] |
| `string` | `%s` | [cite: 1] |

## Constants
- Integer constants: decimal (123), octal (**starts with 0**, e.g. 0123), hex (starts with **0x/0X**) [cite: 1].
- 8-bit signed integer range: **-128 to +127**, stored via **two's complement** [cite: 1].
    - To get two's complement of a negative number: binary of magnitude → invert bits (1's complement) → add 1 [cite: 1].
- Float constants: e.g., `3.14`, `6.022e23` (scientific notation) [cite: 1].
- Character constant: single quotes `'A'` [cite: 1]; String constant: double quotes `"Hello"` [cite: 1]. (note: `'5'` ≠ `5` — char vs int) [cite: 1].
- `const int g = 10;` — value can't change after initialization [cite: 1].
- **enum**: first member = 0 by default, each next increments by 1 (can override explicitly, e.g. `A=5` then B=6, C=10, D=11...) [cite: 1].

## Formatting Tricks
> [!note] `scanf()` Tricks
> - `%d` reads int; `%*d` reads but **discards** (assignment suppression) [cite: 1].
> - `%2d` reads max 2 chars as integer [cite: 1].
> - Whitespace/literal chars in format string are used to skip separators like `-` or `/` [cite: 1].
> - `%i` can input decimal, octal, AND hex integers [cite: 1].

> [!note] `printf()` Formatting
> - `%9.3f` → field width 9, precision 3 (digits after decimal), right-justified [cite: 1].
> - `*` can be used in place of field width/precision, matched from argument list: `printf("%*.*f", 7, 2, 98.736)` → width 7, precision 2 [cite: 1].
> - `e`/`E` = exponential notation; `g`/`G` = shorter of `e`/`f`, no trailing zeros [cite: 1].
> - `%c` needs a char; `%s` needs pointer to char, prints until `' '` [cite: 1].
> - Negative field width → left-justified [cite: 1].

---

# Operators

- **Precedence (high→low):** `* / %` → `+ -` → relational (`< <= > >=`) → equality (`== !=`) → `&&` → `||` → assignment [cite: 1].
- **Associativity:** left-to-right for arithmetic/relational/logical; same-precedence ops evaluated left to right [cite: 1].

## Increment/Decrement
- `++var` (prefix): increment **first**, then use value [cite: 1].
- `var++` (postfix): use value **first**, then increment [cite: 1].
- Example: `var1=5; printf("%d", var1++);` prints **5**, var1 becomes 6 [cite: 1].
- `c = a++ + b;` with a=1,b=1 → c=2, **a becomes 2**, b stays 1 [cite: 1].
> [!error] Syntax Error
> `++(5)` and `++(x+1)` are **syntax errors** — can't increment a non-variable expression [cite: 1].

## Relational/Logical & Bitwise
- `==` (equality) vs `=` (assignment) — classic trap [cite: 1].
- Logical AND `&&`, OR `||`, NOT `!` → result is always 0 or 1 [cite: 1].
- **Bitwise:** `&` AND, `|` OR, `^` XOR, `~` complement, `<<` shift left, `>>` shift right [cite: 1].
    - Examples: 12 & 25 = 8; 12 | 25 = 29; 12 ^ 25 = 21; ~35 = -36 (complement of N = -(N+1)) [cite: 1].
- **Assignment shorthand:** `count += 10;` ≡ `count = count + 10;` [cite: 1]. `a /= b + c;` ≡ `a = a / (b + c);` (whole RHS grouped) [cite: 1].
- **Ternary/Conditional operator:** `condition ? expr1 : expr2;` [cite: 1].

> [!danger] Semantic Error Trap
> `if (5 <= x <= 10)` is a **semantic error** [cite: 1]. Evaluates left to right as `(5<=x) <= 10`, which is always true (result 0 or 1, always ≤10) [cite: 1]. Must write `x>=5 && x<=10` [cite: 1].

---

# Control Structures

- 3 control types: **Sequential, Selectional (decision), Iterational (repetition)** [cite: 1].
- Forms of `if`: simple if, if-else, nested if-else, else-if ladder, jump statements (break/continue/goto/return) [cite: 1].
- **Dangling else rule:** an `else` binds to the **nearest unmatched `if`**, unless braces say otherwise [cite: 1].
- **else-if ladder:** only ONE branch executes; first true condition wins, rest are skipped [cite: 1].
- Leap year logic: divisible by 4 AND (not divisible by 100 OR divisible by 400) [cite: 1].

> [!bug] Empty Statement Bug
> `if (x == 0);` — the trailing semicolon creates an **empty statement** [cite: 1]. The `printf` after it always executes regardless of the condition (syntactically valid, semantically a bug) [cite: 1].

---

# Number System Conversions

- **Decimal → Binary/Octal/Hex:** repeatedly divide by 2/8/16, read remainders **bottom to top** [cite: 1].
- **Binary → Decimal:** multiply each bit by its power-of-2 positional value, sum [cite: 1].
- **Binary → Octal:** group bits in **3s** from the right (pad with leading zeros) [cite: 1].
- **Binary → Hex:** group bits in **4s** from the right [cite: 1].
- **Octal → Binary:** each octal digit → 3-bit binary [cite: 1].
- **Hex → Binary:** each hex digit → 4-bit binary [cite: 1].
- **Octal ↔ Hex:** no direct method — convert via binary as intermediate step [cite: 1].
- Hex digits A–F represent 10–15 [cite: 1].

---

# Quick Self-Test Traps to Remember

- [ ] `SQUARE(2+3)` with unparenthesized macro → 11, not 25 [cite: 1].
- [ ] `if(x==0);` → semicolon bug, next line always runs [cite: 1].
- [ ] `5 <= x <= 10` → always true regardless of x (left-to-right evaluation trap) [cite: 1].
- [ ] Prefix vs postfix `++` output order [cite: 1].
- [ ] `'5'` (char, ASCII 53) vs `5` (int) vs `"5"` (string) [cite: 1].
- [ ] Octal literals start with a leading `0` — `0123` is NOT 123 decimal [cite: 1].
- [ ] `int main()` is correct; `void main()` is non-standard [cite: 1].
- [ ] `<header.h>` vs `"header.h"` — search order difference [cite: 1].
- [ ] Two's complement for negative number storage [cite: 1].
- [ ] `&&` / `||` short-circuit and only return 0 or 1 [cite: 1].