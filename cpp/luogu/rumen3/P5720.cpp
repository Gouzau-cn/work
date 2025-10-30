#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a=0;
    int b=1;
    cin>>a;
    while (a!=1)
    {
        a/=2;
        b++;
    }
    cout << b;
    return 0;
}