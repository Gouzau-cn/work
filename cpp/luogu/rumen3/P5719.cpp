#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    int k=0;
    cin >> n >> k;
    const int nn=n;
    int a[nn]={0};
    int b=0;
    int c=0;
    int d=0;
    
    for ( int i = 1; i <= n; i++)
    {
        if(i%k==0)
        {
            a[b]=i;
            b++;
        }
        c+=i;
    }
    
    for (int i = 0; i < b; i++)
    {
        c-=a[i]; 
        d+=a[i];
    }
    cout.setf(ios::fixed);       
    cout.precision(1);
    cout <<(double)d/(double)b << ' ' <<(double)c/double(n-b);
    return 0;
}