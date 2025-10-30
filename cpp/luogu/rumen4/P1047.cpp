#include <iostream>
using namespace std;
int main()
{
    int n=0;
    int k=0;
    int kk=0;
    cin>> n>>k;
    short a[n+1]={0};
    int b[k][2]{0};
    for (int i = 0; i < k; i++)
    {
        cin >> b[i][0]>>b[i][1];
    }

    for (int i = 0; i < k; i++)
        for (int j = (b[i][0]); j <= (b[i][1]); j++)
            a[j]=1;
    
        
    
    for (int i = 0; i <= n; i++)
    {
        if (a[i]==0)
        {
           kk++;
        }
    }
    cout << kk;
    return 0;
}