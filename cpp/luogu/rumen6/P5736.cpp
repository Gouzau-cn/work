#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    int a[n]{0};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        bool gg=true;
        if(a[i]==1)
        {
            gg=false;
        }
        if (a[i]%2!=0||a[i]==2/*&&a[i]!=3*/)
        {
            /*
            if(a[i]==2)
            {
                cout << "2 ";
            }*/
            for (int g = 3; g <= sqrt(a[i]); g=g+2)
            {
                if (a[i]%g==0)
                {
                    gg=false;
                }   
            }
        }else
        {
            gg=false;
        }
        if (gg)
        {
            cout << a[i]<<' ';
        }
        
    }
    return 0;
}