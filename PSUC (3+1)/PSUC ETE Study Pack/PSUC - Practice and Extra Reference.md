---
tags:
  - PSUC
  - practice
  - reference
---

# PSUC - Practice and Extra Reference

Back to [[PSUC - Ultimate ETE Study Notes]].

> [!info] Use this after the core
> The main note contains the exam study route. Use **Part A** for closed-book practice. **Part B** fills out additional exercises and source topics. **Part C** preserves the advanced recursion practice list; its last six topics were listed in the PDF, not developed there as full sample programs. Their presence is not evidence that they will be examined.

## Part A - Active practice

### A1. A constructed 80-mark practice set

This is a **practice paper created for this guide**, not an official or predicted paper. Its allocations (13+18+10+27+12=80) fit the blueprint ranges. No official section structure or exam duration was supplied. Try it closed-book, then compare against the answer guide. In the suggested study plan, use roughly two hours for an attempt and one hour to correct/revise.

| Question | Task | Marks |
|---|---|---:|
| 1a | Explain Von Neumann architecture with a labelled diagram and instruction cycle. | 4 |
| 1b | Convert `(726)₈` to hexadecimal, and `(10110110)₂` to decimal and octal. Show steps. | 3 |
| 1c | Compare auto, static, register and extern with scope/lifetime/default initialization. | 4 |
| 1d | Explain `5/2` versus `(double)5/2`, and correct a bad SQUARE macro. | 2 |
| **Module 1** | | **13** |
| 2a | Write a switch calculator for +,−,×,÷ including division-by-zero handling. | 6 |
| 2b | Write a prime test. Explain why 1 is not prime and how the loop ends. | 4 |
| 2c | Write a centered star pyramid for n rows. Show n=4 output. | 4 |
| 2d | Compare while/do-while and break/continue, including where for-continue goes. | 4 |
| **Module 2** | | **18** |
| 3a | Write ascending bubble sort and trace two passes on `[5,1,4,2,8]`. | 4 |
| 3b | Write a string palindrome test without `strrev`. Explain null termination. | 3 |
| 3c | Explain matrix multiplication dimensions and its three-loop formula. | 3 |
| **Module 3** | | **10** |
| 4a | Compare value passing with address passing, with both swap functions and their outputs. | 7 |
| 4b | Write recursive factorial, trace f(4), and explain both stopping requirements. | 6 |
| 4c | Write recursive Fibonacci and explain its repeated work. | 5 |
| 4d | For `int a[4]={10,20,30,40}`, `p=a`, `q=a+2`, explain `*p`, `*(p+2)`, `q-p`, `p++`, one-past, and why `p+q` is invalid. | 5 |
| 4e | Write a function to sum n array elements through a pointer; explain why size must be communicated. | 4 |
| **Module 4** | | **27** |
| 5a | Define a Student with nested Date. Store n students, display records and find highest marks. | 7 |
| 5b | Give five structure/union differences, including padding and safe use of a tag. | 5 |
| **Module 5** | | **12** |
| **Total** | | **80** |

### A2. Answer guide and self-marking

This marking guide is a practice aid, not the university's official rubric.

