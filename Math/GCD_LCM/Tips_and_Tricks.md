## 🧠 Math Tips & Tricks

- gcd(x, y) = gcd(x, y − kx) for any integer k (invariant under linear combination)
- gcd(a, b) = gcd(b, a mod b) (Euclid's algorithm core)
- If a divides b ⇒ gcd(a, b) = |a|
- gcd(a, b) = gcd(|a|, |b|); absolute values are safe to take
- If a and b are coprime ⇒ gcd(a, b) = 1 and lcm(a, b) = |ab|
- Key relation: |a·b| = gcd(a, b) · lcm(a, b)
- gcd(a, b, c, …) can be reduced sequentially: g = gcd(a, gcd(b, gcd(c, …)))
- lcm(a, b, c, …) can be reduced sequentially: L = lcm(a, lcm(b, lcm(c, …)))
- gcd(a, 0) = |a| and lcm(a, 0) = 0
- gcd(a, b) = gcd(a − b, b); in general, operations that preserve common divisors are valid

### 1. GCD Invariance Property

- gcd(a, b) = gcd(a, b − a) and symmetric forms
- Helps reduce expressions like gcd(a, n − 1 − a) to gcd(a, n − 1)

### 2. Coprimality (gcd = 1)

- If gcd(x, y) = 1, then x and y are coprime
- Often ensures uniqueness or coverage in modular arithmetic
- Useful for modular inverses and generating complete residue systems

### 3. Modulo Symmetry

- If a and n are coprime, then the set {a, 2a, 3a, …, (n − 1)a} mod n is a permutation of {1, 2, …, n − 1}
- Core trick behind many modular permutation problems

### 4. Work With n − 1 Instead of n

- When indices run 0..n−1, n−1 often becomes the key divisor
- Example: reduce gcd(a, n − 1 − a) to gcd(a, n − 1)

### 5. Using GCD for Constructions

- To cover all residues mod n with step s, require gcd(s, n) = 1
- If gcd(s, n) ≠ 1, you only cover a fraction of residues

### 6. Reduction Habit in Number Theory

- Always try to reduce using:
  - gcd(x, y) = gcd(x, y % x)
  - Symmetry of a % n
  - Factorization of n

### 7. Check Small Cases First

- Test n = 2, 3, 4, 5… to observe patterns before generalization

### Golden Principle

- In modular arithmetic and constructive number theory, coprimality plus gcd tricks usually determine whether a construction works or fails
