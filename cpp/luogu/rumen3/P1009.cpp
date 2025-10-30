// 使用轻量大整数（基于进制 10000）的实现来计算阶乘之和：1! + 2! + ... + n!
// 说明：不依赖外部库，适合 OJ（如洛谷 P1009）。

#include <bits/stdc++.h>
using namespace std;

struct BigInt {
    // 低位在前，高位在后；每个元素存 0..base-1
    static const int base = 10000;    // 10^4
    static const int width = 4;       // 每个“位”输出宽度
    vector<int> d;

    BigInt(int v = 0) { *this = v; }

    BigInt& operator=(int v) {
        d.clear();
        if (v == 0) return *this; 
        while (v) {
            d.push_back(v % base);
            v /= base;
        }
        return *this;
    }

    bool isZero() const { return d.empty(); }

    void trim() {
        while (!d.empty() && d.back() == 0) d.pop_back();
    }

    // 加法：this += other
    BigInt& operator+=(const BigInt& other) {
        int n = max(d.size(), other.d.size());
        d.resize(n, 0);
        long long carry = 0;
        for (int i = 0; i < n; ++i) {
            long long sum = carry + d[i] + (i < (int)other.d.size() ? other.d[i] : 0);
            d[i] = (int)(sum % base);
            carry = sum / base;
        }
        if (carry) d.push_back((int)carry);
        return *this;
    }

    // 乘以小整数：this *= m（m >= 0）
    void mul_small(int m) {
        if (m == 0 || isZero()) { d.clear(); return; }
        if (m == 1) return;
        long long carry = 0;
        for (size_t i = 0; i < d.size(); ++i) {
            long long cur = carry + 1LL * d[i] * m;
            d[i] = (int)(cur % base);
            carry = cur / base;
        }
        while (carry) {
            d.push_back((int)(carry % base));
            carry /= base;
        }
    }

    friend ostream& operator<<(ostream& os, const BigInt& x) {
        if (x.d.empty()) { os << 0; return os; }
        os << x.d.back();
        for (int i = (int)x.d.size() - 2; i >= 0; --i) {
            os << setw(width) << setfill('0') << x.d[i];
        }
        return os;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    BigInt sum(0);
    BigInt cur(1); // 当前阶乘值，从 1! 开始逐步乘上 i
    for (int i = 1; i <= n; ++i) {
        cur.mul_small(i);  // cur = cur * i => i!
        sum += cur;        // sum += i!
    }

    cout << sum << '\n';
    return 0;
}