- **1a:** same memory for instructions/data; CPU (CU/ALU/registers), memory, I/O and buses labelled; fetch/decode/execute/store described.
- **1b:** `726₈→111 010 110₂→0001 1101 0110₂→1D6₁₆`. `10110110₂=128+32+16+4+2=182₁₀`; `010 110 110₂=266₈`.
- **1c:** main note §2.9. Indeterminate auto/register values, zero for uninitialized static-duration definitions, static retention, extern declaration nuance.
- **1d:** integer division gives 2; cast before division gives 2.5; `#define SQUARE(x) ((x)*(x))`, with no side-effect arguments.
- **2a:** correct formats/types, all four cases, breaks/default, division guard, matching sample output.
- **2b:** reject n<2; search divisors; composite as soon as a divisor is found; prime only after search completes.
- **2c:** row i has n−i spaces and 2i−1 stars, newline after each row.
- **2d:** entry/exit control, minimum iterations, break exits, continue skips body remainder; for's update still runs.
- **3a:** correct adjacent swap and inner bound `n-1-pass`; pass results `[1,4,2,5,8]` then `[1,2,4,5,8]`.
- **3b:** find length; compare `s[i]` with `s[n-1-i]` for first half; mismatch false; null separates string content from unused capacity.
- **3c:** shared dimensions equal; result dimensions are outer dimensions; initialize each result and accumulate over k.
- **4a:** copies unchanged caller values; pointer dereferences update caller; 5,7 then 7,5.
- **4b:** base 0/1 gives 1; n−1 reduces; return trace 1,2,6,24; validate nonnegative bounded input.
- **4c:** bases 0/1, two recursive calls; F(6)=8; repeated subproblems make naïve implementation slow.
- **4d:** 10,30,2; p++ advances one int; one-past may be formed but not dereferenced; adding two addresses has no defined C pointer-addition operator.
- **4e:** loop from 0 to n−1, accumulate `*(p+i)`; array argument adjusts to pointer, no implicit element count.
- **5a:** definition is separate from objects; dot/arrow and nested dot usage; valid array bounds; input/output; initialize/compare topper correctly.
- **5b:** separate/overlapping storage, simultaneous/alternative values, total/largest plus padding, update behavior, appropriate applications and separate tag.

After checking, write an **error list of no more than ten items**, each with the rule and a corrected example. Retest those items after 30–60 minutes.

### A3. Rapid recall prompts

1. Why does `0!` equal 1 in the factorial algorithm?
2. What exactly is stored in a pointer parameter?
3. What happens to a local static across recursive or repeated calls?
4. Why does `strcmp` return zero for equality while `==` returns one for equality?
5. When is `sizeof a / sizeof a[0]` valid for length?
6. Why is `char s[4]="ABCD";` unsuitable as a terminated string?
7. What must be true about two pointers before subtracting them?
8. Why does `continue` in a while loop sometimes prevent progress?
9. What is the difference between logical AND and bitwise AND?
10. Why is `main` declared `int`, and what does `return 0` communicate?
11. Explain declaration, definition and call using one function.
12. What does an exponent bias store, and why do we remove it?

Answers: main note §§2.5–2.11, 3.3, 4.4–4.5 and 5.1–5.7. Say answers aloud before checking.

## Part B - Additional source exercises and program patterns

### B1. Basic algorithms and flowchart practice

| Task from slides | Algorithm outline |
|---|---|
| Sum two numbers | Start → read a,b → sum=a+b → print sum → stop |
| Maximum of two | Read a,b → test a>b → print a on yes, b otherwise |
| Maximum of three | Set max=a → compare/update with b then c → print max |
| Smallest of three using nesting | If a<b, compare a with c; otherwise compare b with c |
| Factorial | Set product=1 → for i=1…n multiply → print product |
| Counting/multiplication table | Read number → set i=1 → while i≤10 print number×i, increment i |
| Login process | Read credentials → decision valid? → success branch / error-and-retry branch |

For a login flowchart, use the decision diamond for validation, label yes/no arrows, and clearly specify any retry limit. This is a diagram exercise, not a request to implement real authentication.

### B2. Quadratic roots — supplied slide topic

For `ax²+bx+c=0`, if a≠0 let `D=b²−4ac`.

- D>0: two real roots `(-b±sqrt(D))/(2a)`.
- D=0: equal real roots `-b/(2a)`.
- D<0: real part `-b/(2a)`, imaginary magnitude `sqrt(-D)/|2a|`.
- a=0: it is not quadratic; handle the linear/degenerate case.

Complete program for simple exact classroom coefficients:

```c
#include <stdio.h>
#include <math.h>
int main(void)
{
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) return 1;
    if (a == 0.0) {
        if (b != 0.0) printf("Linear root=%.2f\n", -c / b);
        else if (c == 0.0) puts("Infinitely many solutions");
        else puts("No solution");
        return 0;
    }
    double d = b * b - 4.0 * a * c;
    if (d > 0.0) {
        printf("%.2f %.2f\n", (-b + sqrt(d)) / (2.0 * a),
               (-b - sqrt(d)) / (2.0 * a));
    } else if (d == 0.0) {
        printf("Repeated root=%.2f\n", -b / (2.0 * a));
    } else {
        double real = -b / (2.0 * a);
        double imag = sqrt(-d) / fabs(2.0 * a);
        printf("%.2f + %.2fi, %.2f - %.2fi\n", real, imag, real, imag);
    }
    return 0;
}
```

