## 1. Basic Algebraic Rules

|Rule|Formula|
|---|---|
|Constant|$\dfrac{d}{dx}(c) = 0$|
|Power Rule|$\dfrac{d}{dx}(x^n) = n,x^{n-1}$|
|Constant Multiple|$\dfrac{d}{dx}(c,f(x)) = c,f'(x)$|
|Sum/Difference|$\dfrac{d}{dx}(f \pm g) = f' \pm g'$|
|Product Rule|$\dfrac{d}{dx}(fg) = f'g + fg'$|
|Quotient Rule|$\dfrac{d}{dx}!\left(\dfrac{f}{g}\right) = \dfrac{f'g - fg'}{g^2}$|
|Chain Rule|$\dfrac{d}{dx}f(g(x)) = f'(g(x))\cdot g'(x)$|
|Reciprocal|$\dfrac{d}{dx}!\left(\dfrac{1}{f(x)}\right) = -\dfrac{f'(x)}{[f(x)]^2}$|

---

## 2. Trigonometric Functions

|Function|Derivative|
|---|---|
|$\sin x$|$\cos x$|
|$\cos x$|$-\sin x$|
|$\tan x$|$\sec^2 x$|
|$\cot x$|$-\csc^2 x$|
|$\sec x$|$\sec x \tan x$|
|$\csc x$|$-\csc x \cot x$|

---

## 3. Inverse Trigonometric Functions

|Function|Derivative|
|---|---|
|$\sin^{-1}x$|$\dfrac{1}{\sqrt{1-x^2}}$|
|$\cos^{-1}x$|$-\dfrac{1}{\sqrt{1-x^2}}$|
|$\tan^{-1}x$|$\dfrac{1}{1+x^2}$|
|$\cot^{-1}x$|$-\dfrac{1}{1+x^2}$|
|$\sec^{-1}x$|$\dfrac{1}{\vert x\vert\sqrt{x^2-1}}$|
|$\csc^{-1}x$|$-\dfrac{1}{\vert x\vert\sqrt{x^2-1}}$|

---

## 4. Exponential & Logarithmic Functions

|Function|Derivative|
|---|---|
|$e^x$|$e^x$|
|$a^x$|$a^x \ln a$|
|$\ln x$|$\dfrac{1}{x}$|
|$\log_a x$|$\dfrac{1}{x \ln a}$|
|$x^x$|$x^x(\ln x + 1)$|
|$\ln f(x)$|$\dfrac{f'(x)}{f(x)}$|

---

## 5. Hyperbolic Functions (B.Tech basics)

|Function|Derivative|
|---|---|
|$\sinh x$|$\cosh x$|
|$\cosh x$|$\sinh x$|
|$\tanh x$|$\text{sech}^2 x$|
|$\coth x$|$-\text{csch}^2 x$|
|$\text{sech},x$|$-\text{sech},x\tanh x$|
|$\text{csch},x$|$-\text{csch},x\coth x$|

**Inverse hyperbolic:**

|Function|Derivative|
|---|---|
|$\sinh^{-1}x$|$\dfrac{1}{\sqrt{x^2+1}}$|
|$\cosh^{-1}x$|$\dfrac{1}{\sqrt{x^2-1}}$|
|$\tanh^{-1}x$|$\dfrac{1}{1-x^2}$|

---

## 6. Class 12 Special Techniques

### 6.1 Logarithmic Differentiation

Used for $y = f(x)^{g(x)}$ or products/quotients of many factors: $$ \ln y = g(x)\ln f(x) \quad\Rightarrow\quad \frac{1}{y}\frac{dy}{dx} = g'(x)\ln f(x) + g(x)\frac{f'(x)}{f(x)} $$

### 6.2 Implicit Differentiation

Differentiate both sides w.r.t. $x$, treating $y$ as a function of $x$ (apply chain rule to every $y$ term), then solve for $\dfrac{dy}{dx}$.

Example: $x^2 + y^2 = r^2 \Rightarrow 2x + 2y\dfrac{dy}{dx} = 0 \Rightarrow \dfrac{dy}{dx} = -\dfrac{x}{y}$

### 6.3 Parametric Differentiation

If $x = f(t)$, $y = g(t)$: $$ \frac{dy}{dx} = \frac{dy/dt}{dx/dt} $$

### 6.4 Second-Order Derivative (Parametric)

$$ \frac{d^2y}{dx^2} = \frac{\dfrac{d}{dt}\left(\dfrac{dy}{dx}\right)}{\dfrac{dx}{dt}} $$

### 6.5 Derivative of Inverse Function

$$ \frac{dx}{dy} = \frac{1}{dy/dx} $$

### 6.6 Rolle's Theorem & Mean Value Theorem

- **Rolle's:** If $f$ continuous on $[a,b]$, differentiable on $(a,b)$, and $f(a)=f(b)$, then $\exists, c \in (a,b)$ s.t. $f'(c) = 0$
- **Lagrange's MVT:** $\exists, c \in (a,b)$ s.t. $$ f'(c) = \frac{f(b)-f(a)}{b-a} $$

---

## 7. Applications of Derivatives (Class 12)

|Concept|Formula/Idea|
|---|---|
|Slope of tangent|$m = \dfrac{dy}{dx}\Big\vert_{(x_0,y_0)}$|
|Tangent line|$y - y_0 = m(x-x_0)$|
|Normal line|$y - y_0 = -\dfrac{1}{m}(x-x_0)$|
|Rate of change|$\dfrac{dy}{dt} = \dfrac{dy}{dx}\cdot\dfrac{dx}{dt}$|
|Increasing function|$f'(x) > 0$|
|Decreasing function|$f'(x) < 0$|
|Critical points|$f'(x) = 0$ or undefined|
|2nd derivative test (max)|$f'(x_0)=0,\ f''(x_0) < 0$|
|2nd derivative test (min)|$f'(x_0)=0,\ f''(x_0) > 0$|
|Point of inflection|$f''(x_0) = 0$, sign changes|
|Approximation|$f(x+\Delta x) \approx f(x) + f'(x)\Delta x$|

---

## 8. L'Hôpital's Rule (Limits + Derivatives)

For $\dfrac{0}{0}$ or $\dfrac{\infty}{\infty}$ forms: $$ \lim_{x\to a}\frac{f(x)}{g(x)} = \lim_{x\to a}\frac{f'(x)}{g'(x)} $$

---

## 9. Higher-Order & Series (B.Tech Basics)

### 9.1 Leibniz Theorem (nth derivative of a product)

$$ (uv)^{(n)} = \sum_{k=0}^{n} \binom{n}{k} u^{(n-k)} v^{(k)} $$

### 9.2 Taylor Series

$$ f(x) = f(a) + f'(a)(x-a) + \frac{f''(a)}{2!}(x-a)^2 + \frac{f'''(a)}{3!}(x-a)^3 + \cdots $$

