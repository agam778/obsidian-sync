---
tags:
  - PSUC
  - ETE
  - revision
---

# PSUC — Last Hour Revision

Use **after** the main notes. Spend 20 min on M4, 12 min on M2, 10 min on M1, 8 min on M3, 7 min on M5 and 3 min on the final checklist. Return to [[PSUC - Ultimate ETE Notes]] for examples.

## Module 4 — 20 minutes

**Function:** Named block performing a task. Prototype declares types; definition contains body; call runs it. Actual arguments are supplied at the call; formal parameters receive copied values.

**Value:** `f(x)` with `int a`; changes to a stay local. **Address/reference-like:** `f(&x)` with `int *p`; `*p=…` changes x. **C passes pointer values by value too.**

```c
void swap(int *a,int *b) {
    int t=*a; *a=*b; *b=t;
}
// call swap(&x,&y);
```

**Pointer:** Stores an address. `&x` is address, `p` stored address, `*p` pointed value, `&p` pointer's own address. Null/wild/dangling pointers must not be dereferenced. `%p` takes `(void *)p`.

**Pointer arithmetic:** `p+1` advances one pointed-to element. `q-p` counts elements, print `%td`. Same array only; one-past can be formed but not dereferenced. No pointer+pointer/multiply/divide.

| Fresh `a={10,20,30}`, p=a | Effect |
|---|---|
| `*p++` | Yields 10; advances p |
| `(*p)++` | Yields 10; changes a[0] to 11 |
| `*++p` | Advances p; yields 20 |
| `++*p` | Changes a[0] to 11; yields 11 |

`a[i]==*(a+i)`. Array parameter `int a[]` adjusts to `int *a`; pass n. `sizeof` inside the function cannot recover array length. Actual array size formula: `sizeof(a)/sizeof(a[0])`. For `int a[][3]`, columns must be known; this is not `int **`.

**Recursion:** Function calls itself. **Base case stops; recursive case moves toward it.** Automatic locals are separate for active calls; stack unwinds in reverse order.

| Problem | Base | Recursive rule |
|---|---|---|
| Factorial | n≤1 → 1 | n×fact(n−1) |
| Fibonacci | n≤1 → n | F(n−1)+F(n−2) |
| Natural sum | n=0 → 0 | n+sum(n−1) |
| Digit sum | n=0 → 0 | n%10+sumDigits(n/10) |
| Power | exponent=0 → 1 | a×power(a,n−1) |
| GCD | b=0 → a | gcd(b,a%b) |

Use the valid non-negative domains. `fact(4)=24`; `F(6)=8`; `gcd(18,12)=6`; `sumDigits(472)=13`. Print before call → descending; print after call → ascending. Naive Fibonacci repeats work. Hanoi: **2ⁿ−1** moves; n=3 gives 7, n=4 gives 15.

## Module 2 — 12 minutes

**If:** Run controlled statement if condition nonzero. **Ladder:** Only first true branch. **Nested:** One if within another. `else` binds to nearest unmatched if.

- `if(x==0);` has an empty controlled statement.
- `x>=5 && x<=10` is correct; `5<=x<=10` is wrong for the range.
- `x=5` assigns; `x==5` compares.
- Leap year: `y%400==0 || (y%4==0 && y%100!=0)`.
- Odd check: `n%2!=0` also works for negative odd integers.
- Quadratic: d=b²−4ac; positive → two real roots; zero → repeated; negative → complex. Check a≠0.

**Switch:** Integer/char/enum selector; constant integer case labels; no duplicates; no float/string cases. `break` stops fall-through. `default` optional, anywhere. `case 2` and `case 1+1` duplicate. Range-case syntax is an extension.

**Loops:** `for(init;test;update)` and while test before body (0+ runs); do-while tests after (1+ runs) and ends in `;`. For order: init → test → body → update → test. All header parts may be omitted.