Tests: `1 -3 2 → 2.00 1.00`; `1 2 1 → -1.00` repeated; `1 2 5 → -1.00 ± 2.00i`; `0 2 -4 → 2.00` linear. For general numerical software, scaling, cancellation and tolerance need more care; this is the introductory algorithm.

### B3. Incomplete class problem statements

Your notes mention **weight→price slabs**, **PCM marks**, and numbered lab exercises, but do not provide complete rules for all of them. Do not memorize an invented tariff or eligibility threshold as a class fact.

- For a tariff problem, first establish interval boundaries, whether the extra charge is flat or per gram, and whether slabs are cumulative. Use an ordered ladder with no gaps/overlaps. Test each boundary and just above/below it.
- For PCM eligibility, translate each supplied requirement into a Boolean condition. If a question supplies minimum P, C, M and total, the pattern is `p>=minP && c>=minC && m>=minM && p+c+m>=minTotal`. Use the actual question's numbers.
- For grade conversion, the supplied slide thresholds are in the main note. Validate 0–100 before branching.

### B4. Manual string copy, append, comparison and substring

These are **function definitions** for small valid strings. Copy/append require enough destination capacity and nonoverlapping source/destination, as with the library versions. Include `<stddef.h>` for `size_t`.

```c
void copy_string(char dest[], const char src[])
{
    size_t i = 0;
    do {
        dest[i] = src[i];
    } while (src[i++] != '\0');
}

void append_string(char dest[], const char src[])
{
    size_t i = 0, j = 0;
    while (dest[i] != '\0') ++i;
    do {
        dest[i + j] = src[j];
    } while (src[j++] != '\0');
}

int compare_string(const char a[], const char b[])
{
    size_t i = 0;
    while (a[i] != '\0' && a[i] == b[i]) ++i;
    unsigned char x = (unsigned char)a[i];
    unsigned char y = (unsigned char)b[i];
    return (x > y) - (x < y);
}

int substring_index(const char text[], const char pattern[])
{
    if (pattern[0] == '\0') return 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        int j = 0;
        while (pattern[j] != '\0' && text[i + j] != '\0' &&
               text[i + j] == pattern[j]) ++j;
        if (pattern[j] == '\0') return i;
    }
    return -1;
}
```

Examples: copying `AB` requires three destination bytes; appending `CD` gives `ABCD` with five bytes needed; comparison of `abc` with `abd` is negative; substring `ana` in `banana` begins at index 1. The manual compare intentionally returns −1/0/+1; the standard `strcmp` only promises negative/zero/positive.

For lowercase, use `s[i]=(char)tolower((unsigned char)s[i]);`. An ASCII-only alternative converts `'a'…'z'` with `s[i]=s[i]-'a'+'A'`; avoid subtracting 32 from every character indiscriminately.

### B5. Matrix extras and normal magic-square check

Transpose/addition body fragments, arrays and validated sizes already available:

```c
for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j) {
        transpose[j][i] = a[i][j];
        sum[i][j] = a[i][j] + b[i][j];
    }
```

Function definition for a normal magic square with `1<=n<=10`, stored in a fixed-column array:

```c
int normal_magic_square(int a[][10], int n)
{
    if (n < 1 || n > 10) return 0;
    int seen[101] = {0};
    int target = n * (n * n + 1) / 2;
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            int value = a[i][j];
            if (value < 1 || value > n * n || seen[value]) return 0;
            seen[value] = 1;
        }
    for (int i = 0; i < n; ++i) {
        int row = 0, col = 0;
        for (int j = 0; j < n; ++j) {
            row += a[i][j];
            col += a[j][i];
        }
        if (row != target || col != target) return 0;
        diag1 += a[i][i];
        diag2 += a[i][n - 1 - i];
    }
    return diag1 == target && diag2 == target;
}
```

