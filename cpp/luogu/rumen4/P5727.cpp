#include <iostream>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int a[1000]{0};
    int g=0;
    //a[g]=n;
    while (1)
    {
        a[g]=n;
        g++;
        if (a[g-1]==1)
        {
            break;
        }
        else if (n%2==1)
        {
            n=n*3+1;
        }else{
            n/=2;
        }
    }
    for (int i = g-1; i >=0 ; i--)
    {
        cout << a[i]<<' ';
    }
    
}