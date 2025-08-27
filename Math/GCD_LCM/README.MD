# GCD & LCM Basics for Competitive Programming

## 1. Definitions

- **GCD (Greatest Common Divisor):** Largest integer that divides both `a` and `b`.
- **LCM (Least Common Multiple):** Smallest positive integer divisible by both `a` and `b`.

**Relation:**

```
lcm(a, b) = (a / gcd(a, b)) * b
```

---

## 2. Euclidean Algorithm

Property:

```
gcd(a, b) = gcd(b, a % b)
```

### Example:

```
gcd(36, 28)
= gcd(28, 36 % 28)
= gcd(28, 8)
= gcd(8, 28 % 8)
= gcd(8, 4)
= gcd(4, 8 % 4)
= gcd(4, 0)
= 4
```

### Code (C++):

```cpp
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
```

**Complexity:** O(log(min(a, b))).

---

## 3. Extended Euclidean Algorithm

Finds `x, y` such that:

```
a*x + b*y = gcd(a, b)
```

### Code (C++):

```cpp
long long extgcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    long long x1, y1;
    long long g = extgcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}
```

### Example:

Solve `30x + 12y = gcd(30, 12)`

- gcd = 6
- Solution: x = -1, y = 3 (one of many solutions).

---

## 4. Applications

### 4.1 Linear Diophantine Equations

Equation: `a*x + b*y = c`

- Solution exists if `c % gcd(a, b) == 0`.
- Extended Euclid gives one solution, others can be generated.

### 4.2 Modular Inverse

We want `a^(-1) mod m`.

- Exists only if `gcd(a, m) = 1`.
- Solve `a*x + m*y = 1` → x is the inverse.

### Example:

Find inverse of 3 mod 7.

```
3*x ≡ 1 (mod 7)
```

Extended Euclid → x = 5.  
Check: 3\*5 = 15 ≡ 1 (mod 7). ✅

### 4.3 Chinese Remainder Theorem (CRT)

Solve:

```
x ≡ a1 (mod m1)
x ≡ a2 (mod m2)
```

- If m1, m2 are coprime → unique solution mod m1\*m2.
- Otherwise check with Extended Euclid.

---

## 5. Useful Identities & Tricks

- `gcd(a^m - 1, a^n - 1) = a^(gcd(m, n)) - 1`
- gcd of array: reduce with gcd.
- lcm of array: use lcm step by step.
- gcd(a, 0) = |a|.

---

## 6. Examples

### Example 1: gcd of array

```
arr = [12, 18, 30]
gcd(12, 18) = 6
gcd(6, 30) = 6
Answer = 6
```

### Example 2: lcm of array

```
arr = [4, 6, 8]
lcm(4, 6) = 12
lcm(12, 8) = 24
Answer = 24
```

### Example 3: Modular inverse

Find inverse of 10 mod 17.  
Extended Euclid → inverse = 12.  
Check: 10\*12 = 120 ≡ 1 (mod 17). ✅

---

## 7. Pitfalls

- Overflow in lcm → divide before multiply.
- Modular inverse doesn’t exist if gcd(a, m) ≠ 1.
- Always take gcd as positive.

---