**Odd-order generation, Siamese method:** start with 1 at the top row/middle column. For each next number, tentatively move one row up and one column right, wrapping around. If that cell is occupied, instead move one row down from the previous cell. Repeat through n². This method applies to odd n; it is not a general construction method for even n.

### B6. More record-program patterns

These are constructed practice variations because the numbered original structure lab questions are not present:

| Record | Fields | Processing |
|---|---|---|
| Employee | id, name, basic pay, allowance, deduction | Compute gross=basic+allowance, net=gross−deduction; update via pointer |
| Book | title, author, price | Find lowest/highest price; search title with `strcmp` |
| Complex number | real, imaginary | Return a structure with componentwise sum |
| Student subject result | roll, name, marks[3] | Nested member array, total/average, topper |

Complex addition function/type definitions:

```c
struct Complex { double real, imag; };
struct Complex add_complex(struct Complex a, struct Complex b)
{
    struct Complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}
```

### B7. Background topics from the early sources

**System/software layers:** users interact with application programs; applications use an operating system; the OS manages hardware resources. Compilers, assemblers, editors and database systems are examples of software tools/programs. The CPU only executes instructions it supports; an ISA specifies the programmer-visible instruction model, e.g. x86 or ARM.

**Digital representation:** digital circuits distinguish discrete states; a bit uses two such states. A diagram with 8 equal bit intervals per second illustrates 8 bits/s for that diagram, not a universal computer speed. Clock cycles/second, instructions/second, data-transfer rate, storage capacity and access latency measure different things. `1 ns=10⁻⁹ s`, `1 ps=10⁻¹² s`, `1 GHz=10⁹ cycles/s`. Multiple cores provide multiple execution resources; core count alone does not determine one program's speed.

**Storage technology:** registers and cache typically use fast transistor-based storage; DRAM uses capacitor charge and refresh; EEPROM/flash are non-volatile programmable technologies; HDDs use magnetic surfaces divided into tracks/sectors; SSDs normally use NAND flash without moving mechanical parts. Optical storage uses light. Historical slide capacities, register counts and timing numbers are illustrative, not memorization targets.

**Harvard comparison**, marked outside the exam in your notes: classical Harvard architecture separates instruction/data memories and paths, allowing some transfers in parallel. Classical Von Neumann uses a unified stored-program memory model. Modern machines may combine features, so do not assume every processor family has one identical organization. “Von Neumann architecture” and “instruction set architecture” are different concepts.

**Simple sorting/search complexity:** linear search O(n); binary search O(log n) on sorted data; bubble/selection O(n²) generally; merge sort O(n log n). O-notation describes growth with input size, not seconds on a particular computer.

**Standard library recap:** `<stdio.h>` I/O, `<string.h>` string operations, `<math.h>` math, `<ctype.h>` characters, `<stdlib.h>` utilities. Standard C library facilities are available via declarations in headers and linked implementations, not by loading whole libraries during preprocessing.

**Elementary data structures**, broad-syllabus context only:

- Array: contiguous indexed elements, fixed size in a given object.
- Structure: aggregate record with named fields.
- Stack: last in, first out; push/pop; recursion's active calls provide the useful connection here.
- Queue: first in, first out; enqueue/dequeue.
- Linked list: nodes connected by pointers; your notes place linked lists in later DSA, so implementation is outside the core route.

**File handling** appears in early broad syllabus slides but not in the detailed five-module blueprint. Minimal awareness: `FILE *fp=fopen("data.txt","r");` opens a file; check `fp!=NULL`; use `fprintf`/`fscanf`/`fgets` as appropriate; `fclose(fp)` closes it. Do not replace higher-priority pointer/recursion practice with this extension unless your teacher has separately included it.

## Part C - Full recursion practice-list coverage

### C1. Map of all 24 topics in the supplied PDF

