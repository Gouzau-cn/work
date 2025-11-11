#include <iostream>
using namespace std;
int main()
{
    int b,e;
    cin >> b >>e;
    int n=0;
    int nn[(e-b)/4]{0};

    for (int i = b; i <= e; i++)
    {
        if (i%4==0&&i%100!=0||i%400==0)
        {
            nn[n]=i;
            n++;
        }
    }
    cout << n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << nn[i]<<' ';
    }
    return 0;
}