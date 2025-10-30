#include <bits/stdc++.h>
using namespace std;
void A(int a)
{
    string b;
    if(a<10)
    {
        b="0"+to_string(a);
    }else b =to_string(a);
    cout << b;
}
int main()
{
    int a,n;
    a=n=1;
    cin >> n;
    
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
                A(a);a++;
        }
        cout <<endl;
    }

}