| PDF item | Topic | Where to study / priority |
|---:|---|---|
| 1 | Print 1…N / N…1 | Main §5.6, CORE |
| 2 | Sum first N natural numbers | Main §5.7, CORE |
| 3 | Factorial | Main §5.6, CORE |
| 4 | Fibonacci series/nth term | Main §§3.4, 5.7, CORE |
| 5 | Power aⁿ | Main §5.7, CORE |
| 6 | Sum digits | Main §5.7, CORE |
| 7 | Count digits | C2 below |
| 8 | Reverse number | C2 below |
| 9 | GCD/LCM | Main §5.7, CORE |
| 10 | Palindrome number | Reverse + compare, C2 |
| 11 | Prime check | C2 below |
| 12 | Decimal to binary | C2 below |
| 13 | Array sum/maximum | C2 below |
| 14 | Binary search | C2 below, requires sorted array |
| 15 | Reverse string | C2 below |
| 16 | String palindrome | C2 below |
| 17 | Recursive multiplication | C2 below |
| 18 | Tower of Hanoi | Main §5.7 |
| 19 | Merge sort | C3 conceptual extension |
| 20 | Quick sort | C3 conceptual extension |
| 21 | String permutations | C3 conceptual extension |
| 22 | Subsets of a set | C3 conceptual extension |
| 23 | N-Queens | C3 conceptual extension |
| 24 | Rat in a maze | C3 conceptual extension |

### C2. Additional recursive functions

These are **function definitions**, to call from a suitable `main`. Include `<stdio.h>` for output. Use small bounded nonnegative inputs, with results that fit the type. Deep recursion can exhaust the stack even if arithmetic fits.

```c
int count_digits_rec(unsigned int n)
{
    if (n < 10) return 1;
    return 1 + count_digits_rec(n / 10);
}

unsigned int reverse_acc(unsigned int n, unsigned int rev)
{
    if (n == 0) return rev;
    return reverse_acc(n / 10, rev * 10 + n % 10);
}

int number_palindrome_rec(unsigned int n)
{
    return n == reverse_acc(n, 0);
}

int prime_trial_rec(int n, int divisor)
{
    if (n < 2) return 0;
    if (divisor > n / divisor) return 1;
    if (n % divisor == 0) return 0;
    return prime_trial_rec(n, divisor + 1);
}

void binary_rec(unsigned int n)
{
    if (n > 1) binary_rec(n / 2);
    printf("%u", n % 2);
}

int array_sum_rec(const int a[], int n)
{
    if (n == 0) return 0;
    return a[n - 1] + array_sum_rec(a, n - 1);
}

int array_max_rec(const int a[], int n) // n>=1
{
    if (n == 1) return a[0];
    int previous = array_max_rec(a, n - 1);
    return a[n - 1] > previous ? a[n - 1] : previous;
}

int binary_search_rec(const int a[], int low, int high, int key)
{
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (a[mid] == key) return mid;
    if (key < a[mid]) return binary_search_rec(a, low, mid - 1, key);
    return binary_search_rec(a, mid + 1, high, key);
}

void reverse_string_rec(char s[], int left, int right)
{
    if (left >= right) return;
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    reverse_string_rec(s, left + 1, right - 1);
}

int string_palindrome_rec(const char s[], int left, int right)
{
    if (left >= right) return 1;
    if (s[left] != s[right]) return 0;
    return string_palindrome_rec(s, left + 1, right - 1);
}

unsigned long long multiply_rec(unsigned int a, unsigned int b)
{
    if (b == 0) return 0;
    return a + multiply_rec(a, b - 1);
}
```

| Function call | Expected result / condition |
|---|---|
| `count_digits_rec(0)`, `(472)` | 1,3 |
| `reverse_acc(120,0)` | 21; require reversed value fits unsigned int |
| `number_palindrome_rec(121)` | 1 |
| `prime_trial_rec(29,2)` | 1; always start divisor at 2 |
| `binary_rec(13)` | Prints 1101; `binary_rec(0)` prints 0 |
| `array_sum_rec(a,n)` | n≥0, valid a[0…n−1], sum fits |
| `array_max_rec(a,n)` | n≥1; use previous result once to avoid duplicate recursion |
| `binary_search_rec(a,0,n-1,key)` | Sorted ascending array; valid index or −1 |
| `reverse_string_rec(s,0,len-1)` | len is a small signed int string length; excludes null |
| `string_palindrome_rec(s,0,len-1)` | 1/0, case-sensitive; empty length 0 yields right=−1 and returns 1 |
| `multiply_rec(6,4)` | 24, O(b) recursion depth |

