#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int m=1000000007;
    int n; 
    cin>>n;

    while(n--)
    {   int x=0;
        cin>>x;
        vector<int>y;
        for(int i=0;i<x;i++)
        {   int p=0;cin>>p;
            y.push_back(p);}

            sort(y.rbegin(),y.rend());
            long long int pro=0;
            for(int j=0;j<x;j++){
               if(y[j]-j<=0)
               pro=pro+0;
               else
               pro=pro+y[j]-j;

           }
           long long int xp=pro%m;
           cout<<xp<<"\n";
        }

    return 0;
}