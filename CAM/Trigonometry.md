## 1. Angle Systems & Conversions

$$
\text{Sexagesimal (°)} \;\longleftrightarrow\; \text{Circular (rad)} \;\longleftrightarrow\; \text{Centesimal (grade)}
$$

$$
D^\circ = \frac{2}{\pi}\,R \;(\text{rad}) = \frac{9}{10}\,G \;(\text{grades})
$$

- $180^\circ = \pi \text{ rad} = 200^g$
- Arc length: $s = r\theta$ ($\theta$ in radians)

---

## 2. Basic (Pythagorean) Identities

| Identity |
|---|
| $\sin^2\theta + \cos^2\theta = 1$ |
| $\sec^2\theta - \tan^2\theta = 1 \;\Rightarrow\; (\sec\theta - \tan\theta) = \dfrac{1}{\sec\theta+\tan\theta}$ |
| $\csc^2\theta - \cot^2\theta = 1 \;\Rightarrow\; (\csc\theta - \cot\theta) = \dfrac{1}{\csc\theta+\cot\theta}$ |

> [!tip] Golden Rule of Trigonometry
> When stuck, **convert every ratio into sin and cos** — most identities simplify immediately after that.

---

## 3. Powers Reduction (High → Low Power)

$$
\sin^4\theta + \cos^4\theta = 1 - 2\sin^2\theta\cos^2\theta
$$
$$
\sin^6\theta + \cos^6\theta = 1 - 3\sin^2\theta\cos^2\theta
$$

> [!note] Trick
> Always write $1 = (\sin^2\theta+\cos^2\theta)^n$ and expand using $a^2+b^2$ / $a^3+b^3$ style identities.

---

## 4. Elimination Method (removing the parameter θ)

| If you're given...                           | Do this...              |
| -------------------------------------------- | ----------------------- |
| relation between $\sin\theta$ & $\cos\theta$ | **square and add**      |
| relation between $\tan\theta$ & $\sec\theta$ | **square and subtract** |
| relation between $\cot\theta$ & $\csc\theta$ | **square and subtract** |

---

## 5. Allied (General) Angles

Angles of the form $n\dfrac{\pi}{2} \pm \theta$, i.e. $\dfrac{\pi}{2}, \pi, \dfrac{3\pi}{2}, 2\pi \dots$

**Rules:**
1. If $n$ is **even** $\left(n\pi,\ 2n\pi\right)$ → ratio **name stays the same**
2. If $n$ is **odd** $\left(\dfrac{(2n+1)\pi}{2}\right)$ → ratio **changes** (sin ↔ cos, tan ↔ cot, sec ↔ csc)
3. Sign is decided by the **quadrant** in which the angle lies (ASTC rule)

> [!tip] ASTC Rule (quadrant sign rule)
> **A**ll Silver Tea Cups
> - Quadrant I: **A**ll ratios positive
> - Quadrant II: **S**in (and csc) positive
> - Quadrant III: **T**an (and cot) positive
> - Quadrant IV: **C**os (and sec) positive

---

## 6. Compound Angle Formulas

$$
\sin(A+B) = \sin A\cos B + \cos A\sin B
$$
$$
\sin(A-B) = \sin A\cos B - \cos A\sin B
$$
$$
\cos(A+B) = \cos A\cos B - \sin A\sin B
$$
$$
\cos(A-B) = \cos A\cos B + \sin A\sin B
$$
$$
\tan(A+B) = \frac{\tan A + \tan B}{1-\tan A\tan B}
$$
$$
\tan(A-B) = \frac{\tan A - \tan B}{1+\tan A\tan B}
$$

### 6.1 Tangent of Sum of *n* Angles
$$
\tan(A_1+A_2+\cdots+A_n) = \frac{S_1 - S_3 + S_5 - \cdots}{1 - S_2 + S_4 - \cdots}
$$

where:
- $S_1$ = sum of $\tan$ of all angles taken **one at a time**
- $S_2$ = sum of $\tan$ of angles taken **two at a time**
- $S_3$ = sum of $\tan$ of angles taken **three at a time**, and so on.

