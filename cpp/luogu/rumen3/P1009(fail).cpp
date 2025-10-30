#include <bits/stdc++.h>//处理超大数字，大数字库
using namespace std;
long long J(long long a)
{
    if(a==1){return 1;}
        
    return a*J(a-1);
}
int main()
{
    long long s=0;
    int n=0;
    cin >> n;
    for (long long i = 1; i <= n; i++)
    {
        s+=J(i);
    }
    cout << s;
} 