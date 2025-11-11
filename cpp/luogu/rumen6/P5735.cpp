#include <iostream>
#include <cmath>
using namespace std;

double C(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double c1,c2,c3;
    c1=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    c2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    return c1+c2+c3;
}


int main ()
{
    double x1,x2,x3,y1,y2,y3;
    cin >> x1>>x2>>x3>>y1>>y2>>y3;
    double ans = C(x1,x2,x3,y1,y2,y3);
    cout.setf(ios::fixed);      
    cout.precision(2);          
    cout << ans; 
    return 0;
}