#include <bits/stdc++.h>
using namespace std;


const int B = 29;
const int N = 100010;
const int MOD = 1e9 + 7;
int bigMod(int a, int e)
{
    if (e == -1)
        e = MOD - 2;
    int ret = 1;
    while (e)
    {
        if (e & 1)
            ret = ret * 1LL * a % MOD;
        a = a * 1LL * a % MOD, e >>= 1;
    }
    return ret;
}
char t[N], p[N];
int _hash[N], inv[N];
inline int range(int l, int r)
{
    int ret = (_hash[r + 1] - _hash[l]) * 1LL * inv[l] % MOD;
    if (ret < 0)
        ret += MOD;
    return ret;
}
int main()
{
    inv[0] = 1, inv[1] = bigMod(B, -1);
    for (int i = 2; i < N; ++i)
    {
        inv[i] = inv[i - 1] * 1LL * inv[1] % MOD;
    }
    scanf("%s", t);
    int n = strlen(t);
    int power = 1;
    for (int i = 0; i < n; ++i)
    {
        _hash[i + 1] = (_hash[i] + power * 1LL * (t[i] - 'a' + 1)) % MOD;
        power = power * 1LL * B % MOD;
        // cout << _hash[i+1] << endl;
    }
    scanf("%s", p);
    int m = strlen(p);
    int pattern_hash = 0;
    power = 1;
    for (int i = 0; i < m; ++i)
    {
        pattern_hash = (pattern_hash + power * 1LL * (p[i] - 'a' + 1)) % MOD;
        power = power * 1LL * B % MOD;
    }
    for (int i = 0; i + m - 1 < n; ++i)
    {
        if (range(i, i + m - 1) == pattern_hash)
        {
            printf("Match found starting at position %d.\n", i);
        }
    }
    return 0;
}