Binary search example: sorted `[1,3,5,7,9]`, key 7: midpoint index 2 has 5, so recurse on 3…4; index 3 has 7. Worst O(log n) comparisons and recursion depth. It is different from the blueprint's required linear search, which works without sorted input.

### C3. Advanced recursion concepts

These are concise **algorithms/pseudocode**, not C programs to copy into a compiler. They retain the material that the source PDF listed as advanced practice. Keep them behind the core if time is short.

**Merge sort:** recursively split into halves, sort each half, merge sorted halves. Base: range has at most one element. Typical time O(n log n), extra array storage O(n).

```text
merge_sort(a, left, right):
    if left >= right: return
    mid = left + (right-left)//2
    merge_sort(a, left, mid)
    merge_sort(a, mid+1, right)
    merge the two sorted ranges into a temporary array
    copy the merged range back
```

Merge step: keep one index in each half; repeatedly copy the smaller next item, then copy any leftovers. Example `[4,1,3,2]` splits into `[4,1]` and `[3,2]`, sorts to `[1,4]` and `[2,3]`, merges to `[1,2,3,4]`.

**Quick sort:** choose a pivot, partition elements around it, recursively sort the two remaining ranges. Base: zero/one element. Typical average O(n log n), worst O(n²); recursion depth depends on partition balance.

```text
quick_sort(a, low, high):
    if low >= high: return
    p = partition(a, low, high)
    quick_sort(a, low, p-1)
    quick_sort(a, p+1, high)

partition using final element as pivot:
    pivot = a[high]; i = low
    for j from low to high-1:
        if a[j] <= pivot: swap a[i],a[j]; i++
    swap a[i],a[high]
    return i
```

**String permutations:** fix one position, try each remaining character there, recursively fill the rest, undo the swap. Base: all positions fixed. Distinct n characters have n! permutations; duplicate characters may lead to duplicate output unless handled.

```text
permute(s, position, n):
    if position == n: output s; return
    for j from position to n-1:
        swap s[position],s[j]
        permute(s, position+1, n)
        swap s[position],s[j]       // undo
```

**Subsets:** each element has two choices: exclude or include. Base: decisions made for all elements. An n-element set has 2ⁿ subsets, including empty and full.

```text
subsets(index, current):
    if index == n: output current; return
    subsets(index+1, current)
    append element[index] to current
    subsets(index+1, current)
    remove last element
```

**N-Queens:** place n queens on an n×n board so no two share a row, column or diagonal. Backtrack one row at a time. Test a candidate column against previously placed queens: reject same column or `abs(column_difference)==row_difference`. Base: row==n. For n=4, a zero-based column solution by row is `[1,3,0,2]`.

```text
queens(row):
    if row == n: output solution; return
    for col from 0 to n-1:
        if safe(row,col):
            place queen
            queens(row+1)
            remove queen
```

**Rat in a maze:** recursively try allowed neighboring open cells; mark visited so a path does not cycle; undo the mark/path when backtracking. Base: destination reached. Define permitted moves before solving: right/down only and four-direction movement are different problems.

```text
search(row,col):
    if outside board or blocked or already in current path: return false
    add cell to path; mark visited
    if cell is destination: return true
    for each allowed move:
        if search(next_row,next_col): return true
    unmark visited; remove cell from path
    return false
```

The shared backtracking pattern is **choose → explore → undo**. This differs from simple factorial recursion because a call explores multiple possible choices. Stop here unless you have already mastered the blueprint's core programs.

## Import and source notes

Keep this note alongside `PSUC - Ultimate ETE Study Notes.md` and the `assets` directory in your Obsidian vault. The source inventory and correction notes are in the main note. Content labelled constructed practice or extension is added teaching material, not an official prediction or unseen lab solution.
