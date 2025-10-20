#include <iostream>
using namespace std;
int main()
{
    int m,t,s;
    m=t=s=0;
    cin>>m>>t>>s;
    if(m*t-s>=0)
    {
        cout << (m*t-s)/t;
    }else {
        cout << 0;
    }
    return 0;
}