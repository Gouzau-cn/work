#include <iostream>
using namespace std;
int main()
{
    int n;
    std::cin>>n;
    int a[n]{0};
    int b[n]{0};
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int g=0;
        for (int j = 0; j < i; j++)
        {
            if (a[i]>a[j])
            {
                g++;
            }
        }
        b[i]=g;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i]<<' ';
    }
    return 0;
}