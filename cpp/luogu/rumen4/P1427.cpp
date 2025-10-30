#include <iostream>
using namespace std;
int main()
{
    int g=0;
    unsigned int a[100]{0};
    for ( int i = 0;; i++)
    {
        
        
        cin>>a[i];
        if (a[i]==0)
        {
            break;
        }
        g++;
    }
    for (int i = g-1; i>=0; i--)
    {
        cout << a[i]<< ' ';
    }
    
    
}