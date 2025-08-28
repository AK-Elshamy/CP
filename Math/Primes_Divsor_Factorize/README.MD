
# 📘  Primes, Divisors, GCD & LCM (for Competitive Programming)

---

## 🔹 1. Prime Numbers

* **Definition**: Number > 1 divisible only by 1 and itself.
* **Check primality**:

  * Trial division up to √n. Complexity: O(√n).
  * Sieve of Eratosthenes: O(n log log n) to generate primes up to n.

**Tips**

* Precompute primes with sieve when constraints ≤ 10^7.
* For very large n (\~10^12), use trial division with primes up to √n.
* Remember: all primes > 3 are of form $6k ± 1$.

---

## 🔹 2. Prime Factorization

If:

$$
n = p_1^{a_1} \times p_2^{a_2} \times \dots \times p_k^{a_k}
$$

You can compute:

1. **Number of divisors**

$$
d(n) = (a_1+1)(a_2+1)\dots(a_k+1)
$$

2. **Sum of divisors**

$$
\sigma(n) = \frac{p_1^{a_1+1}-1}{p_1-1} \times \dots \times \frac{p_k^{a_k+1}-1}{p_k-1}
$$

3. **Product of divisors**

$$
P(n) = n^{d(n)/2}
$$

**Tips**

* Use factorization only when n ≤ 10^6–10^7.
* For bigger numbers, switch to gcd-based methods.

---

## 🔹 3. GCD

* **Definition**: greatest common divisor.
* **Euclidean Algorithm**:

$$
gcd(a,b) = gcd(b, a \bmod b)
$$

Time: O(log min(a,b)).

* **Factorization view**:

$$
gcd(a,b) = \prod p_i^{\min(x_i,y_i)}
$$

**Tricks**

* gcd(a,0) = a.
* gcd works pairwise: gcd(a,b,c) = gcd(gcd(a,b),c).
* If gcd(a,b)=1 → they are coprime.

---

## 🔹 4. LCM

* **Definition**: least common multiple.
* **Relation**:

$$
lcm(a,b) = \frac{a \times b}{gcd(a,b)}
$$

* **Factorization view**:

$$
lcm(a,b) = \prod p_i^{\max(x_i,y_i)}
$$

**Tips**

* Use safe formula:

$$
lcm(a,b) = (a / gcd(a,b)) \times b
$$

(to avoid overflow).

---

## 🔹 5. Divisors and GCD

**Key Fact**:

$$
\text{Number of common divisors of } a,b = d(gcd(a,b))
$$

Example:
a=84, b=60 → gcd=12 → divisors(12)={1,2,3,4,6,12} → count=6.

---

## 🔹 6. Connections & Applications

* **Fractions**: simplify $\frac{a}{b}$ using gcd.
* **Synchronization**: repeat cycle = lcm(period1, period2).
* **Common divisors**: reduce to gcd then count divisors.
* **Coprimes**: if gcd=1 → lcm = a×b.
* **LCM of many numbers**: lcm(lcm(a,b),c).

---

## 🔹 7. Competition Tricks

1. **Precomputation**

   * Use sieve + smallest prime factor (spf) array → O(log n) factorization queries.

2. **Big constraints**

   * Avoid enumerating divisors for large n. Work with gcd instead.

3. **Patterns**

   * If problem is about “repetition / alignment” → lcm.
   * If about “simplification / commonality” → gcd.

4. **Number theory shortcuts**

   * Product of divisors = $n^{d(n)/2}$.
   * Sum of gcd(i,n) for i=1..n = $\sum_{d|n} d \cdot φ(n/d)$ (advanced, Euler’s totient).

5. **Modular math with gcd/lcm**

   * To solve equations like ax ≡ b (mod n), gcd helps decide solvability.

---

## 🔹 8. Practice Mindset

* Always check constraints → decide between sieve / trial division / gcd.
* Think: “Is this problem asking about **common** things (→ gcd) or **alignment** (→ lcm)?”
* Reduce problem size: factorization only when feasible, otherwise use gcd-based properties.
* Write helper functions: `gcd(a,b)`, `lcm(a,b)`, `divisors(n)`, `prime_factorize(n)` → reuse everywhere.

---

