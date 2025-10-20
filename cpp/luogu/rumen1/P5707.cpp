#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s ,v ,min ,h=0;
    h=7;
    
    
    cin >> s >> v;
    
    
    min = s/v;

    if(s%v!=0){min+=1;}
    
    min+=10;
    
    

    while (min>60)
    {
        min-=60;
        h-=1;
        
    }
    min=60-min;
    if (h<0){h+=24;}
    string H="";
    string M="";
    H = to_string(h);
    M = to_string(min);
    if (h<10){H='0'+H;}
    if (min<10){M='0'+M;}
    cout << H+':'<<M;
    return 0;
}