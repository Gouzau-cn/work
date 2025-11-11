#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    const int nn=n;
    const int mm=m;
    double r[nn]{0};
    int a[mm]={0};

    for (int i = 0; i < n; i++)
    {
        int a[m]={0};
        int o=0;
        for (int j = 0; j < m; j++)
        {
            cin>>a[j];
            o+=a[j];
        }
        sort(a,a+m);
        r[i]=(double)(o-a[0]-a[m-1])/(double)(m-2);
    }
    sort(r,r+n);

    double bb =r[n-1];
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << bb;
    
    return 0;
}