#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nn=0;
    cin >> nn;
    const int n=nn;
    int a[n]={0};
    for (int i = 0; i < nn; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    cout << a[0];
    return 0;
}