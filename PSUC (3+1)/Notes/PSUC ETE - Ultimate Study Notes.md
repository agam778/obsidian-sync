**MUJ · CSC1101 · 80 marks · July–November 2026 blueprint**

> [!important] Your route through these notes
> You have about **1½ days**. Start with the plan, learn the **CORE** sections, write the essential programs from memory, then attempt the mock. Use **EXTENSION** sections only after the core. Reading code is not enough: close the note and reproduce it.

These notes combine the three supplied Markdown notes, 22 slide decks including the older `.ppt`, the exam blueprint, and the six-page recursion handout. Repeated material is consolidated. Structures, unions, string operations, and some worked programs are supplemented because the blueprint includes more than the attachments teach in detail. Source locations and coverage are listed at the end.

**Code key:** blocks labelled as complete programs can be used independently. Function banks and syntax fragments are teaching examples to place in a suitable program, not one combined file. Unless stated otherwise, use small valid inputs and values whose intermediate and final results fit their types.

## Navigation

- [[#1. Blueprint and priorities]]
- [[#2. Your 1½-day study plan]]
- [[#3. Module 1 — Computer fundamentals and C foundations]]
- [[#4. Module 2 — Decisions, branches, and loops]]
- [[#5. Module 3 — Arrays, strings, searching, and sorting]]
- [[#6. Module 4 — Functions, pointers, and recursion]]
- [[#7. Module 5 — Structures and unions]]
- [[#8. Output questions and common mistakes]]
- [[#9. Closed-book practice and 80-mark mock]]
- [[#10. Final-hour revision]]
- [[#11. Optional material present in the sources]]
- [[#12. Source map and coverage notes]]

## 1. Blueprint and priorities

| Module | Blueprint contents | Marks | How to prepare |
|---|---|---:|---|
| 1 | Von Neumann architecture; languages and paradigms; number systems and representation; C structure; directives and macros; types, variables, constants, enum; storage classes; operators, conversions, precedence; format specifiers | **12–14** | Definitions, comparisons, conversions, output tracing |
| 2 | `if`, `if-else`, nested decisions, ladders, `switch`, `break`, `continue`, `goto`, all three loops | **16–20** | Write programs and trace control flow |
| 3 | 1D/2D arrays, character strings, linear search, bubble sort | **6–10** | Indexing, loops, string terminators, search/sort passes |
| 4 | Functions, call by value/reference, recursion, pointers, pointers with arrays | **24–28** | **Largest allocation.** Write and trace pointer/function/recursive code |
| 5 | Structures, nesting, arrays of structures, unions | **10–12** | Record-processing program and comparisons |

The ranges describe possible allocations; do not add every maximum and expect 80. The mock later uses one valid 80-mark distribution.

> [!warning] Use the blueprint for weightage
> `Lectures.md` says Unit 1 has 16 marks. The supplied ETE blueprint gives **Module 1: 12–14 marks**. These notes follow the blueprint. Statements in class notes such as “100% chance” are reminders of emphasis, not confirmed exam questions or an official paper pattern.

**Study order:** minimum C foundation → control flow → arrays → functions/pointers/recursion → structures → mixed practice. **Revision priority:** Module 4 → Module 2 → Modules 1 and 5 → Module 3. Arrays remain essential because they support Module 4.

**Essential programs to reproduce:** calculator with switch, leap year, prime check, digit reversal/palindrome, Fibonacci loop, pyramid, linear search, bubble sort, matrix transpose/multiplication, manual string palindrome, pointer swap, array function, recursive factorial/Fibonacci/GCD, array of student structures.

## 2. Your 1½-day study plan

Treat this as a **36-hour window**, not 36 hours of continuous studying. Aim for **18 focused study hours**, a full night of sleep, meals, and short breaks. The blocks below count focused time; take roughly 10 minutes away from the desk after each 50 minutes. Shift blocks around your actual exam time.

### Day 1 — Learn and build the patterns, 11 focused hours

| Block | Time | Task | Evidence that you learned it |
|---|---:|---|---|
| 1 | 2 h | Module 1 | One architecture diagram, conversions, storage-class table, format/precedence recall |
| 2 | 2½ h | Module 2 | Write calculator, leap year, prime, reverse number, and a pyramid |
| 3 | 1½ h | Module 3 | Write search, bubble sort, transpose, and string palindrome |
| 4 | 3 h | Module 4 | Trace pointers; write swap, array function, factorial, Fibonacci, GCD |
| 5 | 1½ h | Module 5 | Write student records; explain nested structure and union |

### Day 2 — Recall and exam rehearsal, 7 focused hours

| Block | Time | Task |
|---|---:|---|
| 6 | 1½ h | Module 4 from memory: pointer arithmetic, recursion trace, call-by-address program |
| 7 | 1½ h | 30 min each: Module 2 patterns, Module 3 strings/matrices, Module 5 records/unions |
| 8 | 2 h | Attempt the 80-mark practice mock without notes; this is a study timer, not the official exam duration |
| 9 | 1 h | Mark the mock and rewrite weak answers |
| 10 | 1 h | Final-hour revision and essential-program recall |

**For every program:** understand the input → identify changing variables → trace one small example → write without looking → test a boundary case.

**For every theory topic:** recall a definition, 3–4 points, and one example/diagram. For a 4-mark architecture answer, spend effort on the labelled diagram and component functions. For a long programming answer, include declarations, algorithm, correct loops/conditions, and sample input/output.

> [!tip] If you fall behind
> Keep all five modules, but shorten examples. Protect pointer swap, recursive factorial/Fibonacci, pointer–array expressions, storage classes, switch/loop tracing, bubble sort, strings, and student structures. Leave advanced recursion extensions until last.

## 3. Module 1 — Computer fundamentals and C foundations

**CORE · 12–14 marks.** Sources: Lectures 1–4, tokens/constants/variables/I/O/operators/storage-class decks, and all three Markdown notes.

### 3.1 Computer, program, hardware, and software

A **computer** is an electronic device that accepts input, processes data according to instructions, stores it, and produces output. **Data** means raw facts; **information** is data interpreted or processed for a purpose. A **program** is a sequence of instructions to perform a task.

- **Hardware:** physical components, such as CPU, keyboard, memory, display, and disks.
- **Software:** programs and related data. System software includes operating systems and translators; applications perform user tasks.
- **Digital computer:** represents and processes information using discrete states, usually binary 0 and 1.
- A complete computer system involves hardware, software, data, and users.

### 3.2 Von Neumann architecture — exam answer

**Definition:** a stored-program architecture in which **instructions and data share the same main memory**. The CPU fetches instructions from that memory and executes them.

```text
                         +---------------------------+
                         | Main memory               |
                         | Instructions AND data     |
                         +-------------+-------------+
                                       ↕
                       Address / Data / Control buses
                                       ↕
 +------------+          +---------------------------+          +------------+
 | Input unit |  ------> | CPU                       | -------> | Output unit|
 | Keyboard   |          | Control Unit (CU)          |          | Screen     |
 +------------+          | ALU + registers           |          +------------+
                         +---------------------------+
```

| Component | Function |
|---|---|
| Input unit | Receives data/instructions from outside |
| Memory | Stores programs, input, intermediate values, and results |
| Control unit | Fetches/decodes instructions and coordinates operations |
| ALU | Arithmetic, comparisons, bitwise and logical operations |
| Registers | Very fast CPU storage for instructions, addresses, and intermediate values |
| Output unit | Presents processed results |

**Registers:** PC holds the address of the next instruction; IR holds the current instruction; accumulator holds intermediate results; status register holds flags such as zero/carry; MAR holds a memory address; MDR holds data being transferred to/from memory. Exact register widths depend on the processor.

**Fetch–decode–execute–store cycle:**

1. **Fetch:** use PC to obtain the next instruction from memory into IR; advance/update PC.
2. **Decode:** CU interprets the operation and required operands.
3. **Execute:** CPU performs the operation, possibly using ALU, memory, or I/O.
4. **Store/write back:** save the result where required. Repeat; a branch can change PC.

**Advantages:** easy to reprogram, unified memory simplifies design, general-purpose operation. **Limitation:** instructions and data compete for a shared transfer path, causing the **Von Neumann bottleneck**.

**Bus types:** data bus carries values/instructions; address bus identifies locations; control bus carries read/write and other coordination/status signals.

> [!note] Small corrections to the slides
> Von Neumann architecture and an **instruction set architecture (ISA)** are different concepts. ISA defines instructions and the programmer-visible machine interface. Clock frequency measures cycles/second; it does not mean exactly one instruction completes per cycle. Register widths and memory speeds shown in individual slides are examples, not universal rules.

### 3.3 Memory and storage

**Typical speed order:** registers → cache → RAM → SSD/HDD. Capacity generally increases and cost per byte decreases as you move right.

| Memory | Main idea | Volatility |
|---|---|---|
| Registers | Inside CPU, fastest working storage | Usually volatile |
| Cache | Small fast store of frequently/recently used memory contents, reduces average access time | Volatile |
| RAM | Main read/write working memory | Volatile |
| ROM/firmware storage | Retains startup/firmware information; some forms are reprogrammable | Non-volatile |
| HDD | Magnetic secondary storage | Non-volatile |
| SSD | Flash-memory secondary storage, no moving disk mechanism | Non-volatile |

L1 cache is typically smallest/fastest, followed by L2 then L3. Exact sizes and locations vary. DRAM commonly uses capacitor-based cells requiring refresh; SRAM is commonly used for caches. Flash stores charge in memory cells. These hardware details are background from Lecture 2.

**Units:** bit = one binary digit; on usual machines byte = 8 bits; `sizeof(char)` is always 1 C byte; word size depends on architecture, e.g. 16/32/64 bits. `1 KiB = 1024 bytes`; decimal `1 kB = 1000 bytes`.

### 3.4 Languages, translators, and paradigms

| Feature | Machine language | Assembly language | High-level language |
|---|---|---|---|
| Representation | Binary instruction encodings | Mnemonics such as `MOV`, `ADD` | C statements such as `sum = a + b;` |
| Translator | CPU executes instructions directly | Assembler | Compiler/interpreter system |
| Hardware dependence | High | High | Source often portable with suitable implementation |
| Human readability | Very difficult | Easier than binary | Easier to learn, maintain, and debug |
| Example | Instruction bit pattern | `MOV AX, 5` | `int x = 5;` |

**Assembly advantages:** direct hardware control, precise low-level operations, potentially compact/efficient code. **Disadvantages:** machine dependence, more instructions for a task, difficult maintenance/debugging, requires an assembler. This covers the assembly question in `Lecture 3_Questions`; advanced assembly features are not a priority.

| Translator | Work | Typical example |
|---|---|---|
| Compiler | Translates source to another form before execution, commonly assembly/object code | C compiler such as GCC |
| Assembler | Translates assembly into object/machine code | NASM, MASM |
| Interpreter | Executes a program through an execution engine, commonly incrementally | Python interpreter |

The simple exam comparison is “compiler translates before execution; interpreter executes during interpretation.” Actual systems may use bytecode/JIT compilation. A high-level program can compile to the same machine instructions as assembly, so language alone does not determine execution speed.

**Programming paradigms:** imperative states how to perform steps; procedural organises imperative code into functions (**C's main approach**); object-oriented organises behaviour/data into objects; functional emphasises functions and expressions; declarative states desired results, e.g. SQL queries. C is commonly described as structured and procedural.

### 3.5 Algorithms and flowcharts

An **algorithm** is a finite sequence of precise steps for solving a problem. Characteristics: zero or more inputs; at least one output; definiteness; finiteness; effectiveness.

| Flowchart shape | Meaning |
|---|---|
| Oval | Start/end |
| Parallelogram | Input/output |
| Rectangle | Processing/assignment |
| Diamond | Decision; label branches Yes/No |
| Arrow | Direction of flow |
| Small circle | On-page connector |
| Pentagon-style connector | Off-page connection |
| Rectangle with double side lines | Predefined process/subroutine |
| Cylinder | Stored data/database |

Follow the slide convention: one start and one stop, flow top-to-bottom/left-to-right, avoid crossing arrows, number on-page connectors and letter off-page connectors. These are classroom drawing conventions.

**Algorithms you should be able to write:**

- Sum: Start → read `a,b` → `sum=a+b` → display sum → stop.
- Maximum of two: read `a,b` → if `a>=b`, max=a; otherwise max=b → display.
- Maximum of three: max=a → if b>max, max=b → if c>max, max=c → display.
- Factorial: read non-negative n → fact=1 → for i=1..n multiply fact by i → display.
- Multiplication table: read n → for i=1..10 display n,i,n*i.
- Login flowchart: input credentials → decision “valid?” → success or error → end. This illustrates a decision; authentication implementation is outside this course task.

### 3.6 Number systems — all conversion routes

For base `b`, each digit is weighted by a power of `b`:

$$ (d_k\ldots d_0.d_{-1}\ldots)_b = \sum_i d_i b^i $$

| Base | Name | Valid digits |
|---:|---|---|
| 2 | Binary | 0,1 |
| 8 | Octal | 0–7 |
| 10 | Decimal | 0–9 |
| 16 | Hexadecimal | 0–9,A–F; A=10 through F=15 |

**Decimal integer → another base:** divide repeatedly by the target base and read remainders **bottom to top**.

```text
25 ÷ 2 = 12 rem 1
12 ÷ 2 =  6 rem 0
 6 ÷ 2 =  3 rem 0
 3 ÷ 2 =  1 rem 1
 1 ÷ 2 =  0 rem 1       => (25)10 = (11001)2

125 ÷ 8 = 15 rem 5
 15 ÷ 8 =  1 rem 7
  1 ÷ 8 =  0 rem 1      => (125)10 = (175)8

250 ÷ 16 = 15 rem 10 (A)
 15 ÷ 16 =  0 rem 15 (F) => (250)10 = (FA)16
```

**Other base → decimal:** expand positional weights.

- `(101101)₂ = 32 + 8 + 4 + 1 = 45`.
- `(345)₈ = 3×64 + 4×8 + 5 = 229`.
- `(2A)₁₆ = 2×16 + 10 = 42`.

**Binary ↔ octal:** group **3 bits** per octal digit. **Binary ↔ hex:** group **4 bits** per hex digit. For integers start grouping at the right; pad the left with zeros.

```text
(1101011)2 = 001 101 011 = (153)8
(11111010)2 = 1111 1010 = (FA)16
(345)8 = 011 100 101 = (11100101)2
(2A)16 = 0010 1010 = (101010)2

Octal → hex: (345)8 → 011100101 → 0000 1110 0101 → (E5)16
Hex → octal: (2A)16 → 00101010 → 000 101 010 → (52)8
```

Binary is the quickest bridge between octal and hexadecimal; conversion through decimal also works. Keep zero-padding **inside each original digit group** until regrouping is finished.

| Decimal | Binary group | Octal if 0–7 | Hex |
|---:|---|---:|---|
| 0 | 0000 | 0 | 0 |
| 1 | 0001 | 1 | 1 |
| 2 | 0010 | 2 | 2 |
| 3 | 0011 | 3 | 3 |
| 4 | 0100 | 4 | 4 |
| 5 | 0101 | 5 | 5 |
| 6 | 0110 | 6 | 6 |
| 7 | 0111 | 7 | 7 |
| 8 | 1000 | — | 8 |
| 9 | 1001 | — | 9 |
| 10 | 1010 | — | A |
| 11 | 1011 | — | B |
| 12 | 1100 | — | C |
| 13 | 1101 | — | D |
| 14 | 1110 | — | E |
| 15 | 1111 | — | F |

**Fractional conversion:** multiply the decimal fraction repeatedly by the target base; read integer parts **top to bottom**. `.625×2=1.25`, `.25×2=.5`, `.5×2=1.0`, so `.625₁₀=.101₂`. Thus `10.625₁₀=1010.101₂`. Group fractional binary bits outward from the point; pad on the **right**: `1010.101₂ = 12.5₈ = A.A₁₆`. Some fractions repeat indefinitely.

**Source exercise answers — try them before looking:**

| Given | Decimal | Binary | Octal | Hex |
|---|---:|---|---|---|
| 125 decimal | 125 | 1111101 | 175 | 7D |
| 250 decimal | 250 | 11111010 | 372 | FA |
| 10110110 binary | 182 | 10110110 | 266 | B6 |
| 11101101 binary | 237 | 11101101 | 355 | ED |
| 345 octal | 229 | 11100101 | 345 | E5 |
| 726 octal | 470 | 111010110 | 726 | 1D6 |
| 7D hex | 125 | 1111101 | 175 | 7D |
| 3AF hex | 943 | 1110101111 | 1657 | 3AF |

### 3.7 Integer and floating-point representation

**Unsigned n-bit range:** `0` to `2ⁿ−1`. **Two's-complement signed n-bit range:** `−2ⁿ⁻¹` to `2ⁿ⁻¹−1`.

| Bits | Unsigned | Signed two's complement |
|---:|---|---|
| 8 | 0…255 | −128…127 |
| 16 | 0…65535 | −32768…32767 |
| 32 | 0…4294967295 | −2147483648…2147483647 |

**Represent −5 in 8 bits:** `+5 = 00000101`; invert → `11111010`; add 1 → **11111011**. To decode it, use the negative top-bit weight: `−128+64+32+16+8+2+1=−5`.

Two's complement is not simply “a sign bit plus unsigned magnitude.” For comparison, sign-magnitude −5 is `10000101`; one's complement −5 is `11111010`. Two's complement has a single zero and one extra negative value.

> [!warning] Overflow and char traps
> Unsigned arithmetic wraps modulo `2ⁿ`. Signed arithmetic overflow has **undefined behaviour**, so do not promise it “becomes negative.” Plain `char` may be signed or unsigned. Assigning 130 to an 8-bit signed character type is not a portable way to guarantee −126; a two's-complement implementation may produce it. State the question's width/representation assumptions.

**Floating point:** represents a sign, scaled significand, and exponent. Decimal literals such as `3.14`, `-0.001`, `6.022e23` are usually approximate in binary.

**Common IEEE 754 binary32 (`float`) layout:** sign 1 bit, exponent 8 bits with bias 127, fraction 23 bits. For a **normal** number:

$$ value=(-1)^s\times(1.f)_2\times2^{E-127} $$

**Slide example: 19.125**

1. `19 = 10011₂`; `.125 = .001₂`, so `19.125 = 10011.001₂`.
2. Normalise: `1.0011001 × 2⁴`.
3. Sign `0`; biased exponent `4+127=131=10000011₂`.
4. Drop the leading implicit 1; pad fraction to 23 bits.
5. Result: **`0 10000011 00110010000000000000000`**.

Common binary64 (`double`): 1 sign, 11 exponent bits (bias 1023), 52 fraction bits. Exponent all zeros is used for zero/subnormals; all ones for infinities/NaNs. C does not require every implementation to use these exact IEEE layouts. For this course, learn the binary32 construction and state IEEE 754 when using it.

### 3.8 Basic C program and compilation

```c
#include <stdio.h>
#define PI 3.14159

int main(void)
{
    double radius;
    if (scanf("%lf", &radius) != 1 || radius < 0)
        return 1;
    printf("Area = %.2f\n", PI * radius * radius);
    return 0;
}
```

`#include` includes a header's contents during preprocessing. `main` is the entry function of an ordinary hosted C program. Braces enclose blocks; semicolons terminate expression/declaration statements; `return 0;` reports successful execution. Use **`int main(void)`** in your answers. `void main()` and `<conio.h>` functions such as `getch()` are compiler-specific, not required standard C.

**Build sequence: PCAL**

```text
.c source → Preprocessor → expanded source → Compiler → assembly
          → Assembler → object file → Linker + libraries → executable
          → Loader places program in memory for execution
```

Preprocessing includes headers, expands macros, handles conditional compilation and removes comments. The linker resolves references across object files/libraries. The loader runs later; preprocessing does not “upload library functions into RAM.”

**Declaration versus definition versus call:**

```c
int add(int a, int b);                   // declaration / prototype
int add(int a, int b) { return a + b; }  // definition (implementation)
// In a function: int result = add(2, 3); // call, result 5
```

Headers usually contain declarations, macros, and types. Library implementations are linked as needed; `sqrt(100)` is a call, not a function declaration. `include` is a preprocessing directive name, not a C keyword.

| Header | Common declarations |
|---|---|
| `<stdio.h>` | `printf`, `scanf`, `getchar`, `putchar`, `fgets`, `puts` |
| `<stdlib.h>` | `abs`, `strtol`, `malloc`, `free`, `exit` |
| `<string.h>` | `strlen`, `strcpy`, `strcat`, `strcmp` |
| `<math.h>` | `sqrt`, `pow`, `fabs` |
| `<ctype.h>` | `isalpha`, `isdigit`, `toupper`, `tolower` |

`#include <stdio.h>` uses the implementation's standard include search; `#include "myheader.h"` usually searches relative to the source first. Exact paths depend on implementation.

### 3.9 Preprocessor directives and macros

```c
#define LIMIT 100                     // object-like macro
#define SQUARE(x) ((x) * (x))         // function-like macro
#define MUL(a, b) ((a) * (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define AREA(r) (3.14159 * (r) * (r))
```

Macro replacement happens before C compilation. The arithmetic in a replacement expression is evaluated when the resulting C expression is evaluated; the preprocessor does not generally calculate it. No semicolon after these definitions. In a function-like definition there is no space between the macro name and `(`.

**Trap:** `#define BAD_SQUARE(x) x*x` gives `BAD_SQUARE(2+3)` → `2+3*2+3` → **11**. `SQUARE(2+3)` → **25**. `MUL(3+2,4)` → **20**. `MAX(8,5)` → **8**.

**Advantages:** reusable symbolic expressions, concise code, no necessary function call. **Limitations:** replacement has no independent parameter type checking, confusing debugging, repeated evaluation, possible code growth. It is not guaranteed faster than an optimised function.

> [!danger] Parentheses do not solve repeated side effects
> `SQUARE(i++)` expands to two unsequenced modifications of `i`: undefined behaviour. Avoid `++`, `--`, assignments, or side-effecting calls in these macro arguments.

| Feature | `#define MAX_SIZE 100` | `const int max_size = 100;` |
|---|---|---|
| Mechanism | Preprocessor replacement | Typed C object |
| Own type/address | Macro name has neither | Object has type and may have an address |
| Scope | From definition to `#undef`/end of preprocessing file | C scope rules |
| Memory | No storage object for the macro name | Object may occupy storage, possibly optimised away |

Other source directives: `#undef` removes a macro definition; `#if`, `#ifdef`, `#ifndef`, `#elif`, `#else`, `#endif` select code during preprocessing. Example:

```c
#ifndef MY_HEADER_H
#define MY_HEADER_H
/* declarations would go here */
#endif
```

### 3.10 Tokens, identifiers, keywords, and constants

A **token** is a smallest lexical unit used to form C source. Classroom categories: keywords, identifiers, constants, string literals, operators, separators/punctuators. Directives are preprocessing instructions made up of preprocessing tokens; they are sometimes listed as an extra classroom category.

In `int sum = a + 10;`, identify `int` keyword; `sum,a` identifiers; `10` constant; `=,+` operators; `;` separator.

**Identifier rules:** letters, digits, underscore; first character must be a letter/underscore; case-sensitive; no spaces or punctuation such as `@,+,-`; cannot be a keyword. Prefer names beginning with a letter to avoid reserved underscore conventions.

Valid: `total_marks`, `value123`, `sum`, `Sum`. Invalid: `1sum`, `total-marks`, `sum value`, `a+b`, `float`, `do`. `main` and `printf` are identifiers, not keywords.

**Classic 32 C keywords shown in the slides:**

```text
auto break case char const continue default do double else enum extern
float for goto if int long register return short signed sizeof static
struct switch typedef union unsigned void volatile while
```

These are the traditional C90 set; later C versions add keywords. Do not memorise compiler-specific words as universal C keywords.

| Constant kind | Example | Remember |
|---|---|---|
| Decimal integer | `123`, `25U`, `12LL` | No decimal point |
| Octal integer | `017` | Starts with 0; `017 = 15` decimal |
| Hex integer | `0x1A`, `0XFF` | Starts with 0x/0X |
| Floating | `12.5`, `12.5f`, `6.02e23` | Unsuffixed floating literal is `double`; `f` makes `float`, `L` long double |
| Character | `'A'`, `'5'`, `'\n'` | Ordinary character constants have type `int` in C |
| String literal | `"MUJ"` | Array of characters including terminating `\0` |

`int a=017,b=2;` gives `a+b = 17` decimal. `09` is invalid as an octal integer literal. `0b1010` appears in a slide: it is a newer-standard feature/compiler extension, so use `10` or `0xA` for portable course answers based on C11/C17.

`5` is a numeric value; `'5'` is a character code (53 on ASCII systems); `"5"` is a two-character array containing `'5','\0'`. A `char` typically has 256 possible bit patterns on an 8-bit-byte machine; ASCII itself has 128 codes.

**Escape sequences:** `\n` newline, `\t` horizontal tab, `\\` backslash, `\"` double quote, `\'` single quote, `\r` carriage return, `\b` backspace, `\a` alert, `\f` form feed, `\v` vertical tab, `\0` null character. Null has numeric value 0 and marks a string's end.

### 3.11 Data types, variables, enum, and conversion

A **variable** names an object used to hold a value. A **data type** determines the kind of value, valid operations, representation, and size requirements. Declaration introduces a name/type; initialisation gives its initial value.

```c
int age = 18;
float price = 12.5f;
double average = 76.25;
char grade = 'A';
const int days = 7;
```

| Type | Typical bytes | Input | Output |
|---|---:|---|---|
| `char` | 1 | `%c` | `%c` |
| `short` | 2 | `%hd` | `%hd` |
| `int` | 4 | `%d` | `%d` |
| `unsigned int` | 4 | `%u` | `%u` |
| `long` | 4 or 8 | `%ld` | `%ld` |
| `long long` | 8 | `%lld` | `%lld` |
| `float` | 4 | `%f` | `%f` (promoted to double) |
| `double` | 8 | `%lf` | `%f` |
| `long double` | Varies, often 8/12/16 | `%Lf` | `%Lf` |
| `size_t` (`sizeof`/`strlen` result) | Varies | `%zu` | `%zu` |

These sizes are examples, not fixed C requirements. `sizeof(type)` reports implementation size. `void` represents absence of a value, e.g. a function returning nothing; standard C does not define `sizeof(void)`. C has no built-in `string` type: use character arrays/pointers.

**Modifiers:** `signed`, `unsigned`, `short`, `long`, `long long` where valid. Literal suffixes: `12U`, `12L`, `12LL`, `12UL`, `12ULL`.

**Classification:** basic arithmetic types; derived types such as arrays/pointers/functions; user-defined record types `struct`, `union`; enumeration `enum`; `void`. `typedef` provides an alias, e.g. `typedef unsigned long Count;`.

```c
enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };
enum Number { A = 5, B, C = 10, D, E };
// WED=3; A=5, B=6, C=10, D=11, E=12
```

An **enumeration** provides named integer constants. If omitted, the first value is 0 and later values increment from the previous one. An enum variable can change; the enumerator names are constants.

**Implicit conversion:** C converts values as part of operations/assignment, e.g. `double x=5;` gives 5.0. **Explicit conversion/type casting:** programmer requests a conversion using `(type)expression`.

```c
int a = 5, b = 2;
double x = a / b;          // 2.0: integer division happens first
double y = (double)a / b;  // 2.5
int z = (int)3.9;          // 3: fractional part discarded
double w = (double)(a/b);  // still 2.0
```

In mixed arithmetic, integer promotions and usual arithmetic conversions determine the common type. For basic exam cases, `int + double` uses floating arithmetic. Mixed signed/unsigned cases can be surprising; avoid treating all conversions as “smaller type always becomes larger type.”

### 3.12 Storage classes, scope, lifetime, and linkage

**Scope:** where a name is visible. **Lifetime/storage duration:** how long its object exists. **Linkage:** whether declarations in different locations refer to the same entity.

| Class/use | Scope | Lifetime | Uninitialised value | Key idea |
|---|---|---|---|---|
| `auto` local | Enclosing block | Block activation | Indeterminate | Default local storage |
| `register` local | Enclosing block | Block activation | Indeterminate | Optimisation request; no guarantee of a CPU register |
| `static` local | Enclosing block | Entire program | Zero | Retains value across calls |
| `static` file-scope | File scope | Entire program | Zero | Internal linkage: entity confined to translation unit |
| Ordinary global definition | File scope | Entire program | Zero | Usually external linkage |
| `extern` declaration | Where declared | Refers to existing object, typically entire program | Depends on definition | Declares an object defined elsewhere; normally allocates no new object |

In course language, “garbage” means an indeterminate uninitialised automatic value; **do not read it**. Globals are not visible everywhere without declarations and can be hidden by inner names. File scope begins at a declaration, not magically at every line/file.

```c
#include <stdio.h>
void counter(void)
{
    int a = 0;
    static int b = 0;
    ++a;
    ++b;
    printf("%d %d\n", a, b);
}
int main(void)
{
    counter(); counter(); counter();
    return 0;
}
```

Output:

```text
1 1
1 2
1 3
```

`b` is initialised once and persists. `a` starts at 0 on each call. A slide's text extraction omits `static` before `b`; the intended retained-value example needs it as above.

**Extern across files:**

```c
// file1.c
int score = 100;       // definition
// file2.c
extern int score;     // declaration referring to that definition
```

Scope also includes function scope for labels and prototype scope for parameter names in prototypes. In the C11/C17 model used here, you cannot apply `&` to a `register` variable. Inner locals can shadow globals; C has no C++ `::name` operator to bypass shadowing.

### 3.13 Formatted input and output

`stdin`, `stdout`, `stderr` are standard streams. They usually connect to keyboard/screen but may be redirected. Standard I/O works with streams, often buffered; `<stdio.h>` does not mean “RAM input” and `<conio.h>` is not a required alternative.

```c
int age;
float marks;
double average;
char grade;
// These statements belong inside a function:
// scanf("%d %f %lf %c", &age, &marks, &average, &grade);
// printf("%d %.2f %.2f %c\n", age, marks, average, grade);
```

`scanf` needs destination addresses. `printf` normally needs values. **For input `float` uses `%f`, `double` uses `%lf`; for output use `%f` for both.** Format/type mismatch may cause undefined behaviour.

**printf structure:** `%[flags][width][.precision][length]specifier`.

| Example expression | Output/meaning |
|---|---|
| `printf("[%5d]", 42)` | `[   42]`; width is minimum field size |
| `printf("[%-5d]", 42)` | `[42   ]`; left alignment |
| `printf("[%05d]", 42)` | `[00042]`; zero padding |
| `printf("%.4d", 42)` | `0042`; integer precision = minimum digits |
| `printf("[%9.3f]", 123.456789)` | `[  123.457]`; includes point/sign in width |
| `printf("[%*.*f]", 7, 2, 98.736)` | `[  98.74]`; dynamic width and precision |
| `printf("%.3s", "Hello")` | `Hel`; string precision = maximum characters |
| `printf("%+d", 42)` | `+42`; explicit sign |
| `printf("%#x", 42U)` | `0x2a`; alternate hex form |
| `printf("%%")` | `%` |

Width does **not** truncate a longer numeric value. Precision with `%f/%e` counts digits after the decimal; with `%g` it controls significant digits. `%f` rounds to the requested precision too. `%g` chooses fixed/exponential form, typically removing trailing zeros. Default `%f`/`%e` precision is six digits after the point; default `%g` precision is six significant digits.

Examples: `%g` on `0.0000875` → `8.75e-05`, `8750000.0` → `8.75e+06`, `87.50` → `87.5`. Exact exponent padding can vary. `%d` and `%i` both print signed decimal. `%o` prints unsigned octal; `%x/%X` unsigned hexadecimal. `%s` output continues until **null `\0`**, including embedded spaces.

**scanf features:**

```c
// Inside a function, with correctly typed declarations:
// scanf("%2d%4d", &a, &b);          // input 123456 -> a=12, b=3456
// scanf("%d/%d/%d", &d, &m, &y);   // slash literals must match
// scanf("%d%*c%d%*c%d", &d,&m,&y); // skip one separator each time
// scanf("%*d%d", &a);               // read/discard first int, store next
// scanf("%i", &a);                  // base detection: 010 -> 8, 0x10 ->16
```

`scanf("%d", &a)` reads decimal even with a leading zero. Assignment-suppressed fields do not need arguments and do not count toward the return value. A literal `%%` matches a percent sign. `scanf` returns the number of successful assignments; check it before using variables.

`%c`, `%[` and `%n` do not automatically skip leading whitespace; most numeric conversions and `%s` do. Use `scanf(" %c", &ch)` to skip leftover whitespace before a character. Whitespace in a format skips input whitespace; a trailing newline in a `scanf` format may make interactive input appear to wait.

**Scansets:** `scanf("%19[aeiou]", s)` accepts a run of vowels; `scanf("%19[^\n]", s)` accepts up to 19 characters before newline. Array must hold **20** including null. If the first character does not match, conversion fails and the destination is unchanged; the old I/O deck's “stores only null” statement is misleading. Check the return value.

**Lower-priority I/O details from the old deck:** `%p` prints an address with a `(void *)` argument; `scanf("%p", &vp)` requires a `void **` destination where `vp` is `void *`. `%n` stores the number of characters processed so far into an `int *`, consumes/prints no character, and is not an ordinary value conversion.

### 3.14 Operators, precedence, and expressions

An **expression** combines operands/operators to compute a value or cause effects. An expression followed by `;` forms an expression statement; a group in `{...}` is a compound statement. A lone `;` is a null statement. Not every C statement is an expression statement.

| Category | Operators | Example/result |
|---|---|---|
| Arithmetic | `+ - * / %` | `7/2=3`, `7%2=1`, `7.0/2=3.5` |
| Relational/equality | `< <= > >= == !=` | `3<5` yields 1 |
| Logical | `&&` `\|\|` `!` | Boolean result 0 or 1 |
| Assignment | `= += -= *= /= %= &= ^= \|= <<= >>=` | `a /= b+c` groups as `a=a/(b+c)` |
| Increment/decrement | `++ --` | Change a modifiable operand by 1 |
| Bitwise | `&` `\|` `^ ~ << >>` | Operate on integer bits |
| Conditional | `?:` | `max=(a>b)?a:b` |
| Other | `sizeof`, cast, comma, `&`, `*`, `[]`, `.`, `->` | Size, conversion, sequencing, addresses/access |

Integer division truncates toward zero: `-7/2=-3`, `-7%2=-1`. `%` requires integer operands. Division/remainder by zero is invalid. `^` means XOR, **not power**.

**Precedence from highest to lowest:**

| Group | Operators | Associativity |
|---:|---|---|
| 1 | postfix `() [] . -> x++ x--` | Left |
| 2 | unary `++ -- + - ! ~ * & sizeof`, casts | Right |
| 3 | `* / %` | Left |
| 4 | `+ -` | Left |
| 5 | `<< >>` | Left |
| 6 | `< <= > >=` | Left |
| 7 | `== !=` | Left |
| 8 | bitwise `&` | Left |
| 9 | bitwise `^` | Left |
| 10 | bitwise `\|` | Left |
| 11 | `&&` | Left |
| 12 | `\|\|` | Left |
| 13 | `?:` | Right |
| 14 | assignments | Right |
| 15 | comma operator | Left |

**Precedence/associativity determine grouping, not a universal evaluation order.** `a+b*c` means `a+(b*c)`; `10-3-2` means `(10-3)-2=5`; `a=b=5` means `a=(b=5)`. C does not generally specify the order of evaluating function arguments.

```c
int a=1, b=1, c;
c = a++ + b;  // c=2, a=2, b=1 after the statement
// ++a gives the updated value; a++ gives the previous value.
```

`++5`, `++(x+1)`, array-name `a++` are invalid because the operand is not a modifiable scalar lvalue. `++*p` is valid when `p` points to a modifiable object.

**Short circuit:** `0 && expression` skips the right expression; nonzero `|| expression` skips the right expression. `if (p != NULL && *p > 0)` uses this deliberately.

| A true? | B true? | `A&&B` | `A\|\|B` |
|---|---|---:|---:|
| No | No | 0 | 0 |
| No | Yes | 0 | 1 |
| Yes | No | 0 | 1 |
| Yes | Yes | 1 | 1 |

**Bitwise worked examples:**

```text
12 = 00001100
25 = 00011001
&  = 00001000 = 8
|  = 00011101 = 29
^  = 00010101 = 21
```

On common two's-complement signed ints, `~35 = -36`. The low 8 complemented bits are `11011100`, which represent 220 **as unsigned 8-bit**, not the signed-int result. Integer promotions mean a byte-sized operand is commonly complemented as `int`. Mask with `& 0xFFU` when the question wants only the low byte.

For unsigned values, `5U<<1=10`, `20U>>2=5`. Left shift moves bits toward higher positions; right shift toward lower positions. Use nonnegative/unsigned examples; negative signed shifts and overflowing signed left shifts have portability/undefined-behaviour traps. Shift count must be nonnegative and smaller than the promoted operand width.

**Bit operations:** test bit k: `(x & (1U<<k)) != 0`; set: `x |= 1U<<k`; clear: `x &= ~(1U<<k)`; toggle: `x ^= 1U<<k`.

**Swap without third variable:** `a^=b; b^=a; a^=b;` for two distinct integer objects. Addition/subtraction swapping can overflow signed ints. A temporary variable is clearer; learn XOR because your class notes flag it.

**Essential traps:** `=` assigns, `==` compares; `5<=x<=10` means `(5<=x)<=10` and is always true for integer x; write `x>=5 && x<=10`. Parenthesise `(x & 1U) == 0` because `==` binds more tightly than `&`.

> [!check] Module 1 recall gate
> Draw Von Neumann architecture; explain PCAL; convert 345 octal to hex; represent −5 in 8 bits; encode 19.125 as binary32; compare macro/const; recall enum values and storage classes; distinguish `%f/%lf`; explain why `(double)a/b` differs from `(double)(a/b)`.

## 4. Module 2 — Decisions, branches, and loops

**CORE · 16–20 marks.** Learn program patterns, then practise changing conditions and boundaries. Sources: Lectures 11–14 and the Markdown class notes.

### 4.1 Selection statements

In a condition, zero is false; nonzero is true. Conditions may use scalar expressions, not only `int` expressions. Three broad control patterns are **sequence**, **selection**, and **iteration**.

```c
// Syntax patterns; substitute your own declared variables and statements.
if (condition) {
    /* statements for true */
}

if (condition) {
    /* true branch */
} else {
    /* false branch */
}

if (condition1) {
    /* first choice */
} else if (condition2) {
    /* second choice */
} else {
    /* fallback */
}
```

**Nested if:** an if inside another branch. **Else-if ladder:** checks conditions in order and runs the first matching branch only. Multiple independent `if`s may all execute. Braces are optional around a single statement, but use them to avoid errors.

**Dangling else:** binds to the nearest preceding unmatched `if` in the same nesting context.

```c
int x = 4;
if (x > 5)
    if (x < 10)
        printf("A");
    else
        printf("B");
// No output: the else belongs to the inner if.
```

**Semicolon bug:** `if (x==0); printf("zero");` prints `zero` regardless of x. `;` is a legal null body, so this is a logic error, not necessarily a syntax error.

### 4.2 Decision programs and conditions

For the short fragments below, put them inside `main` with the indicated variable declarations/input. Complete standalone programs later show the full format.

| Task | Core decision |
|---|---|
| Even/odd | `n % 2 == 0` |
| Positive/negative/zero | test `n>0`, then `n<0`, otherwise zero |
| Maximum of two | `max = a>b ? a:b;` |
| Maximum of three | initialise max=a, update if b>max, then if c>max |
| Minimum of three | reverse those comparisons |
| Leap year | `year%400==0 \|\| (year%4==0 && year%100!=0)` |
| Range 5 to 10 inclusive | `x>=5 && x<=10` |
| ASCII letter/digit | compare to `'a'..'z'`, `'A'..'Z'`, `'0'..'9'` |

**Leap-year standalone program:**

```c
#include <stdio.h>
int main(void)
{
    int year;
    if (scanf("%d", &year) != 1 || year <= 0) return 1;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        puts("Leap year");
    else
        puts("Not a leap year");
    return 0;
}
```

Test `2000` → leap, `1900` → not leap, `2024` → leap, `2025` → not leap.

**Class grade ladder:** after checking marks are 0…100, `>=80` A; else `>=60` B; else `>=50` C; else `>=40` D; otherwise F. Input 46 → D; 64 → B. Test higher cutoffs first.

**Character classification:**

```c
// Inside a function; ASCII-compatible letter ordering assumed.
char ch;
if (scanf(" %c", &ch) != 1) return 1;
if (ch >= 'a' && ch <= 'z') puts("Lowercase");
else if (ch >= 'A' && ch <= 'Z') puts("Uppercase");
else if (ch >= '0' && ch <= '9') puts("Digit");
else puts("Special character");
```

In Lecture 11 the first tests are independent `if`s and `else` belongs only to the digit test, so an uppercase letter prints both “uppercase” and “special.” The ladder above fixes the intended classification. Standard character functions are another option: `isalpha((unsigned char)ch)` etc.

**Nested smallest-of-three pattern:** if a<b, compare a with c; otherwise compare b with c. Equality must still produce a valid smallest value. For PCM questions, read/validate each mark and calculate `average=(p+c+m)/3.0`; apply **the thresholds given in the question**. The notes do not supply a complete PCM eligibility rule.

**Quadratic roots — source example, corrected and complete:**

```c
#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c, d;
    if (scanf("%lf%lf%lf", &a, &b, &c) != 3) return 1;
    if (a == 0) {
        if (b != 0) printf("Linear root = %.2f\n", -c/b);
        else if (c == 0) puts("Infinitely many solutions");
        else puts("No solution");
        return 0;
    }
    d = b*b - 4*a*c;
    if (d > 0) {
        printf("%.2f %.2f\n", (-b+sqrt(d))/(2*a),
                              (-b-sqrt(d))/(2*a));
    } else if (d == 0) {
        printf("Repeated root = %.2f\n", -b/(2*a));
    } else {
        double re = -b/(2*a), im = sqrt(-d)/fabs(2*a);
        printf("%.2f + %.2fi, %.2f - %.2fi\n", re, im, re, im);
    }
    return 0;
}
```

`1 -5 6` → `3.00 2.00`; `1 2 1` → repeated −1; `1 0 1` → ±i. Direct `d==0` is adequate for these simple textbook inputs; real numerical applications often need a scale-aware tolerance.

### 4.3 switch and fall-through

```c
switch (expression) {
    case constant1:
        /* statements */
        break;
    case constant2:
        /* statements */
        break;
    default:
        /* no matching case */
        break;
}
```

- Expression must have integer type, including `char` and enumeration. Float and strings are invalid.
- Cases must be integer constant expressions: `case 2:`, `case 'A':`, `case 1+2:` are possible; a run-time variable or `1.5` is invalid.
- Duplicate values are invalid, including `case 2` and `case 1+1`.
- At most one `default`; it is optional and can appear anywhere.
- Control jumps directly to the matching label, then executes forward until `break`, another control transfer, or the closing brace. Labels do not automatically stop execution.
- Ordinary statements before the first label are skipped by this initial jump.
- Nesting is allowed. `break` exits the **innermost enclosing loop or switch**.
- `case 80 ... 89:` is a compiler extension in the notes, not standard C. Use a ladder or validated `switch(marks/10)` for ranges.

**Fall-through trace:**

```c
int x = 2;
switch (x) {
    default: printf("INVALID ");
    case 1: printf("ONE ");
    case 2: printf("TWO "); break;
    case 3: printf("THREE ");
}
```

For x=2 → `TWO `. For x=9 → `INVALID ONE TWO `. For x=1 → `ONE TWO `. Default's position does not override a matching case.

**Calculator — essential complete program:**

```c
#include <stdio.h>
int main(void)
{
    double a, b;
    char op;
    if (scanf("%lf %c %lf", &a, &op, &b) != 3) return 1;
    switch (op) {
        case '+': printf("%.2f\n", a+b); break;
        case '-': printf("%.2f\n", a-b); break;
        case '*': printf("%.2f\n", a*b); break;
        case '/':
            if (b == 0) puts("Division by zero");
            else printf("%.2f\n", a/b);
            break;
        default: puts("Unknown operator");
    }
    return 0;
}
```

Input `7 / 2` → `3.50`. Input `7 / 0` → error message. The same choice can be implemented using an else-if ladder.

**Grouped vowel labels:** `case 'a': case 'e': case 'i': case 'o': case 'u': puts("Vowel"); break;`. Include uppercase labels or convert to lowercase if the question requires both.

### 4.4 Loops and jump statements

```c
// Syntax patterns:
for (initialisation; condition; update) {
    /* body */
}
while (condition) {
    /* body */
}
do {
    /* body */
} while (condition);   // semicolon required
```

| Loop | Test timing | Minimum executions | Typical use |
|---|---|---:|---|
| `for` | Before each body | 0 | Counting/array indices |
| `while` | Before each body | 0 | Repeat until condition changes |
| `do-while` | After each body | 1 | Menu/input that must occur once |

**For execution order:** initialise once → test → body → update → test again. All three components can be omitted; missing condition means true, as in `for(;;)`. Multiple initial/update expressions may use the comma operator: `for(i=0,j=n-1; i<j; ++i,--j)`.

| Statement | Effect |
|---|---|
| `break` | Leaves nearest loop/switch |
| `continue` | Skips rest of current iteration; in for, goes to update then test; in while/do-while, goes to test |
| `goto label;` | Jumps to a label within the same function |
| `return value;` | Leaves current function and optionally sends a value to caller |

`jump` is a category, not a C keyword. `break` does not exit an arbitrary `{}` block. A continue inside a switch nested within a loop continues the surrounding loop.

```c
// Inside a function: print 1 2 4, stop before 5.
for (int i=1; i<=6; ++i) {
    if (i==3) continue;
    if (i==5) break;
    printf("%d ", i);
}
```

**goto example:**

```c
// Inside main:
int n;
retry:
if (scanf("%d", &n) != 1) return 1;
if (n < 0) goto retry;
printf("%d\n", n);
```

Know the syntax; prefer loops for ordinary repetition. In a `while` loop, place necessary updates before a possible `continue`, or you can accidentally create an infinite loop.

### 4.5 Loop program bank

The following are **function definitions**, not standalone files. Put them after `#include <stdio.h>` and call them from a `main` that reads/validates the inputs. The small valid-input domains are part of the examples.

**Sum, table, factorial:**

```c
long long sum_n(int n)       // n >= 0, result must fit
{
    long long sum = 0;
    for (int i=1; i<=n; ++i) sum += i;
    return sum;
}

void table(int n)            // n small enough for n*10
{
    for (int i=1; i<=10; ++i)
        printf("%d x %d = %d\n", n, i, n*i);
}

unsigned long long fact_loop(int n)  // caller validates 0 <= n <= 20
{
    unsigned long long f = 1;
    for (int i=2; i<=n; ++i) f *= (unsigned)i;
    return f;
}
```

`sum_n(100)=5050`; the source slide's `n<100` adds only 1…99 and gives **4950**. Use `<=100` for the stated task. For tables 10 through 20, use outer `for(n=10;n<=20;++n)` and inner multiplier 1…10. Even/odd series: start at 2/1 and increment by 2, or filter with `%2`.

**Digit processing and number palindrome:**

```c
int digit_sum(unsigned n)
{
    int sum = 0;
    do { sum += (int)(n%10); n /= 10; } while (n != 0);
    return sum;
}

unsigned reverse_number(unsigned n) // reversed result must fit unsigned
{
    unsigned rev = 0;
    do { rev = rev*10 + n%10; n /= 10; } while (n != 0);
    return rev;
}

int palindrome_number(unsigned n)
{
    return n == reverse_number(n);
}
```

For 472: digits taken 2,7,4 → sum 13 → reverse 274. For 121 → palindrome. For 120 → reverse 21; leading zeros are not stored in an integer. Zero is handled by the do-while version. To count digits, start count=0 and increment once per do-while iteration, so 0 has one digit.

**Prime check:**

```c
int is_prime(int n)
{
    if (n < 2) return 0;
    for (int d=2; d<=n/d; ++d) {
        if (n%d == 0) return 0;
    }
    return 1;
}
```

Trial divisors need go only through √n; `d<=n/d` avoids overflow from `d*d`. Test 1 → false, 2 → true, 9 → false, 13 → true. To list primes in a range, loop over candidates and call this function.

**Fibonacci series:**

```c
void fibonacci_loop(int count) // caller validates 0 <= count <= 90
{
    unsigned long long a=0, b=1;
    for (int i=0; i<count; ++i) {
        printf("%llu ", a);
        unsigned long long next = a+b;
        a=b;
        b=next;
    }
    putchar('\n');
}
```

`fibonacci_loop(7)` prints `0 1 1 2 3 5 8`. Distinguish **number of terms** from the **index of one term**.

**Division using continue, as suggested by the loop deck:**

```c
void safe_divisions(void)
{
    for (int d=-2; d<=2; ++d) {
        if (d == 0) continue;
        printf("10 / %d = %.2f\n", d, 10.0/d);
    }
}
```

### 4.6 Nested loops and pyramid patterns

**Outer loop chooses row; inner loops print spaces and row content.** Write the counts on paper first.

```c
void pyramid(int n) // n >= 0, modest size
{
    for (int row=1; row<=n; ++row) {
        for (int space=1; space<=n-row; ++space) putchar(' ');
        for (int star=1; star<=2*row-1; ++star) putchar('*');
        putchar('\n');
    }
}
```

For n=4:

```text
   *
  ***
 *****
*******
```

| Pattern | Row i, for i=1…n |
|---|---|
| Left triangle | Print i stars |
| Inverted triangle | Print n−i+1 stars |
| Right-aligned triangle | n−i spaces, then i stars |
| Full pyramid | n−i spaces, then 2i−1 stars |
| Number triangle | Print j for j=1…i |
| Repeated row number | Print i, i times |

**Number pyramid variation:** after leading n−row spaces, print j=1…row, then j=row−1…1. For row 3 output is `12321`. For a diamond, print the full pyramid then rows n−1 down to 1. Your notes emphasise a pyramid; the specific pattern is not confirmed.

### 4.7 Tariff and range questions

For price/weight/marks problems, write a non-overlapping interval table first. A typical continuous ordering is `w<=100`, `else if(w<=150)`, `else if(w<=200)`, `else`. Validate negative values. Each branch applies only the formula supplied in the question.

The Markdown source lists `0–100g:50`, `100–150:50+2`, `150–200:100+5`, `200+:350+10` but does **not** say whether additions are per gram, per slab, or flat. Do not memorise a guessed price formula. The exam question must resolve this. Use the same ladder pattern with its stated charges.

> [!check] Module 2 recall gate
> Trace a switch without break; distinguish an if ladder from independent ifs; explain where continue goes in each loop; write a prime check, reverse number, and full pyramid without looking; check 0, 1, equality, and interval endpoints.

## 5. Module 3 — Arrays, strings, searching, and sorting

**CORE · 6–10 marks**, also prerequisite for Module 4. Sources: Lecture 16, the C Markdown notes, and blueprint additions for linear search, strings, and 2D arrays.

### 5.1 One-dimensional arrays

An **array** stores a fixed number of elements of the same type in contiguous memory. Indices run from **0 to n−1**. C does not automatically check array bounds; invalid access has undefined behaviour.

```c
int a[5];                    // automatic elements initially indeterminate
int b[5] = {90,85};          // {90,85,0,0,0}
int c[] = {3,58,89,42,1};    // size inferred as 5
int zeros[5] = {0};          // all zero
int special[10] = {[2]=19, [9]=2}; // C99 designated initialisers
```

`a[3]=10;` assigns the fourth element. `scanf("%d", &a[i]);` reads one element. Array names cannot be reassigned as a whole; use a loop to copy elements.

**Length in the defining scope:** `sizeof(c)/sizeof(c[0])`. This fails after `c` has become a pointer parameter in a function. Uninitialised static/global arrays are zero-initialised; uninitialised automatic arrays are not.

**Complete input/sum/min/max program:**

```c
#include <stdio.h>
int main(void)
{
    int n, a[100];
    if (scanf("%d", &n) != 1 || n<1 || n>100) return 1;
    for (int i=0; i<n; ++i)
        if (scanf("%d", &a[i]) != 1) return 1;
    long long sum = 0;
    int min=a[0], max=a[0];
    for (int i=0; i<n; ++i) {
        sum += a[i];
        if (a[i]<min) min=a[i];
        if (a[i]>max) max=a[i];
    }
    printf("Sum=%lld Min=%d Max=%d Average=%.2f\n",
           sum, min, max, (double)sum/n);
    return 0;
}
```

Input `5 3 58 89 42 1` → sum 193, min 1, max 89, average 38.60. Initialise min/max to an **actual element**, not 0, or all-positive/all-negative cases fail.

**Source lab patterns:**

```c
// Inside a function with declared arrays/indices and valid bounds:
// Subarray L..R inclusive, validate 0<=L<=R<n first:
for (int i=L; i<=R; ++i) printf("%d ", a[i]);

// Reverse using auxiliary b[] of capacity at least n:
for (int i=0; i<n; ++i) b[i]=a[n-1-i];

// Reverse in place:
for (int i=0,j=n-1; i<j; ++i,--j) {
    int temp=a[i]; a[i]=a[j]; a[j]=temp;
}
```

The C note has a loop reading 9 elements after an example 5-element declaration. That must be corrected to the actual capacity; copying it literally would access out of bounds.

### 5.2 Linear search

Check elements one by one until the key matches or the array ends. Works on unsorted arrays.

```c
int linear_search(const int a[], int n, int key)
{
    for (int i=0; i<n; ++i)
        if (a[i] == key) return i;
    return -1;
}
```

For `{9,4,7,4}`, key 4 → **index 1**, human position 2; key 5 → −1. Duplicates: this returns the first match. Best case O(1), worst case O(n), extra space O(1). State index versus position explicitly.

### 5.3 Bubble sort — explicit blueprint topic

Compare adjacent elements and swap if out of order. After a complete ascending pass, the largest remaining element has reached the right end.

```c
void bubble_sort(int a[], int n)
{
    for (int pass=0; pass<n-1; ++pass) {
        int swapped=0;
        for (int j=0; j<n-1-pass; ++j) {
            if (a[j]>a[j+1]) {
                int temp=a[j]; a[j]=a[j+1]; a[j+1]=temp;
                swapped=1;
            }
        }
        if (!swapped) break;
    }
}
```

Trace ascending `{5,1,4,2}`:

| Stage | Array | Explanation |
|---|---|---|
| Start | 5,1,4,2 | — |
| Pass 1 | 1,4,2,5 | 5 bubbles right |
| Pass 2 | 1,2,4,5 | 4 fixed next |
| Pass 3 | 1,2,4,5 | No swaps; stop |

Worst-case comparisons `n(n−1)/2`; time O(n²), optimised best case O(n), extra space O(1). With strict `>` swaps it is **stable**: equal items preserve order. Use `<` for descending order. Inner bound prevents `a[j+1]` from exceeding the unsorted region.

### 5.4 Selection sort — also taught in Lecture 16

Find the smallest remaining element and swap it into the next left position.

```c
void selection_sort(int a[], int n)
{
    for (int i=0; i<n-1; ++i) {
        int smallest=i;
        for (int j=i+1; j<n; ++j)
            if (a[j]<a[smallest]) smallest=j;
        if (smallest!=i) {
            int temp=a[i]; a[i]=a[smallest]; a[smallest]=temp;
        }
    }
}
```

Source trace `{64,25,12,22,11}` → `{11,25,12,22,64}` → `{11,12,25,22,64}` → `{11,12,22,25,64}` → unchanged. O(n²) comparisons and O(1) extra space; ordinary selection sort is not stable. Bubble sort fixes the right end by adjacent swaps; selection sort fixes the left end by choosing a minimum.

### 5.5 Two-dimensional arrays

```c
int a[2][3] = {{1,2,3},{4,5,6}};
// a[1][2] is 6; total 6 int elements.
```

Rows and columns both start at 0. C stores a true 2D array in **row-major order**: `1,2,3,4,5,6`. For `a[R][C]`, element `(i,j)` is at `base + (i*C+j)*sizeof(element)` bytes. If base=1000 and int size=4, `a[1][2]` is at 1020 for C=3.

**Input/output:**

```c
// Inside main, with a[10][10], and validated 1<=r,c<=10:
for (int i=0; i<r; ++i)
    for (int j=0; j<c; ++j)
        if (scanf("%d", &a[i][j]) != 1) return 1;

for (int i=0; i<r; ++i) {
    for (int j=0; j<c; ++j) printf("%d ", a[i][j]);
    putchar('\n');
}
```

Row-wise traversal: rows outer, columns inner. Column-wise: columns outer, rows inner. A declaration `int a[r][c];` is a **variable-length automatic array** on supporting C implementations, not heap/dynamic allocation using `malloc`. Use fixed capacity for portable exam answers. The source fragment `int r=2; c=3;` should be `int r=2, c=3;`.

**Matrix-operation templates:**

```c
// Fragments; arrays/dimensions already declared and validated.
// Addition: A and B have same r x c dimensions.
for (int i=0; i<r; ++i)
    for (int j=0; j<c; ++j) sum[i][j]=a[i][j]+b[i][j];

// Transpose: r x c -> c x r.
for (int i=0; i<r; ++i)
    for (int j=0; j<c; ++j) trans[j][i]=a[i][j];

// Multiplication: A[r][kmax] times B[kmax][c] -> product[r][c].
for (int i=0; i<r; ++i) {
    for (int j=0; j<c; ++j) {
        product[i][j]=0;
        for (int k=0; k<kmax; ++k)
            product[i][j] += a[i][k]*b[k][j];
    }
}
```

Choose types/inputs so products and sums fit. If columns(A) ≠ rows(B), multiplication is not defined. Do not multiply only corresponding elements.

Example:

```text
A = 1 2     B = 5 6      A+B =  6  8      A*B = 19 22
    3 4         7 8             10 12            43 50

Transpose of [1 2 3; 4 5 6] = [1 4; 2 5; 3 6].
```

**Square-matrix patterns:** main diagonal `i==j`; secondary diagonal `i+j==n−1`; upper triangle `i<j`; lower triangle `i>j`; symmetry `a[i][j]==a[j][i]`; identity diagonal 1 and all other entries 0. For odd n, the centre belongs to both diagonals; avoid double counting if summing their union.

**Row and column sums:** for each row initialise rowSum=0 and traverse columns; for each column initialise colSum=0 and traverse rows. Reset each accumulator for each new row/column.

### 5.6 Magic square — flagged in your notes

A **normal n×n magic square** contains every number 1…n² exactly once and all row, column, and two main diagonal sums are equal. Required sum is `n(n²+1)/2`.

```text
8 1 6
3 5 7     Every row, column, and diagonal sums to 15.
4 9 2
```

**Checking algorithm:** validate square dimensions → use a `seen` array to reject duplicates/out-of-range values → calculate each row/column and both diagonal sums → compare with the target. Equal sums alone do not prove it is a normal magic square.

**Odd-order generation, EXTENSION:** fill a zero matrix, start with 1 in the middle of the top row. Try next position one row up and one column right with wrapping. If occupied, move one row down from the previous cell. Repeat through n². This method is for **odd** n; do not apply it to all sizes.

### 5.7 Strings and safe input

A **C string** is a sequence of characters ending in null `\0`. A character array is a string only if it has a terminator within its accessible bounds.

```c
char name[20] = "Arvind";    // 6 letters + null; remaining elements zero
char college[] = "MUJ";     // size 4, strlen 3
char letters[3] = {'M','U','J'}; // not null-terminated: not a C string
const char *message = "Hello";  // do not modify the literal
```

For `char s[]="MUJ"`, `sizeof(s)=4`, `strlen(s)=3`. A string literal includes null automatically. `char s[3]="MUJ";` is permitted in C but lacks room for a terminator and must not be used as a C string.

```c
// Word input, inside a function:
char word[20];
if (scanf("%19s", word) != 1) return 1;

// Line input, as an alternative with a fresh input stream:
char line[100];
if (fgets(line, sizeof line, stdin) == NULL) return 1;
line[strcspn(line, "\n")] = '\0'; // requires <string.h>
```

`scanf %s` stops at whitespace and appends null; no `&` before array name. `fgets` reads up to capacity−1 characters, includes newline when it fits, then appends null. If you switch from numeric `scanf` to `fgets`, consume the leftover line first; a robust pattern is `int ch; while((ch=getchar())!='\n' && ch!=EOF) {}`. A long line may require discarding the remainder too.

`gets` is unsafe and was removed from C11. Recognise it from the notes but write `fgets`. `fflush(stdin)` is not a portable fix.

### 5.8 String library functions

Include `<string.h>`. Inputs must be valid strings where a string is required; destination arrays must have enough space.

| Function | Meaning | Key detail |
|---|---|---|
| `strlen(s)` | Length excluding null | Returns `size_t`, print `%zu` |
| `strcpy(dest,src)` | Copy through terminating null | Capacity at least strlen(src)+1 |
| `strcat(dest,src)` | Append src to existing string | Capacity at least both lengths +1 |
| `strcmp(a,b)` | Lexicographic comparison | Negative/zero/positive, not necessarily −1/0/1 |
| `strncpy(dest,src,n)` | Copy up to n, pad if source shorter | May leave no null when source length≥n |
| `strncat(dest,src,n)` | Append up to n source characters | Also needs room for final null |
| `strncmp(a,b,n)` | Compare at most n characters | Same sign convention as strcmp |
| `strchr(s,ch)` | Find first matching character | Pointer or NULL |
| `strstr(s,sub)` | Find first matching substring | Pointer or NULL |
| `strcspn(s,reject)` | Initial span before rejected character | Useful for removing newline |

Example: `char a[20]="Good"; strcat(a," day");` produces `Good day`; `strcmp("cat","cat")==0`. **Do not use `==` to compare string contents.** `strrev`, `strupr`, `strlwr` are not standard C; implement loops if asked.

### 5.9 Manual string algorithms — exam program bank

```c
int string_length(const char s[])
{
    int i=0;
    while (s[i]!='\0') ++i;
    return i;
}

void string_copy(char dest[], const char src[]) // enough capacity
{
    int i=0;
    while (src[i]!='\0') { dest[i]=src[i]; ++i; }
    dest[i]='\0';
}

void string_join(char dest[], const char src[]) // enough capacity
{
    int i=string_length(dest), j=0;
    while (src[j]!='\0') dest[i++]=src[j++];
    dest[i]='\0';
}

int string_compare(const char a[], const char b[])
{
    int i=0;
    while (a[i]!='\0' && a[i]==b[i]) ++i;
    return (unsigned char)a[i] - (unsigned char)b[i];
}

void reverse_string(char s[])
{
    for (int i=0,j=string_length(s)-1; i<j; ++i,--j) {
        char temp=s[i]; s[i]=s[j]; s[j]=temp;
    }
}

int string_palindrome(const char s[])
{
    for (int i=0,j=string_length(s)-1; i<j; ++i,--j)
        if (s[i]!=s[j]) return 0;
    return 1;
}
```

These routines assume non-overlapping valid inputs and lengths fitting int. Test empty string, one letter, `madam` → true, `MUJ` → false. Comparison is case-sensitive and includes spaces unless you deliberately normalise them.

**Count vowels/consonants/digits/spaces:** scan until null; use a vowel switch/condition, letter checks, digit checks, and a space check. Count consonants only among letters. With `<ctype.h>`, pass `(unsigned char)s[i]` to `tolower`, `isalpha`, `isdigit`, and similar functions. To count words, track whether you are inside a word and increment on a whitespace→non-whitespace transition.

> [!check] Module 3 recall gate
> Explain n−1 indexing, null versus character `'0'`, sizeof versus strlen, min/max initialisation, bubble-sort inner bounds, matrix product dimensions, and why `scanf("%s",s)` cannot read a full sentence. Write search, sort, transpose, and palindrome from memory.

## 6. Module 4 — Functions, pointers, and recursion

**CORE · 24–28 marks — largest allocation.** Sources: pointer deck, functions/arrays in the Markdown notes, and all six pages of the recursion handout. Spend time writing code here.

### 6.1 Function basics

A **function** is a named block of code that performs a task. Benefits: reuse, modularity, easier testing/debugging, reduced duplication. Library functions are provided by libraries; user-defined functions implement your own tasks.

```c
#include <stdio.h>
int add(int, int);          // prototype: return and parameter types

int main(void)
{
    int x=5, y=7;
    int result=add(x,y);    // x,y are actual arguments
    printf("%d\n", result);
    return 0;
}

int add(int a, int b)       // a,b are formal parameters
{
    return a+b;
}
```

Output 12. The prototype must be visible before a call if the definition is later. Parameters are local to the function. `return` exits immediately. Several return statements may appear, but a single call follows only its executed path. A non-void function must supply a valid return value on paths where the caller uses it. `void` functions can use `return;`.

| Arguments? | Return value? | Example signature and call |
|---|---|---|
| None | None | `void greet(void);` then `greet();` |
| Yes | None | `void display(int n);` then `display(5);` |
| None | Yes | `int read_number(void);` then `x=read_number();` |
| Yes | Yes | `int add(int a,int b);` then `x=add(2,3);` |

Use `(void)` for an explicitly empty parameter list in C11/C17. In those versions a declaration `int f();` leaves parameter types unspecified. Standard C does not allow defining one function inside another. A function returns one value directly; a structure return or output pointer parameters can communicate multiple results.

### 6.2 Call by value and call by address/reference

**C passes all arguments by value.** An ordinary int argument copies an int; a pointer argument copies an address. By following that copied address, the callee can modify the caller's object. The blueprint calls this **call by reference**; classroom C answers also say **call by address**.

| Feature | Ordinary value parameter | Pointer/address parameter |
|---|---|---|
| Function receives | Copy of a value | Copy of an address |
| Call | `swap_value(a,b)` | `swap_address(&a,&b)` |
| Parameters | `int x,int y` | `int *x,int *y` |
| Updating caller's a/b | Local assignment cannot do it | Dereference writes can do it |

**Why value swap fails to swap caller variables:**

```c
void swap_value(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}
// In main: int a=5,b=7; swap_value(a,b); printf("%d %d",a,b);
// Caller still prints 5 7.
```

**Correct swap — essential complete program:**

```c
#include <stdio.h>
void swap_address(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    int a=5, b=7;
    swap_address(&a,&b);
    printf("%d %d\n", a,b);
    return 0;
}
```

Output **7 5**. Trace: parameter a points to caller a; b points to caller b → temp receives 5 → caller a becomes 7 → caller b becomes 5. Renaming the parameters to x/y would not change behaviour; the addresses matter.

> [!tip] Exam wording
> “In C, call by reference is implemented using pointers: addresses are passed by value, and dereferencing them changes the original objects.” This matches the blueprint's terminology and preserves the actual C rule.

### 6.3 Pointer declaration, address, and dereference

A **pointer** is an object whose value identifies the address of another object/function or is a null pointer value. The pointed-to type controls how dereferencing and pointer arithmetic work.

```c
#include <stdio.h>
int main(void)
{
    int x=10;
    int *p=&x;
    printf("%d\n", x);        // 10
    printf("%d\n", *p);       // 10
    printf("%p\n", (void*)p); // address, exact text varies
    *p=25;
    printf("%d\n", x);        // 25
    return 0;
}
```

```text
For illustration only:
    x at address 1000: [10]
    p at address 2000: [1000] ───points to──→ x

    x = 10        &x = address 1000
    p = &x        *p = x's stored value
    &p = address of pointer object p, here 2000
```

`&` means address-of in `&x`; `*` means dereference in `*p`, and is a declarator symbol in `int *p`. These meanings differ from binary bitwise AND and multiplication.

**Declaration trap:** `int *p,q;` declares only p as pointer; q is int. Write `int *p,*q;` for two pointers. Initialising a pointer with an arbitrary number does not create a valid object at that address.

**Pointer input:** `int x; int *p=&x; scanf("%d",p);` reads into x. `p` already holds the destination address. Passing `&p` would point to the pointer object, not to an int.

### 6.4 Pointer kinds and safety rules

| Term | Meaning | Rule |
|---|---|---|
| Null pointer | Points to no object/function, e.g. `int *p=NULL;` | Never dereference |
| Uninitialised/wild pointer | Has no valid assigned pointer value | Initialise before use |
| Dangling pointer | Refers to an object whose lifetime has ended | Do not use after local return/free |
| `void *` | Generic pointer to object data | Convert to appropriate object-pointer type before dereferencing |
| Pointer to pointer | Stores address of another pointer | `int **pp=&p;`, then `**pp` accesses x |

```c
// Inside a function:
int x=10;
float y=3.5f;
void *v=&x;
printf("%d\n", *(int*)v);       // 10
v=&y;
printf("%.2f\n", *(float*)v);   // 3.50
```

Do not dereference `void *` directly or do arithmetic on it in standard C. The cast must match a genuinely compatible object; casting an int address to float pointer does not convert the int value to float. Null pointer examples in the deck use `'\0'`; prefer `NULL` for clarity. Null pointer, null character `\0`, and character `'0'` are distinct concepts.

```c
// Inside a function:
int x=10;
int *p=&x;
int **pp=&p;
**pp=30;                  // x becomes 30
```

Avoid returning `&local_variable` from a function; the local object's lifetime ends. Pointers themselves can have local, static, or allocated lifetimes; “pointer” does not automatically mean heap storage.

### 6.5 Pointer arithmetic — very important

```c
int a[4]={10,20,30,40};
int *p=a;
int *q=a+2;
```

| Expression | Meaning/result |
|---|---|
| `p+1` | Pointer to a[1], not one byte later |
| `*(p+1)` | 20 |
| `q-p` | 2 elements |
| `p-q` | −2 elements |
| `p++` | Changes p to point to next element |
| `p==q` | Equality comparison |
| `p<q` | Ordered comparison within this same array |
| `p+q`, `p*q`, `p/q`, `-p` | Invalid pointer arithmetic |

If int is 4 bytes and a starts at illustrative byte address 1000, `a+1` is 1004 and `a+2` is 1008. **Element difference remains 2**, not 8 bytes.

**Bounds rule:** pointer arithmetic must stay within the same array or produce the one-past pointer. `a+4` may be formed; `*(a+4)` may not be read/written. Forming `a+5` is already outside the permitted range, even before dereferencing. Subtract/order pointers only as allowed for the same array, not two unrelated variables.

Pointer subtraction has type **`ptrdiff_t`**, declared by `<stddef.h>`; print with `%td`:

```c
// Inside a function with <stddef.h> and <stdio.h>:
ptrdiff_t difference=q-p;
printf("%td\n", difference); // 2
```

The pointer slide labels `(int)(p-q)` nonportable. The underlying subtraction is defined for pointers within one array and its one-past position; converting the result to int is fine **if representable**. Converting an arbitrary integer back into a pointer does not give you a useful valid object pointer. Do not copy the slide's demonstration of such conversions into normal programs.

### 6.6 Arrays and pointers

In most expressions an array name converts to a pointer to its first element. **An array is not itself a pointer object.** Important exceptions include `sizeof a` and `&a`.

```c
int a[3]={10,20,30};
int *p=a;
// a[i] == *(a+i) == p[i] == *(p+i), for valid i.
```

| Expression | Type/meaning |
|---|---|
| `a` in ordinary expression | Pointer to first int after conversion |
| `&a[0]` | `int *`, same first-element address |
| `&a` | Pointer to entire 3-int array, type `int (*)[3]` |
| `a+1` | Advances one int |
| `&a+1` | Advances one whole 3-int array to its one-past position |
| `sizeof a` | Total array size, 3×sizeof(int) |
| `sizeof p` | Size of the pointer object |

`p=a` is valid; `a=p` and `a++` are invalid. On the same machine, a pointer's size need not equal the pointed-to type's size.

**Dereference/increment grouping:** postfix binds more tightly than unary.

```c
// Each line below is an INDEPENDENT example starting with:
// int a[]={10,20,30}; int *p=a;
// int value=*p++;    // *(p++): value=10, p now points to a[1]
// int value=(*p)++;  // value=10, a[0] becomes 11, p unchanged
// int value=*++p;    // value=20, p points to a[1]
// int value=++*p;    // value=11, a[0] becomes 11, p unchanged
```

### 6.7 Passing arrays to functions

An array parameter such as `int a[]` is adjusted to `int *a`. The function receives a copy of the address, so it can modify the original elements. It does not receive the array length automatically.

```c
#include <stdio.h>
long long array_sum(const int a[], int n)
{
    long long total=0;
    for (int i=0; i<n; ++i) total += a[i];
    return total;
}
void add_one(int a[], int n)
{
    for (int i=0; i<n; ++i) ++a[i];
}
int main(void)
{
    int a[]={2,4,6};
    int n=(int)(sizeof a / sizeof a[0]);
    printf("%lld\n", array_sum(a,n)); // 12
    add_one(a,n);
    printf("%d %d %d\n", a[0],a[1],a[2]); // 3 5 7
    return 0;
}
```

`const int a[]` means this function will not change the elements through that parameter. Reassigning the local pointer parameter still does not reassign the caller's pointer variable. To change a caller's pointer object, you would need its address, e.g. `int **`.

**Length correction:** it is not a language requirement that every array call has a separate size argument; a sentinel, fixed agreed size, or another convention is possible. For ordinary numeric-array questions, passing n explicitly is the clearest method. Strings use `\0` as the terminator.

**Pointer traversal alternative:** `for (const int *p=a; p<a+n; ++p) total += *p;`, with a valid range.

### 6.8 2D arrays as function parameters

A real 2D array becomes a pointer to its first **row**, not `int **`.

```c
// These functions expect exactly 3 columns per row.
void print_matrix(int a[][3], int rows)
{
    for (int i=0; i<rows; ++i) {
        for (int j=0; j<3; ++j) printf("%d ", a[i][j]);
        putchar('\n');
    }
}
// Equivalent parameter type: int (*a)[3]
```

For `int a[2][3]`, `a+1` moves one row, `*(a+1)` refers to row 1, `*(*(a+1)+2)` equals `a[1][2]`. The compiler needs the row width to calculate row offsets. On supporting implementations, `void f(int rows,int cols,int a[rows][cols])` expresses a variable row width; fixed-column declarations are simpler for this course.

### 6.9 Recursion — concept and tracing

**Recursion** occurs when a function calls itself, directly or indirectly, to solve smaller instances of a problem.

Every correct recursive design needs:

1. **Base case:** returns without a further recursive call.
2. **Recursive case:** reduces the problem toward the base case.
3. **Combination step:** uses the smaller result where needed.

Each active call has its own parameters/automatic locals on the call stack. Calls return in reverse order. Static locals are shared across calls; they are not fresh for each recursive call.

```text
factorial(4)
  waits for 4 * factorial(3)
    waits for 3 * factorial(2)
      waits for 2 * factorial(1)
        factorial(1) returns 1
      returns 2
    returns 6
  returns 24
```

**Trace method:** write each input n, the operation waiting after the call, the base return value, then substitute values while unwinding. For printing, ask whether the print happens before or after the recursive call.

### 6.10 Recursive factorial — essential complete program

```c
#include <stdio.h>
long long factorial(int n)
{
    if (n <= 1) return 1;
    return n * factorial(n-1);
}
int main(void)
{
    int n;
    if (scanf("%d", &n) != 1 || n<0 || n>20) {
        puts("Enter an integer from 0 to 20");
        return 1;
    }
    printf("%lld\n", factorial(n));
    return 0;
}
```

0! = 1; 5! = 120; 20! fits the minimum standard range of long long. Inputs above the range can overflow, and negative inputs must be rejected by the caller. Time O(n), extra stack O(n).

### 6.11 Recursive sum and printing order

```c
long long recursive_sum(int n) // modest n >= 0; result must fit
{
    if (n == 0) return 0;
    return n + recursive_sum(n-1);
}

void print_ascending(int n)
{
    if (n <= 0) return;
    print_ascending(n-1);
    printf("%d ", n);
}

void print_descending(int n)
{
    if (n <= 0) return;
    printf("%d ", n);
    print_descending(n-1);
}
```

`recursive_sum(5)=15`; ascending(4) → `1 2 3 4`; descending(4) → `4 3 2 1`. Printing after the call happens on **return**; before the call happens on **descent**.

```c
void trace(int n)
{
    if (n==0) return;
    printf("%d ",n);
    trace(n-1);
    printf("%d ",n);
}
```

`trace(3)` → **3 2 1 1 2 3**.

### 6.12 Fibonacci — nth term and series

Define F(0)=0, F(1)=1, F(n)=F(n−1)+F(n−2).

```c
#include <stdio.h>
long long fibonacci(int n)
{
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(void)
{
    int count;
    // Conservative limit keeps this simple recursive version practical.
    if (scanf("%d", &count) != 1 || count<0 || count>30) return 1;
    for (int i=0; i<count; ++i)
        printf("%lld ", fibonacci(i));
    putchar('\n');
    return 0;
}
```

Input 7 → `0 1 1 2 3 5 8`. For only the nth term, print `fibonacci(n)` after validating n; `fibonacci(6)=8`.

```text
F(4) = F(3) + F(2)
     = [F(2)+F(1)] + [F(1)+F(0)]
     = [(1+0)+1] + [1+0] = 3
```

The call tree repeats F(2), F(1), etc. Naive recursive Fibonacci takes exponential time (O(2ⁿ) is a valid upper bound), extra stack O(n). The iterative version takes O(n) time and O(1) extra space. The handout accepts n up to 40 for its nth-term example; that still performs substantial repeated work, so use small n for tracing.

### 6.13 Sum of digits, powers, and GCD — handout examples

```c
int sum_digits_rec(unsigned n)
{
    if (n == 0) return 0;
    return (int)(n%10) + sum_digits_rec(n/10);
}

long long power_rec(int a, int n) // n>=0; all results must fit
{
    if (n == 0) return 1;
    return a * power_rec(a,n-1);
}

int gcd_rec(int a, int b) // nonnegative a,b, not both zero
{
    if (b == 0) return a;
    return gcd_rec(b,a%b);
}
```

`sum_digits_rec(472)=2+7+4=13`. `power_rec(2,5)=32`; base n=0 returns 1 (the algorithm uses 1 for 0⁰ too, a convention to state if asked). `gcd_rec(18,12)` → `(12,6)` → `(6,0)` → 6. For positive a,b, `LCM=(a/GCD)*b`; divide first to reduce intermediate overflow, but the final product must still fit.

### 6.14 Tower of Hanoi — handout's advanced worked example

Rules: move one disk at a time; only a top disk can move; never place a larger disk on a smaller disk.

To move n disks from S to D using A:

1. Move n−1 from S to A, using D.
2. Move disk n from S to D.
3. Move n−1 from A to D, using S.

```c
void hanoi(int n, char source, char auxiliary, char destination)
{
    if (n <= 0) return;
    hanoi(n-1,source,destination,auxiliary);
    printf("Move disk %d from %c to %c\n", n,source,destination);
    hanoi(n-1,auxiliary,source,destination);
}
// From main: hanoi(3,'A','B','C');
```

```text
n=3 moves:
1: A→C
2: A→B
1: C→B
3: A→C
1: B→A
2: B→C
1: A→C
```

Recurrence `T(n)=2T(n−1)+1`, T(0)=0 → **2ⁿ−1 moves**. n=3 →7; n=4 →15. Time O(2ⁿ); extra stack O(n). Know the concept and trace after mastering factorial/Fibonacci/GCD.

### 6.15 Recursion versus iteration

| Feature | Recursion | Iteration |
|---|---|---|
| Repetition mechanism | Repeated function calls | for/while/do-while |
| Termination | Base case and progress toward it | Condition and progress toward it |
| Memory | Stores active call frames | Often constant extra space for simple counting |
| Overhead | Function calls and stack usage | Usually smaller per-iteration overhead |
| Good fit | Recursive structure, divide-and-conquer, Hanoi | Straightforward repeated processing |
| Typical failure | Missing/unreachable base case, stack exhaustion | Wrong update/condition, infinite loop |

**Advantages of recursion:** natural expression of self-similar problems, compact code, clear smaller-subproblem reasoning. **Limitations:** stack space, call overhead, repeated work in naive algorithms. Recursion is not automatically faster or always shorter. Tail-call optimisation is not guaranteed by C.

**Common mistakes:** forgetting a return before the recursive expression; calling with unchanged n; using n−1 when the domain never reaches the base; changing static state unintentionally; confusing print order; overflowing even when recursion terminates.

> [!check] Module 4 recall gate
> Explain why a value swap fails; draw `p=&x`; evaluate `*(a+2)`, `q-p`, `*p++`, and `(*p)++`; distinguish array length from pointer size; write factorial, Fibonacci, GCD; trace calls and returns. This module deserves your strongest closed-book recall.

## 7. Module 5 — Structures and unions

**CORE · 10–12 marks.** Explicit blueprint topics. Your Markdown notes emphasise structures, but no dedicated structure/union teaching deck was supplied. This section supplements those gaps.

### 7.1 Structures: definition, declaration, and access

A **structure** is a user-defined record type that groups named members, possibly of different types, under one name.

```c
struct Student {
    int roll;
    char name[30];
    float marks;
};                       // semicolon required after type definition

struct Student s={101,"Asha",89.5f};
```

The type definition describes the layout; a variable such as s provides storage. Members have separate storage so all can hold values simultaneously. Use the **dot operator** for an object: `s.roll`, `s.marks`, `s.name`.

```c
// Statements inside a function with <stdio.h> and <string.h>:
struct Student s;
s.roll=101;
strcpy(s.name,"Asha");  // array member cannot use s.name="Asha" later
s.marks=89.5f;
printf("%d %s %.2f\n", s.roll,s.name,s.marks);
```

**Structure assignment** copies corresponding members, including array members: `struct Student t=s;` or `t=s;` for compatible structure types. This differs from ordinary standalone array assignment. C does not support `s==t` as a general structure-content comparison; compare relevant members yourself.

### 7.2 Arrays versus structures

| Array | Structure |
|---|---|
| Elements share one type | Members may have different types |
| Access by integer index | Access by member name |
| Stores a sequence of similar items | Stores related attributes of a record |
| Example: marks of 50 students | Example: roll/name/marks of one student |

An **array of structures** combines both: multiple records, each with several fields.

### 7.3 Nested structures

```c
struct Date { int day,month,year; };
struct Employee {
    int id;
    char name[30];
    struct Date joined;
    double salary;
};
// Inside a function:
// struct Employee e={1,"Ravi",{14,11,2026},45000.0};
// printf("%d/%d/%d",e.joined.day,e.joined.month,e.joined.year);
```

The outer structure has a member whose type is another structure. Access nested members with repeated dots. A record cannot contain a direct member of its own incomplete type, but can contain a **pointer** to it; this supports linked structures in later courses.

### 7.4 Arrays of structures — essential complete program

**Task:** read student records, print their totals/averages, and identify the topper. Names here are single words to keep exam input concise.

```c
#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks[3];
    float total;
};

int main(void)
{
    struct Student s[50];
    int n,top=0;
    if (scanf("%d",&n)!=1 || n<1 || n>50) return 1;
    for (int i=0; i<n; ++i) {
        if (scanf("%d%29s",&s[i].roll,s[i].name)!=2) return 1;
        s[i].total=0;
        for (int j=0; j<3; ++j) {
            if (scanf("%f",&s[i].marks[j])!=1 ||
                s[i].marks[j]<0 || s[i].marks[j]>100) return 1;
            s[i].total += s[i].marks[j];
        }
        if (s[i].total>s[top].total) top=i;
    }
    for (int i=0; i<n; ++i) {
        printf("%d %s Total=%.2f Average=%.2f\n",
               s[i].roll,s[i].name,s[i].total,s[i].total/3.0);
    }
    printf("Topper: %s\n",s[top].name);
    return 0;
}
```

Sample input:

```text
2
101 Asha 80 90 100
102 Ravi 70 75 80
```

Output:

```text
101 Asha Total=270.00 Average=90.00
102 Ravi Total=225.00 Average=75.00
Topper: Asha
```

For ties this selects the first topper. Adapt the record to employees (id/name/salary), books (id/title/price), products (code/quantity/price), or complex numbers (real/imaginary). Common question variations: display records above a threshold; find by id; sort by total/salary. To sort records, compare the desired field and swap **whole structures** using a structure temporary.

### 7.5 Structure pointers and function parameters

```c
// Use with the Student type from the basic example in 7.1.
void show_student(struct Student s)
{
    printf("%d %s %.2f\n",s.roll,s.name,s.marks);
}
void change_marks(struct Student *s, float value)
{
    s->marks=value;              // equivalent to (*s).marks=value
}
// In main: show_student(s); change_marks(&s,95.0f);
```

These functions use the **single-marks Student definition in 7.1**, not the separate array-of-marks definition in 7.4; compile each example independently. Dot is for a structure object; **arrow `->`** is for a pointer to a structure. Parentheses in `(*p).member` matter because dot binds more tightly than dereference.

Passing a structure normally copies it. Passing a pointer permits changing the original and avoids copying a large record. Use `const struct Student *p` for a function that should only inspect it.

### 7.6 Structure size and padding

The compiler may insert **padding** between members and at the end to satisfy alignment. `sizeof(struct S)` is therefore not always the sum of visible member sizes.

```c
struct Example { char c; int x; };
// Often sizeof is 8 when char=1 and int=4 with 4-byte alignment.
// It is not universally 5 or universally 8.
```

State assumptions in numerical size questions. Member declaration order matters for layout/padding. Members are not simply packed with no gaps. Obtain the actual size with `sizeof` if no platform layout is specified.

### 7.7 Union

A **union** is a user-defined type whose members share overlapping storage. It supports representing different alternatives in the same storage region.

```c
#include <stdio.h>
union Data {
    int i;
    float f;
    char ch;
};
int main(void)
{
    union Data d;
    d.i=10;
    printf("%d\n",d.i);
    d.f=3.5f;
    printf("%.1f\n",d.f);
    return 0;
}
```

Output `10`, then `3.5`. Assigning f changes overlapping storage; **do not expect i to preserve 10 afterward**. Union size is sufficient for its largest member and alignment requirements; it can include padding.

| Feature | Structure | Union |
|---|---|---|
| Storage | Separate storage for members | Members overlap |
| Simultaneous independent values | All members | Use one alternative at a time |
| Size | All members plus possible padding | Largest required member storage plus possible padding |
| Writing one member | Does not replace other members | Changes shared representation |
| Typical use | Student/employee record | Variant value, memory-saving alternative |

**Tagged union pattern:** pair an enum tag with the union to record which alternative is currently meaningful.

```c
enum Kind { INTEGER_VALUE, REAL_VALUE };
struct Value {
    enum Kind kind;
    union { int i; double d; } data;
};
// Inside main: struct Value v={REAL_VALUE,{.d=3.5}};
// if (v.kind==REAL_VALUE) printf("%.1f",v.data.d);
```

For this exam, avoid output claims from reading a different union member from the one last written. Such representation reinterpretation is not a portable numeric conversion and can encounter invalid representations. Use an ordinary cast to convert a numeric value.

### 7.8 typedef

```c
typedef struct {
    double real,imag;
} Complex;

Complex add_complex(Complex a, Complex b)
{
    Complex result={a.real+b.real,a.imag+b.imag};
    return result;
}
```

`typedef` makes a type alias; with this definition write `Complex z`, rather than requiring a struct tag name. This example also shows returning a structure from a function.

> [!check] Module 5 recall gate
> Define and initialise a record; read members correctly; use dot versus arrow; access nested date fields; loop over an array of records; explain padding; compare structure and union in four clear points.

## 8. Output questions and common mistakes

### 8.1 Predict the result before opening the answer

Each row is an **independent fragment** inside a function, with normal required headers. These are deliberately small so you can trace them by hand.

| # | Fragment/question | Answer and reason |
|---:|---|---|
| 1 | `int a=017; printf("%d",a+2);` | **17**; 017 octal is decimal 15 |
| 2 | `printf("%d",5/2);` | **2**; integer division |
| 3 | `printf("%.1f",(double)5/2);` | **2.5** |
| 4 | `printf("%.1f",(double)(5/2));` | **2.0** |
| 5 | `int x=5,y=x++; printf("%d %d",x,y);` | **6 5** |
| 6 | `int x=5,y=++x; printf("%d %d",x,y);` | **6 6** |
| 7 | `int x=0; if(x=5) printf("%d",x);` | **5**; assignment yields nonzero |
| 8 | `int x=7; if(x==0); printf("A");` | **A**; null if body |
| 9 | `printf("%d",5<=100<=10);` | **1**; `(5<=100)` gives 1, then 1<=10 |
| 10 | `int x=0; int y=0 && ++x; printf("%d %d",x,y);` | **0 0**; short circuit |
| 11 | `int x=0; int y=1 \|\| ++x; printf("%d %d",x,y);` | **0 1** |
| 12 | `printf("%d %d %d",12&25,12\|25,12^25);` | **8 29 21** |
| 13 | Bad macro `#define SQ(x) x*x`, then `SQ(2+3)` | **11** |
| 14 | `enum E{A=5,B,C=10,D};` values B,D? | **6,11** |
| 15 | `char s[]="MUJ";` sizeof and strlen? | **4 and 3**, in the defining scope |
| 16 | `int a[4]={7};` values? | **7,0,0,0** |
| 17 | `int a[]={10,20,30}; printf("%d",*(a+2));` | **30** |
| 18 | `int a[]={10,20,30}; int *p=a; printf("%d",*p++);` | Prints **10**, p advances to a[1] |
| 19 | Same setup, `printf("%d",(*p)++);` | Prints **10**, a[0] becomes 11, p unchanged |
| 20 | `int i=5; while(i<3) puts("A");` | **No output** |
| 21 | `int i=5; do {puts("A");} while(i<3);` | **A once** |
| 22 | `for(int i=0;i<3;++i); puts("A");` | **A once**, after empty loop |
| 23 | `printf("[%4d]",12345);` | **[12345]**; width is a minimum |
| 24 | `printf("%.3s","Good day");` | **Goo** |
| 25 | Input `123456` to `%2d%4d` | First int **12**, second **3456** |
| 26 | Input `010` to `%i`, versus `%d` | **8**, versus **10** |
| 27 | Call `counter()` from 3.12 three times | **1 1**, then **1 2**, then **1 3** |
| 28 | `factorial(4)`, `fibonacci(6)`, `gcd_rec(18,12)` | **24, 8, 6** |
| 29 | `strcmp("abc","abc")` | **0** |
| 30 | `int a[]={4,5,6}; int *p=a,*q=a+2;` q−p? | **2 elements**, type ptrdiff_t |

### 8.2 Questions without one reliable numeric answer

Do not invent an output for undefined behaviour. Identify the problem.

| Code/pattern | Classification |
|---|---|
| `printf("%d %d",i++,i++);` | Undefined behaviour: unsequenced modifications of i |
| `i++ + ++i` | Same problem |
| `SQUARE(i++)` with repeated x | Same problem after expansion |
| Reading uninitialised automatic int | Invalid reliance on an indeterminate value; can be undefined behaviour |
| Accessing `a[n]` in n-element array | Out-of-bounds access, undefined behaviour |
| Dereferencing NULL/dangling pointer | Undefined behaviour |
| Signed arithmetic overflow | Undefined behaviour |
| `scanf("%f", &a_double)` | Wrong pointer type, undefined behaviour |
| `printf("%d",some_double)` | Wrong argument type, undefined behaviour |
| Exact pointer address from `%p` | Run/implementation-dependent; no fixed address to memorise |
| Plain char stores 130 | Signedness/range dependent; no universal −126 answer |
| `sizeof(int)` | Implementation-dependent; commonly 4 |
| `case 1.5:` or duplicate cases | Translation error; no program output |
| `p+q` for two pointers | Invalid C expression |

For independent calls such as `f()+g()`, grouping alone does not determine which call happens first. That unspecified ordering is distinct from examples with undefined behaviour.

### 8.3 Exam debugging checklist

- [ ] Correct headers, `int main(void)`, braces, semicolons, and straight quotes.
- [ ] Every used value is initialised or successfully read.
- [ ] Format specifier matches the value/pointer type.
- [ ] `&` for scalar scanf destinations, array name for `%s`.
- [ ] Conditions use `==` where equality is intended; compound ranges use `&&`.
- [ ] No accidental `;` after if/for/while, except required do-while terminator.
- [ ] Switch cases are distinct integer constant expressions; break behaviour is intentional.
- [ ] Loop bounds match requested inclusive/exclusive range and array capacity.
- [ ] Accumulators reset at the correct nesting level.
- [ ] String has room for null; no unsafe gets.
- [ ] Pointer is valid and arithmetic remains in its array range.
- [ ] Recursive base case is reachable; result type/range fits.

## 9. Closed-book practice and 80-mark mock

### 9.1 Rapid theory questions

Try answering each in 20–40 seconds. The answer cues are intentionally short; expand them into full sentences for the exam.

| Question | Answer cue |
|---|---|
| What is stored-program architecture? | Instructions/data in common memory, fetched by CPU |
| Role of PC versus IR? | Next instruction address versus current instruction |
| Compiler versus assembler? | High-level translation versus assembly translation |
| What does preprocessor do? | Include, replace macros, select conditional code |
| Header declaration versus implementation? | Interface known at compile time versus function body/code |
| Macro versus function? | Preprocessing replacement versus typed function call |
| Implicit conversion versus cast? | Automatic conversion versus explicit `(type)` |
| Scope versus lifetime? | Visibility of name versus existence of object |
| Local static versus global static? | Retained block-local object versus internal-linkage file object |
| Why is register only a request? | Compiler chooses storage/optimisation |
| What are actual/formal parameters? | Call expressions versus function's receiving parameters |
| Can a value parameter change caller int? | Its own assignment cannot; pointer dereference can |
| Why pass array length? | Numeric pointer parameter has no length metadata |
| What is a null-terminated string? | Characters ending at first zero character |
| What does strcmp return? | Sign of lexicographic comparison, zero for equal |
| Linear search versus bubble sort? | Find key versus order items |
| What is a base case? | Non-recursive terminating branch |
| Why can Fibonacci recursion be slow? | Repeated overlapping subproblems |
| Why does pointer increment depend on type? | It advances by one pointed-to element |
| Structure versus union? | Separate members versus overlapping alternatives |

### 9.2 The 80-mark practice paper

**This is a self-created practice paper, not a prediction or an official section pattern.** Its allocation is within the blueprint ranges: **14+18+10+26+12=80**. Attempt for about 2 hours as a revision exercise, then check the answer guide. Follow the actual examination's stated duration and choice rules when available.

#### Module 1 — 14 marks

**Q1 (4):** Explain Von Neumann architecture with a labelled block diagram and fetch–decode–execute cycle.

**Q2 (4):** Convert `(345)₈` to hexadecimal, showing binary grouping (2). Represent −5 using 8-bit two's complement, showing steps (2).

**Q3 (4):** Contrast automatic and local-static variables, including default initialisation and lifetime (2). Explain the result of `#define S(x) x*x` used as `S(2+3)` and correct the macro (2).

**Q4 (2):** With `int a=5,b=2`, explain results of `(double)a/b` and `(double)(a/b)`.

#### Module 2 — 18 marks

**Q5 (8):** Write a calculator using switch for `+ - * /`. Read two numbers and an operator. Handle division by zero and an unsupported operator. Give one sample input/output.

**Q6 (6):** Write nested loops to display a full centred star pyramid for n rows. Show output for n=4.

**Q7 (4):** Trace the following for x=2 and x=9. Explain fall-through and the role of break.

```c
switch (x) {
    default: printf("D ");
    case 1: printf("A ");
    case 2: printf("B "); break;
    case 3: printf("C ");
}
```

#### Module 3 — 10 marks

**Q8 (6):** Write ascending bubble sort (4). Show the array after each pass for `{5,1,4,2}` (2).

**Q9 (4):** Write a function that checks whether a string is a palindrome without using library string-comparison/reversal routines. State what happens for empty and one-character strings.

#### Module 4 — 26 marks

**Q10 (8):** Explain value passing and address passing (3). Write a pointer-based swap with a main function (4). State the output when values start at 5 and 7 (1).

**Q11 (8):** Write recursive factorial with input range validation (4), trace factorial(4) (2), and explain the base case and stack cost (2).

**Q12 (6):** For the fragment below, give the output of each printf (4), explain pointer subtraction (1), and state whether dereferencing `a+4` would be valid (1).

```c
int a[]={10,20,30,40};
int *p=a,*q=a+3;
printf("%td\n",q-p);
printf("%d\n",*p++);
printf("%d\n",*p);
printf("%d\n",*q);
```

**Q13 (4):** Write the recursive Fibonacci recurrence/function (2), give F(6) (1), and explain one performance limitation (1).

#### Module 5 — 12 marks

**Q14 (8):** Define a student record with roll, name, and three marks (2). Read n valid records and compute each total (3). Print records and identify the highest-total student (3).

**Q15 (4):** Differentiate structure and union in four points. Include how their sizes relate to their members and padding.

### 9.3 Mock answer guide and marking cues

| Q | Required result/credit |
|---:|---|
| 1 | Common instruction/data memory + CPU/CU/ALU/registers + I/O/buses diagram; fetch, decode, execute, write back |
| 2 | 345₈ → 011100101₂ → 0000 1110 0101 → E5₁₆; −5: 00000101 →11111010 →11111011 |
| 3 | Auto per-block activation, indeterminate if uninitialised; static whole-program lifetime, zero if uninitialised, retains value; bad macro gives 11, fix `((x)*(x))` |
| 4 | 2.5 versus 2.0; cast must precede the division to change arithmetic type |
| 5 | Model in 4.3: correct input, case logic, breaks, zero/default guards, sample such as `7 / 2` →3.50 |
| 6 | Model in 4.6: rows 1…n, n−row spaces, 2row−1 stars, newline each row |
| 7 | x=2: `B `; x=9: `D A B `; matching/default label selects starting point, execution continues to break |
| 8 | Model 5.3; passes 1,4,2,5 →1,2,4,5 →unchanged; correct bounds and swap |
| 9 | Model `string_palindrome` in 5.9, scan length then compare ends inward; empty and one-character strings return true |
| 10 | Model 6.2; copied ordinary values versus copied addresses and dereference; output 7 5 |
| 11 | Model 6.10; n=0/1 returns 1; 4×3×2×1=24; O(n) active-call storage; validate 0…20 |
| 12 | Separate lines **3, 10, 20, 40**; difference counts elements; a+4 may be formed but not dereferenced |
| 13 | Base F0=0/F1=1, recursive sum of previous two; F6=8; repeated calls give exponential running time |
| 14 | Model 7.4: correct record/array, bounded input and names, total reset per student, topper index starts at 0 for n≥1 |
| 15 | Separate versus overlapping storage; all values versus alternatives; total member layout/padding versus largest member/alignment; writing one preserves others versus replaces shared representation |

If a question asks for a complete program, include headers and main, not only the function shown in an answer cue. Mark yourself for working logic and a correct trace, not for reproducing exact names or formatting.

**After marking:** identify the three mistakes that lost most marks. Rewrite those programs/answers without notes, then retry their boundary cases. Reattempt only weak questions before the final-hour checklist.

## 10. Final-hour revision

### 10.1 Sixty-minute route

| Minutes | Do this from memory |
|---:|---|
| 0–15 | Pointer/address diagram, pointer swap, pointer–array identities, four pointer increment forms |
| 15–25 | Factorial/Fibonacci/GCD bases and recurrences, one return-order trace |
| 25–35 | Switch fall-through, break/continue, prime loop and pyramid counts |
| 35–45 | Structure/union table, student record skeleton, string null/capacity and bubble-sort bounds |
| 45–55 | Storage classes, format specifiers, casts, macro trap, one conversion |
| 55–60 | Architecture diagram; stop adding new topics and organise exam essentials |

### 10.2 Compact memory sheet

```text
BLUEPRINT: M1 12–14 | M2 16–20 | M3 6–10 | M4 24–28 | M5 10–12

PCAL: Preprocess -> Compile -> Assemble -> Link. Loader runs later.
Von Neumann: common instruction/data memory; CU+ALU+registers; I/O; buses.

CONVERT: decimal integer divide target base, read remainders upward.
         binary -> octal groups of 3; -> hex groups of 4.
         decimal fraction multiply base, read integer parts downward.
SIGNED n bits (two's complement): -2^(n-1) to 2^(n-1)-1.
UNSIGNED n bits: 0 to 2^n-1. Signed overflow is not defined wrapping.

STATIC local: block scope + whole-program lifetime + default 0 + retains.
AUTO/REGISTER: automatic lifetime, indeterminate if not initialised.
EXTERN: declaration referring to an external definition.

SCAN: int %d &x; float %f &f; double %lf &d; char " %c" &ch.
      char s[20]: %19s, s. Check scanf assignment count.
PRINT: float/double %f; long long %lld; sizeof/strlen %zu; pointer %p (void*).

5/2=2; (double)5/2=2.5. 017 octal=15 decimal.
#define SQUARE(x) ((x)*(x))   <-- definition has NO trailing semicolon
Bad SQUARE(2+3)=11. Do not pass i++ to a repeated-argument macro.
&& / || short circuit and return 0/1. ^ is XOR, not power.
Precedence is grouping, not general argument evaluation order.

IF: zero false, nonzero true. Use x>=5 && x<=10, never 5<=x<=10.
SWITCH: integer expression, distinct constant cases, fall-through until break.
FOR: init once -> test -> body -> update -> test.
CONTINUE: for update; while/do test. BREAK: nearest loop/switch exit.
PYRAMID row i: n-i spaces, 2*i-1 stars.
PRIME: n>=2; test d=2 through d<=n/d.

ARRAY: 0..n-1, contiguous, no automatic bounds checks.
STRING: ends '\0'; strlen excludes null, sizeof array includes its capacity.
BUBBLE: pass<n-1; j<n-1-pass; compare a[j] with a[j+1].
MATRIX: product[i][j] += a[i][k]*b[k][j]; initialise result cell to 0.

POINTER: p=&x; *p accesses x. p+1 advances one element.
a[i] == *(a+i). q-p counts elements within same array.
*p++ means *(p++); (*p)++ changes value; *++p advances then reads.
Array != pointer. sizeof parameter a is pointer size, not original array size.
One-past pointer may be formed, never dereferenced.
C passes values; passing an address enables changing caller's object.

RECURSION: reachable base + smaller input + return/combine result.
factorial: n<=1 ->1; else n*fact(n-1). 0!=1.
Fibonacci: n<=1 ->n; else F(n-1)+F(n-2). F6=8.
GCD: b==0 ->a; else gcd(b,a%b). Hanoi moves=2^n-1.

STRUCT: separate members, dot on object, arrow on pointer, possible padding.
UNION: overlapping alternatives, size fits largest member + alignment/padding.
```

### 10.3 Ready-to-leave checklist

- [ ] I can write a pointer swap, recursive factorial, and Fibonacci without looking.
- [ ] I can explain the output of `*p++` and a switch without break.
- [ ] I can write bubble sort and a student-record loop.
- [ ] I remember string capacity includes null and input double uses `%lf`.
- [ ] I can draw the architecture diagram and convert among bases.
- [ ] I know the difference between a logic error, an invalid C construct, and undefined behaviour.

## 11. Optional material present in the sources

**EXTENSION.** This preserves the attachments' extra topics without making them your first study task. Complete the core before spending time here.

### 11.1 Harvard architecture and hardware background

Harvard architecture uses separate instruction and data storage/paths, allowing simultaneous access. Von Neumann uses a unified memory model/shared path. Your handwritten note explicitly marks Harvard as outside the syllabus, and the blueprint names only Von Neumann, so this brief comparison is enough for the 1½-day plan.

The slides illustrate physical RAM, ROM, HDD, SSD, registers and flash cells. Learn their roles and the memory hierarchy; do not memorise example capacities/speeds as universal facts. Assembly language's definition/advantages/disadvantages **are** retained because both the blueprint and question deck include them, despite the note that advanced assembly features are not in the exam.

### 11.2 Additional recursive programs from the handout's practice list

The handout gives full samples for factorial, sum N, print 1…N, Fibonacci, digit sum, power, GCD, and Hanoi, all covered above. It also lists the following for practice. These short routines cover the basic/intermediate extensions; use modest inputs and the stated domains.

```c
int count_digits_rec(unsigned n)
{
    if (n < 10) return 1;       // zero has one digit
    return 1 + count_digits_rec(n/10);
}

unsigned reverse_acc(unsigned n, unsigned acc) // result must fit
{
    if (n == 0) return acc;
    return reverse_acc(n/10,acc*10+n%10);
}
// reverse_acc(472,0)=274; n==reverse_acc(n,0) tests number palindrome.

int prime_trial_rec(int n, int d) // initial call d=2, n modest
{
    if (n < 2) return 0;
    if (d > n/d) return 1;
    if (n%d == 0) return 0;
    return prime_trial_rec(n,d+1);
}

void binary_rec(unsigned n)
{
    if (n > 1) binary_rec(n/2);
    printf("%u",n%2);
}
// binary_rec(10) prints 1010; binary_rec(0) prints 0.

long long array_sum_rec(const int a[], int n)
{
    if (n <= 0) return 0;
    return a[n-1] + array_sum_rec(a,n-1);
}

int array_max_rec(const int a[], int n) // n>=1
{
    if (n == 1) return a[0];
    int m=array_max_rec(a,n-1);
    return a[n-1]>m ? a[n-1]:m;
}

int binary_search_rec(const int a[], int left, int right, int key)
{
    if (left > right) return -1;
    int mid=left+(right-left)/2;
    if (a[mid] == key) return mid;
    if (key < a[mid]) return binary_search_rec(a,left,mid-1,key);
    return binary_search_rec(a,mid+1,right,key);
}
// Requires ASCENDING sorted array. Initial bounds 0,n-1.

void reverse_string_rec(char s[], int left, int right)
{
    if (left >= right) return;
    char t=s[left]; s[left]=s[right]; s[right]=t;
    reverse_string_rec(s,left+1,right-1);
}

int palindrome_string_rec(const char s[], int left, int right)
{
    if (left >= right) return 1;
    if (s[left] != s[right]) return 0;
    return palindrome_string_rec(s,left+1,right-1);
}
// Initial bounds 0,length-1; empty string uses right=-1.

long long multiply_rec(int a, unsigned b) // b>=0, result must fit
{
    if (b == 0) return 0;
    return a + multiply_rec(a,b-1);
}
```

**Binary search:** halve a sorted search interval; time O(log n), recursive extra stack O(log n). It is an extra recursion practice topic; the blueprint explicitly requires **linear search**, which needs no sorting.

**LCM:** use the GCD result from 6.13. For nonnegative a,b with one zero and the other nonzero, LCM is commonly defined as 0; reject both-zero if your GCD specification excludes it.

**Advanced list items in the handout:** these are names for further practice, not fully taught algorithms in the supplied handout and not named in the module-wise blueprint. Learn the idea only if time remains.

| Listed task | Recursive idea | Base/termination condition |
|---|---|---|
| Merge sort | Split into halves, recursively sort each, merge sorted halves | Size 0/1 already sorted; O(n log n) time, typical O(n) auxiliary array |
| Quick sort | Partition around pivot, recursively sort smaller/larger partitions | Interval size 0/1; average O(n log n), worst O(n²) |
| String permutations | Choose/swap each possible character into next position, recurse, undo swap | All positions fixed → print; duplicates need extra handling |
| Subsets | For each item branch into exclude/include choices | All items considered → output selection; 2ⁿ subsets |
| N-Queens | Place one queen per row in a safe column, recurse, undo if needed | n queens placed; reject column/diagonal conflicts |
| Rat in a maze | Try legal neighbouring cells, mark current path, recurse, backtrack | Destination reached or no legal move; avoid cycles |

**Backtracking skeleton:** choose an option → check validity → apply it → recurse → undo it → try the next. It differs from merely repeating the same recursive call without changing state.

This accounts for all 24 practice-list entries: printing, sum, factorial, Fibonacci, power, digit sum/count/reverse, GCD/LCM, numeric palindrome/prime/binary conversion, array sum/max, binary search, string reverse/palindrome, multiplication, Hanoi, and the six advanced tasks above.

### 11.3 Standard library and elementary structures

The blueprint's broad syllabus paragraph mentions standard library functions and elementary data structures, but its marked module table does not allocate a separate module to them. Relevant string, I/O, math, and character functions are integrated above. Learn purpose and required headers, not every library function.

Brief background: an **array** is contiguous indexed storage; a **linked list** connects records using pointers; a **stack** uses last-in-first-out (push/pop); a **queue** uses first-in-first-out (enqueue/dequeue). Your handwritten note explicitly says linked lists are for later DSA, not this exam. File handling appears on older slide syllabus images but is absent from the ETE module table and not taught in the supplied material. It therefore has no dedicated study block here.

## 12. Source map and coverage notes

### 12.1 Supplied sources and where their material appears

The table names **all 27 supplied files**. References to slide numbers use the original slide order. This is a study guide, so repeated slides and repeated examples are combined rather than transcribed verbatim.

| Supplied source | Material retained / location |
|---|---|
| `PSUC_ETE_Module_Wise_Blueprint_80_Marks.pdf`, p.1 | Governing module scope/marks in §1; all five chapters; practice-paper allocation |
| `Lectures.md` | Architecture/languages emphasis, conversion techniques, syllabus exclusions in §§1,3,11 |
| `Summary of Lectures.md` | Fundamentals, types, macros, I/O, operators, decisions and common traps in §§3,4,8 |
| `Lectures - C.md` | Compilation, macros, enum, input, branches, loops, functions/pointers, arrays/strings, storage, exam reminders in §§3–8 |
| `Lecture 1PSUC.pptx` | Computer/data/hardware/software, memory, buses, Von Neumann, languages/translators in §§3.1–3.4 |
| `Lecture 2.pptx` | Processor/register/cache/RAM/ROM/HDD/SSD background in §§3.2–3.3,11.1 |
| `Lecture 3.pptx` | Assembly/high-level languages, translators, compilation and architecture in §§3.2,3.4,3.8 |
| `Lecture 3.1.pptx` | CPU, stored program, Von Neumann advantages/limitations, Harvard comparison in §§3.2,11.1 |
| `Lecture 3.2.pptx` | Algorithm definition/characteristics and four tasks in §3.5 |
| `Lecture 3_Questions.pptx` | Four-mark architecture, cycle, language comparison, assembly advantages/disadvantages in §§3.2,3.4 |
| `Lecture 4 Decimal_to_All_Conversions_Class_Notes.pptx` | All conversion routes, worked examples, and all exercise answers in §3.6 |
| `Lecture 4-C_Macros_and_Function_Like_Macros_in_C.pptx` | Circle-area code, object/function-like macros, square/max/multiply traps in §§3.8–3.9 |
| `Lecture 4-Detailed_C_Programming_Viva_QA_PPT.pptx` | #, include search, headers, main, ISO, PCAL, preprocessing versus compiling in §§3.8–3.9 |
| `Lecture 7_flow chart.pptx` | Shapes, conventions, sum/max/table/login examples in §3.5 |
| `Lecture 7_Tokens.pptx` | Token categories, classic keywords, identifier rules/scope/naming, enums, types in §§3.10–3.12 |
| `Lecture 8_ constant values.pptx` | Literal forms, two's complement, IEEE example, chars/strings, const/macros/enum in §§3.7,3.9–3.11 |
| `Lecture 9 _ Variables.pptx` | Variables, sizes/modifiers, format specifiers, scanf widths/literals/suppression in §§3.11,3.13 |
| `lecture 10 _ formatted io.ppt` | Streams, integer/float output, widths/precision, escapes, scanf/scansets/suppression in §3.13 |
| `Lecture 10_opr.pptx` | Arithmetic, increments, precedence, relations, logic, assignments, bitwise and ternary in §3.14 |
| `Lecture 11_if else.pptx` | Conditions, even/odd, max, leap year, character/range bugs in §§4.1–4.2 |
| `Lecture 12_if-else.pptx` | Nested minimum, dangling else, grades, sign/calculator, quadratic roots in §§4.1–4.3 |
| `Lecture 13_switch.pptx` | Cases/default, grouped vowels, calculator, fall-through/error tracing in §§4.3,8 |
| `lecture 14_for.pptx` | Loop execution, tables, sums, digits/reversal, factorial/Fibonacci/prime, continue in §§4.4–4.6 |
| `lecture 14_Storage classes in c.pptx` | Scope/lifetime, auto/register/static/extern, retained counter and two-file example in §3.12 |
| `lecture 15_pointer.pptx` | Pointer types/I/O, void pointer, arithmetic, arrays and invalid operations in §§6.3–6.6 |
| `lecture 16_Array.pptx` | 1D initialisation/lab tasks, selection and bubble-sort traces in §§5.1–5.4 |
| `lecture 17_Recursion_in_C_Class_Notes.pdf`, pp.1–6 | All eight worked recursive examples, tracing, pros/cons, iteration comparison, quick checks, complete practice-list coverage in §§6.9–6.15,11.2 |

**Added to complete the blueprint:** structured treatment of paradigms, explicit linear search, fuller strings and 2D matrices, function categories/array parameters, structures/nested structures/record arrays/unions, practice mock, memory sheet, and corrected C explanations. Some of these also appear briefly in your Markdown notes.

**Source limitations:** references such as “Lab 4 Q5–Q7,” “Lab 7 Q7,” and “all lab programs” occur in the notes, but those lab sheets/questions were not among the supplied files. The general patterns explicitly described are covered here; the unidentified questions cannot be reconstructed reliably. The tariff/PCM fragments lack complete rules, as noted in §4.2/§4.7. No official exam question choices or duration were supplied.

### 12.2 Accuracy notes

These notes use ordinary hosted **C11/C17-style code** with common classroom assumptions stated where needed. Legacy `void main`, `gets`, `<conio.h>`, nonstandard switch ranges, C++ scope resolution, fixed-size assumptions, and misleading overflow/output claims are corrected rather than copied. Source emphasis is preserved without repeating unsupported certainty about exam questions.

For a primary reference behind the standard-C distinctions, see the [WG14 C11 committee draft N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf), particularly §§6.2.4 (storage duration), 6.5 (expressions), 6.5.6 (pointer arithmetic), 6.5.2.2 (function calls), and 7.21.6 (formatted I/O). It is a reference, not additional reading required for your 1½-day plan.

### 12.3 Using this in Obsidian

Copy this `.md` file into your Obsidian vault and open it. The heading links at the top, outline, callouts, checkboxes, code blocks, and maths work without community plugins. Use Reading view for tables and callouts. Keep a scratch note for programs you can reproduce from memory and the errors you need to fix.