---

## 7. Product ↔ Sum/Difference Conversions

> [!tip] Mnemonic
> "**Jab product ko sum ya difference ke form me convert karna ho — yaha se seekho.**"
> (Whenever you need to turn a *product* into a *sum/difference*, use these.)

$$
2\sin A\cos B = \sin(A+B) + \sin(A-B)
$$
$$
2\cos A\sin B = \sin(A+B) - \sin(A-B)
$$
$$
2\cos A\cos B = \cos(A+B) + \cos(A-B)
$$
$$
2\sin A\sin B = \cos(A-B) - \cos(A+B)
$$

---

## 8. Sum/Difference ↔ Product (C–D Formulas)

> [!tip] Purpose
> These are used **to change the nature of angles** — converting a sum/difference of ratios into a product.

$$
\sin C + \sin D = 2\sin\left(\frac{C+D}{2}\right)\cos\left(\frac{C-D}{2}\right)
$$
$$
\sin C - \sin D = 2\cos\left(\frac{C+D}{2}\right)\sin\left(\frac{C-D}{2}\right)
$$
$$
\cos C + \cos D = 2\cos\left(\frac{C+D}{2}\right)\cos\left(\frac{C-D}{2}\right)
$$
$$
\cos C - \cos D = -2\sin\left(\frac{C+D}{2}\right)\sin\left(\frac{C-D}{2}\right) = 2\sin\left(\frac{D-C}{2}\right)\sin\left(\frac{C+D}{2}\right)
$$

---

## 9. Double Angle ("Super-Hit") Formulas

$$
\sin2\theta = 2\sin\theta\cos\theta
$$
$$
\cos2\theta = \cos^2\theta - \sin^2\theta = 1-2\sin^2\theta = 2\cos^2\theta - 1
$$

**Quadratic ↔ Linear conversions:**
$$
\sin^2\theta = \frac{1-\cos2\theta}{2}, \qquad \cos^2\theta = \frac{1+\cos2\theta}{2}
$$

---

## 10. Triple Angle Formulas

$$
\sin3\theta = 3\sin\theta - 4\sin^3\theta \quad\Rightarrow\quad \sin^3\theta = \frac{3\sin\theta - \sin3\theta}{4}
$$
$$
\cos3\theta = 4\cos^3\theta - 3\cos\theta \quad\Rightarrow\quad \cos^3\theta = \frac{3\cos\theta + \cos3\theta}{4}
$$
$$
\tan3\theta = \frac{3\tan\theta - \tan^3\theta}{1-3\tan^2\theta}
$$

---

## 11. Product Identities Involving Sum/Difference

$$
\sin(A+B)\sin(A-B) = \sin^2A - \sin^2B = \cos^2B-\cos^2A
$$
$$
\cos(A+B)\cos(A-B) = \cos^2A - \sin^2B
$$

### 11.1 Special (60° ± θ) Triple Products
$$
\sin(60^\circ-\theta)\sin\theta\sin(60^\circ+\theta) = \frac{1}{4}\sin3\theta
$$
$$
\cos(60^\circ-\theta)\cos\theta\cos(60^\circ+\theta) = \frac{1}{4}\cos3\theta
$$
$$
\tan(60^\circ-\theta)\tan\theta\tan(60^\circ+\theta) = \tan3\theta
$$

---

## 12. Conditional Identities (A + B = 45° / 225° type)

> [!note]
> If $A+B = 45^\circ$ (or $225^\circ$), then:
> $$(1+\tan A)(1+\tan B) = 2$$
> If $A-B = 45^\circ$ (or $225^\circ$), then:
> $$\frac{1+\tan A}{1-\tan B} = 2$$

---

## 13. Conversion Formulas (Half-Angle / Weierstrass substitutions)

Let $t = \tan\left(\dfrac{A}{2}\right)$:

$$
\sin A = \frac{2t}{1+t^2}, \qquad \cos A = \frac{1-t^2}{1+t^2}, \qquad \tan A = \frac{2t}{1-t^2}
$$

