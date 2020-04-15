#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{

 
    int n,m;
    int flag = 0;
    cin>>n>>m;
 
    int d = n/m;
 
    int e = n + d;
    int temp = e;
 
    for(int i=n+1;i<=temp;i++)
    {
        if(i%m == 0)
        {
            temp++;
            e++;
        }
    }
 
    cout<<e<<endl;
 

}