### 9.3 Maclaurin Series (Taylor series at $a=0$)

$$ f(x) = f(0) + f'(0)x + \frac{f''(0)}{2!}x^2 + \frac{f'''(0)}{3!}x^3 + \cdots $$

---

## 10. Partial Derivatives (Multivariable — B.Tech)

For $f(x,y)$: $$ \frac{\partial f}{\partial x} = \lim_{h\to 0}\frac{f(x+h,y)-f(x,y)}{h}, \qquad \frac{\partial f}{\partial y} = \lim_{h\to 0}\frac{f(x,y+h)-f(x,y)}{h} $$

**Second-order partials & Clairaut's Theorem:** $$ \frac{\partial^2 f}{\partial x^2},\quad \frac{\partial^2 f}{\partial y^2},\quad \frac{\partial^2 f}{\partial x,\partial y} = \frac{\partial^2 f}{\partial y,\partial x} $$

### 10.1 Total Derivative / Differential

$$ df = \frac{\partial f}{\partial x}dx + \frac{\partial f}{\partial y}dy $$

### 10.2 Chain Rule (Multivariable)

If $x = x(t)$, $y = y(t)$: $$ \frac{df}{dt} = \frac{\partial f}{\partial x}\frac{dx}{dt} + \frac{\partial f}{\partial y}\frac{dy}{dt} $$

### 10.3 Gradient

$$ \nabla f = \left(\frac{\partial f}{\partial x}, \frac{\partial f}{\partial y}, \frac{\partial f}{\partial z}\right) $$

### 10.4 Directional Derivative

$$ D_{\hat{u}}f = \nabla f \cdot \hat{u} $$

### 10.5 Jacobian (Vector-valued functions)

$$ J = \begin{bmatrix} \dfrac{\partial u}{\partial x} & \dfrac{\partial u}{\partial y} \[6pt] \dfrac{\partial v}{\partial x} & \dfrac{\partial v}{\partial y} \end{bmatrix} $$

### 10.6 Euler's Theorem (Homogeneous functions)

If $f(x,y)$ is homogeneous of degree $n$: $$ x\frac{\partial f}{\partial x} + y\frac{\partial f}{\partial y} = n f $$

### 10.7 Maxima/Minima (Two Variables)

Critical point: $f_x = 0,\ f_y = 0$. Let $D = f_{xx}f_{yy} - (f_{xy})^2$

- $D>0, f_{xx}>0$ → local min
- $D>0, f_{xx}<0$ → local max
- $D<0$ → saddle point
- $D=0$ → inconclusive

---

## 11. Vector Calculus Basics (B.Tech)

|Operator|Formula|
|---|---|
|Gradient|$\nabla f$|
|Divergence|$\nabla \cdot \vec{F} = \dfrac{\partial F_1}{\partial x}+\dfrac{\partial F_2}{\partial y}+\dfrac{\partial F_3}{\partial z}$|
|Curl|$\nabla \times \vec{F}$|
|Laplacian|$\nabla^2 f = \dfrac{\partial^2 f}{\partial x^2}+\dfrac{\partial^2 f}{\partial y^2}+\dfrac{\partial^2 f}{\partial z^2}$|

---

## 12. Quick Reference — Standard Substitutions (Trig)

|Expression|Substitute|
|---|---|
|$\sqrt{a^2 - x^2}$|$x = a\sin\theta$|
|$\sqrt{a^2 + x^2}$|$x = a\tan\theta$|
|$\sqrt{x^2 - a^2}$|$x = a\sec\theta$|

_(Useful when derivatives appear inside inverse trig forms.)_

---

## 13. Common Errors to Avoid

> [!warning] Watch out for:
> 
> - Forgetting chain rule when differentiating composite functions
> - Sign error in $\cos^{-1}x$, $\cot^{-1}x$, $\csc^{-1}x$ derivatives (all negative)
> - Not applying product/quotient rule correctly with implicit terms
> - Forgetting the $\ln a$ factor while differentiating $a^x$
> - Mixing partial derivative notation ($\partial$) with ordinary ($d$)