**Break:** Exit nearest loop/switch. **Continue:** Next loop iteration (for update still runs). **Return:** Exit function. **Goto:** Jump to same-function label.

**Programs to recall:**

- Last digit `n%10`; remove digit `n/=10`; reverse `rev=rev*10+digit`.
- Preserve original to test number palindrome.
- Sum starts at 0; factorial product starts at 1; 0!=1.
- Prime: n≥2 and no divisor 2..√n; use `d<=n/d`.
- Fibonacci: start 0,1; next=a+b, then a=b,b=next.
- Pyramid row r: n−r spaces, 2r−1 stars.
- Matrix/pattern outer loop controls rows; inner loop columns.

## Module 1 — 10 minutes

**Von Neumann:** Same memory for data and instructions. CPU=CU+ALU+registers. Fetch → decode → execute → store. PC next instruction, IR current instruction. Data/address/control buses carry data/addresses/control. Shared path causes bottleneck.

**Memory:** Registers → cache → RAM → secondary. RAM volatile; ROM/secondary non-volatile. HDD magnetic; SSD flash. Byte normally 8 bits; word depends on architecture.

**Languages:** Machine=binary, assembly=mnemonics translated by assembler, high-level=human-readable translated by compiler/runtime. C is procedural.

**PCAL:** Preprocessor → compiler → assembler → linker. Loader later loads executable. Header supplies declarations; `sqrt(100.0)` is a call. Use `int main(void)` and `return 0`.

**Conversions:** Decimal integer → repeated divide, read remainders up. Other base → sum digit×base^position. Binary/oct groups 3; binary/hex groups 4. Octal↔hex via binary is convenient. Fractions: repeated multiply, read integer parts down.

`25₁₀=11001₂`; `125₁₀=175₈`; `250₁₀=FA₁₆`; `345₈=E5₁₆`; `2A₁₆=52₈=42₁₀`.

**Representations:** unsigned n bits: 0..2ⁿ−1; signed two's complement: −2ⁿ⁻¹..2ⁿ⁻¹−1. Negative: invert positive bits, add 1. Binary32: 1 sign/8 exponent/23 fraction, bias 127. 19.125=1.0011001₂×2⁴ → exponent 131.

**Variable:** Named memory location with changeable value. **Type:** Kind/range/storage requirements. **Token:** Smallest program unit. **Identifier:** Letters/digits/underscore; no leading digit/keyword/space; case-sensitive. `enum` defaults 0,1,2… and continues after explicit values.

**Macros:** Token replacement. `#define SQUARE(x) ((x)*(x))`; bad x*x gives 11 for 2+3. Avoid side-effect arguments. `const` is typed. `017` is octal 15. `3.14` double, `3.14f` float.

| Storage | Scope/use | Lifetime | Uninitialised value |
|---|---|---|---|
| auto/register | Block | Block execution | Indeterminate |
| local static | Block | Whole program | Zero |
| file static | File/internal linkage | Whole program | Zero |
| extern | Declaration of shared object | Object usually whole program | Defined object with static duration defaults to zero |

**Operators:** `* / %` before `+ -`; then shifts, relational, equality, bitwise &,^,|, logical &&,||, ?:, assignment, comma. Precedence is grouping, not general evaluation order. `i++ + ++i` has no defined output in C11.

`7/2=3`; `(double)7/2=3.5`; `(double)(7/2)=3.0`. `&&/||` short-circuit, produce 0/1. `&/|/^` operate on bits. `12&25=8`, `12|25=29`, `12^25=21`. `^` is not power. Signed overflow is undefined; unsigned wraps.

**Formats:** int `%d`, unsigned `%u`, long `%ld`, long long `%lld`, size_t `%zu`, pointer difference `%td`. Input float `%f`, double `%lf`; output both `%f`. `%5d` minimum width, `%-5d` left, `%05d` zero pad, `%.2f` two decimals, `%.3s` at most 3 characters, `%%` percent.

