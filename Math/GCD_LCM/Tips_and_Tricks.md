# 🧠 Math Tips & Tricks - Enhanced Guide

## 📚 Table of Contents

- [Core Properties](#core-properties)
- [Advanced Techniques](#advanced-techniques)
- [Problem-Solving Strategies](#problem-solving-strategies)
- [Professional Insights](#professional-insights)
- [Golden Principles](#golden-principles)

---

## 🔥 Core Properties

### GCD Fundamentals

- **gcd(x, y) = gcd(x, y − kx)** for any integer k _(invariant under linear combination)_
- **gcd(a, b) = gcd(b, a mod b)** _(Euclid's algorithm core)_
- If **a divides b** ⇒ **gcd(a, b) = |a|**
- **gcd(a, b) = gcd(|a|, |b|)**; absolute values are safe to take
- If **a and b are coprime** ⇒ **gcd(a, b) = 1** and **lcm(a, b) = |ab|**

### LCM Fundamentals

- **Key relation**: **|a·b| = gcd(a, b) · lcm(a, b)**
- **lcm(a, b, c, …)** can be reduced sequentially: **L = lcm(a, lcm(b, lcm(c, …)))**

### Special Cases

- **gcd(a, 0) = |a|** and **lcm(a, 0) = 0**
- **gcd(a, b) = gcd(a − b, b)**; in general, operations that preserve common divisors are valid

---

## 🚀 Advanced Techniques

### 1. GCD Invariance Property

- **gcd(a, b) = gcd(a, b − a)** and symmetric forms
- **Helps reduce expressions** like `gcd(a, n − 1 − a)` to `gcd(a, n − 1)`

### 2. Coprimality (gcd = 1)

- If **gcd(x, y) = 1**, then x and y are **coprime**
- Often ensures **uniqueness** or **coverage** in modular arithmetic
- Useful for **modular inverses** and generating **complete residue systems**

### 3. Modulo Symmetry

- If **a and n are coprime**, then the set **{a, 2a, 3a, …, (n − 1)a} mod n** is a permutation of **{1, 2, …, n − 1}**
- **Core trick** behind many modular permutation problems

### 4. Work With n − 1 Instead of n

- When indices run **0..n−1**, **n−1** often becomes the key divisor
- **Example**: reduce `gcd(a, n − 1 − a)` to `gcd(a, n − 1)`

### 5. Using GCD for Constructions

- To cover **all residues mod n** with step s, require **gcd(s, n) = 1**
- If **gcd(s, n) ≠ 1**, you only cover a **fraction of residues**

---

## 🎯 Problem-Solving Strategies

### 6. Reduction Habit in Number Theory

**Always try to reduce using:**

- **gcd(x, y) = gcd(x, y % x)**
- **Symmetry of a % n**
- **Factorization of n**

### 7. Check Small Cases First

- Test **n = 2, 3, 4, 5…** to observe patterns before generalization
- **Pattern recognition** is key to mathematical intuition

### 8. Systematic Approach

1. **Identify** the mathematical structure
2. **Simplify** using known properties
3. **Transform** into manageable forms
4. **Verify** with small test cases

---

## 💡 Professional Insights

### Key Mathematical Insights:

#### 1. **GCD Shifting Trick**

- **`gcd(a, n - 1 - a) = gcd(a, n - 1)`**
- **Reason**: because `n - 1 - a` differs from `n - 1` by `-a`, and GCD is invariant under adding/subtracting multiples.

#### 2. **Choosing Values Carefully**

- Sometimes you don't need the **exact numbers**; you only need the **gcd relationship**.
- Always look for ways to transform **`gcd(x, y)`** into **`gcd(x, something simpler)`**.

#### 3. **Symmetry Recognition**

- Expressions like **`(a, n-1-a)`** are often symmetric around **`(n-1)/2`**.
- Such symmetry can **simplify analysis** significantly.

#### 4. **Avoid Brute Force**

- Instead of brute forcing **`gcd`** for each candidate, use **number theory properties** to reduce complexity.

---

## ⭐ Golden Principles

### Primary Principle

> **In modular arithmetic and constructive number theory, coprimality plus gcd tricks usually determine whether a construction works or fails.**

### Secondary Principles

1. **GCD Invariance**: Remember that **`gcd(a, b) = gcd(a, b ± ka)`**.
2. **Look for Structure**: Many problems hide patterns like **`n-1`**, **`n+1`**, or symmetry in expressions.
3. **Simplify Before Solving**: Try to transform **`gcd`** arguments into more manageable forms.
4. **Symmetry Observation**: If two numbers add up to a constant (like **`a + b = n - 1`**), then gcd properties can simplify.
5. **Mathematical Properties First**: Don't brute force gcds when **`n`** is large; always try to exploit mathematical properties first.

---

## 📖 Quick Reference

| Property       | Formula                       | Use Case                 |
| -------------- | ----------------------------- | ------------------------ | ------------------------ | -------------------- |
| GCD Invariance | `gcd(a, b) = gcd(a, b ± ka)`  | Simplifying expressions  |
| Euclidean      | `gcd(a, b) = gcd(b, a % b)`   | Algorithm implementation |
| Coprimality    | `gcd(a, b) = 1`               | Modular arithmetic       |
| LCM Relation   | `                             | a·b                      | = gcd(a, b) · lcm(a, b)` | Finding LCM from GCD |
| Symmetry       | `gcd(a, n-1-a) = gcd(a, n-1)` | Problem simplification   |

---
