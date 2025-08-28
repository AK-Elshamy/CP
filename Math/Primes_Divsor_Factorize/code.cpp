#include <bits/stdc++.h>
using namespace std;

// --------------------- Prime Check ---------------------
bool isPrime(long long n)
{
    if (n < 2)
        return false;
    if (n % 2 == 0)
        return n == 2;
    for (long long i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

// --------------------- Sieve (and SPF) ---------------------
const int N = 1000000; // limit
int spf[N + 1];        // smallest prime factor
vector<int> primes;

void sieve()
{
    for (int i = 2; i <= N; i++)
        spf[i] = i;
    for (int i = 2; i * i <= N; i++)
    {
        if (spf[i] == i)
        { // prime
            primes.push_back(i);
            for (int j = i * i; j <= N; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
    for (int i = sqrt(N) + 1; i <= N; i++)
        if (spf[i] == i)
            primes.push_back(i);
}

// --------------------- Factorization ---------------------
vector<int> primeFactorize(int n)
{
    vector<int> factors;
    while (n > 1)
    {
        factors.push_back(spf[n]);
        n /= spf[n];
    }
    return factors;
}

// --------------------- Divisors ---------------------
vector<long long> divisors(long long n)
{
    vector<long long> d;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (i != n / i)
                d.push_back(n / i);
        }
    }
    sort(d.begin(), d.end());
    return d;
}

// --------------------- Common Divisors ---------------------
int commonDivisors(long long a, long long b)
{
    long long g = gcd(a, b);
    auto d = divisors(g);
    return (int)d.size();
}