### 13.1 Other Useful Conversions
$$
\cot\theta - \tan\theta = 2\cot2\theta
$$
$$
\tan\theta = \frac{1-\cos2\theta}{\sin2\theta}, \qquad \cot\theta = \frac{1+\cos2\theta}{\sin2\theta}
$$
$$
\frac{1+\tan\theta}{1-\tan\theta} = \tan\left(\frac{\pi}{4}+\theta\right), \qquad \frac{1-\tan\theta}{1+\tan\theta} = \tan\left(\frac{\pi}{4}-\theta\right)
$$

### 13.2 Square-Root Simplifications
$$
1-\sin\theta = \left(\sin\frac{\theta}{2}-\cos\frac{\theta}{2}\right)^2 \;\Rightarrow\; \sqrt{1-\sin\theta} = \left|\sin\frac{\theta}{2}-\cos\frac{\theta}{2}\right|
$$
$$
1+\sin\theta = \left(\sin\frac{\theta}{2}+\cos\frac{\theta}{2}\right)^2 \;\Rightarrow\; \sqrt{1+\sin\theta} = \left|\sin\frac{\theta}{2}+\cos\frac{\theta}{2}\right|
$$
$$
1+\cos2\theta = 2\cos^2\theta, \qquad 1-\cos2\theta = 2\sin^2\theta
$$

---

## 14. Important Standard Angle Values

| Angle | $\sin$ | $\cos$ | $\tan$ |
|---|---|---|---|
| $15^\circ$ | $\dfrac{\sqrt3-1}{2\sqrt2}$ | $\dfrac{\sqrt3+1}{2\sqrt2}$ | $2-\sqrt3$ |
| $75^\circ$ | $\dfrac{\sqrt3+1}{2\sqrt2}$ | $\dfrac{\sqrt3-1}{2\sqrt2}$ | $2+\sqrt3$ |

---

## 15. Inverse Trigonometric Identities (Class 12)

$$
\sin^{-1}x + \cos^{-1}x = \frac{\pi}{2}, \qquad \tan^{-1}x + \cot^{-1}x = \frac{\pi}{2}, \qquad \sec^{-1}x + \csc^{-1}x = \frac{\pi}{2}
$$
$$
\tan^{-1}x + \tan^{-1}y = \tan^{-1}\left(\frac{x+y}{1-xy}\right) \quad (xy<1)
$$
$$
\tan^{-1}x - \tan^{-1}y = \tan^{-1}\left(\frac{x-y}{1+xy}\right)
$$
$$
\sin^{-1}x + \sin^{-1}y = \sin^{-1}\!\left(x\sqrt{1-y^2}+y\sqrt{1-x^2}\right)
$$

---

## 16. Trigonometric Equations — General Solutions

| Equation                      | General Solution                |
| ----------------------------- | ------------------------------- |
| $\sin\theta = 0$              | $\theta = n\pi$                 |
| $\cos\theta = 0$              | $\theta = (2n+1)\dfrac{\pi}{2}$ |
| $\tan\theta = 0$              | $\theta = n\pi$                 |
| $\sin\theta = \sin\alpha$     | $\theta = n\pi + (-1)^n\alpha$  |
| $\cos\theta = \cos\alpha$     | $\theta = 2n\pi \pm \alpha$     |
| $\tan\theta = \tan\alpha$     | $\theta = n\pi + \alpha$        |
| $\sin^2\theta = \sin^2\alpha$ | $\theta = n\pi \pm \alpha$      |

*(here $n \in \mathbb{Z}$)*

---

## 17. Common Errors to Avoid

> [!warning] Watch out for:
> - Forgetting the sign flip in allied angles (check the quadrant every time — ASTC)
> - Mixing up which identity needs squaring **and adding** vs **squaring and subtracting**
> - Losing solutions in general equations by forgetting the $\pm$ or $(-1)^n$ factor
> - Sign error in $\cos C - \cos D$ (it's the only C–D formula with a negative sign)
> - Applying $\tan(A+B)$ formula without checking $1-\tan A\tan B \neq 0$

