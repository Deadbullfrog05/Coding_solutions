#include <iostream>
#include <iomanip>
using namespace std;

int main()
{int X; float Y,p;
cin>>X>>Y;
if(X<=(Y-0.50) && X%5==0 ){
Y = (Y-X-0.50);cout<<fixed<<setprecision(2)<<Y;}
else
cout<<fixed<<setprecision(2)<<Y;// your code goes here
    return 0;
}