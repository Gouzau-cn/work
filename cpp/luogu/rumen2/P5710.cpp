#include <iostream>
using namespace std;
int main()
{
    int a=0;
    bool b =false;
    bool c =false;
    cin>>a;
    if (a%2==0)
    {
        b=true;
    }
    if (a>4&&a<=12)
    {
        c=true;
    }
    if (b&&c)
    {
        cout << "1 ";
    }else{cout << "0 ";}
    if (b||c)
    {
        cout << "1 ";
    }else cout <<"0 ";
    if((!b)&&c||b&&(!c))
        cout << "1 ";
    else cout <<"0 ";
    if (!b&&!c)
    {
        cout << "1";
    }else cout << "0";
    return 0;
}