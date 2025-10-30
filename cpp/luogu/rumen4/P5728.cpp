#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=0;
    int n=0;
    cin>>a;
    int b[a][3]{0};
    for (int i = 0; i < a; i++)
    {
        cin>>b[i][0]>>b[i][1]>>b[i][2];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i+1; j < a; j++)
        {
            if(abs(b[i][0]-b[j][0])<=5&&abs(b[i][1]-b[j][1])<=5&&abs(b[i][2]-b[j][2])<=5)
            {
                int u=0;
                int uu=0;
                for (int r = 0; r < 3; r++)
                {
                    u+=b[i][r];
                    uu+=b[j][r];
                }
                if(abs(u-uu)<=10)
                    n++;
            }
        }
    }
    cout << n;
}