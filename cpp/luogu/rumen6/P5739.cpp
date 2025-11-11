#include <iostream>
using namespace std;

int A(int a)
{
    if (a==1||a==0)
    {
        return 1;
    }
    return A(a-1)*a;
}

int main()
{
    int n=0;
    cin>> n;
    cout << A(n);
    return 0;
}