`scanf %*d` discards; `%i` detects base; `%d` decimal; ` %c` skips whitespace. Check return count. `printf %s` stops at `\0`; `scanf %s` stops at whitespace. `\n` newline, `\t` tab, `\0` null.

## Module 3 — 8 minutes

**Array:** Same-type elements, contiguous storage, indexes 0..n−1, no automatic bounds checking. `int a[5]={1,2}` gives remaining zeros; uninitialised automatic array does not.

**Linear search:** Check one-by-one; return index or −1. **Bubble:** Adjacent comparison/swaps; largest moves right; `pass<n-1`, `j<n-1-pass`, compare `a[j]` and `a[j+1]`. **Selection:** Select smallest remaining, place at next start.

**2D:** Row-major. Addition needs same dimensions. Transpose `t[j][i]=a[i][j]`. Multiply only if c1=r2; output r1×c2; `c[i][j]=0`, then add `a[i][k]*b[k][j]` for k=0..c1−1.

**String:** Characters terminated by `\0`. `char a[15]="ABCD"`: sizeof=15, strlen=4, a[4]=`\0`. `strlen` excludes terminator. Use `<string.h>`, not `<str.h>`. Use `fgets`/bounded scans, never gets. `scanf("%19s",s)` for char s[20].

| Function | Meaning |
|---|---|
| strlen | Length |
| strcpy(dest,src) | Copy src into dest |
| strcat(dest,src) | Append src to dest |
| strcmp(a,b) | 0 equal; negative/positive ordering |
| strchr / strrchr | First / last character occurrence |
| strstr(text,sub) | First substring occurrence |

Destinations need room for data+`\0`. `a==b` does not compare string contents. Search can return NULL. `strrev/strupr/strlwr` are nonstandard; use loops/ctype alternatives.

**String programs:** Traverse until `\0`. Reverse swaps left=0,right=n−1 while left<right. Palindrome compares those pairs. Count spaces with `s[i]==' '`. Copy/append must write terminator. Print length index, not `s[index]`.

## Module 5 — 7 minutes

**Structure:** Collection of related members, possibly different types, under one name. Members have separate storage. **Union:** Different possible members share overlapping storage.

```c
struct Date { int day,month,year; };
struct Student { char name[30]; int marks; struct Date dob; };
// struct Student s={"Aman",90,{15,8,2007}};
// struct Student a[50];
// s.marks, s.dob.day, a[i].marks
// struct Student *p=&s; p->marks == (*p).marks
```

`typedef struct Student Student;` adds a type name alias. Structure assignment copies the record; array members cannot separately be assigned a string literal, so use strcpy for a name after declaration.

**Array of structures:** Read/process `a[i].member` in loops; topper index starts at 0; compare marks to update it. Passing struct by value copies; passing pointer allows changes using arrow.

**Struct size:** Space for all members plus padding. **Union size:** Enough for largest member, possibly padding. Use sizeof. Struct retains all member values; union use follows the most recently stored alternative. Keep a separate enum/flag to track it. Read intended active member; do not predict an inactive member's output.

## Final 3-minute checklist

- [ ] Headers, `int main(void)`, declarations, initial values, correct return.
- [ ] `scanf` addresses and matching specifiers; string capacity includes null.
- [ ] `=` versus `==`; no stray semicolon after if/for/while.
- [ ] Correct endpoints: index `<n`, divisor boundary, loop `<=n` when inclusive.
- [ ] Switch cases integral and unique; breaks where intended.
- [ ] Array length supplied; matrix result cell zeroed; pointer in bounds.
- [ ] Recursion base case and progress; correct print/return order.
- [ ] Dot versus arrow; struct versus union memory; no hardcoded universal sizes.
- [ ] Show conversion steps, trace values and one sample output when asked.

**Close this sheet and write the pointer swap, Fibonacci recurrence, bubble-sort bounds and structure/union comparison from memory.**
