#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[11]={0};
    int u = 0;
    for (int i=123; i < 333; i++)
    {
        for (int g = 0; g < 11; g++)
        {
            a[g]=0;
        }
        
        u=0;
        a[i%10]=2;
        a[i/10%10]=2;
        a[i/100%10]=2;
        a[i*2%10]=2;
        a[i*2/10%10]=2;
        a[i*2/100%10]=2;
        a[i*3%10]=2;
        a[i*3/10%10]=2;
        a[i*3/100%10]=2;
        for (int g = 0; g < 11; g++)
        {
            u += a[g];
        }
        
        if(u==18&&a[0]==0){
            cout << i <<' '<<i*2<<' '<<i*3<<endl;
        }
    }
    //cout << u;
    return 0;
}