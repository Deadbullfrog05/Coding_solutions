#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int m=1000000007;
    int n;
    cin>>n;

    while(n--)
    {   int x=0,flag=0;
        cin>>x;
        vector<int>y;vector<int>pro;
        for(int i=0;i<x;i++)
        {   int p=0;cin>>p;
            y.push_back(p);}

            for(int j=0;j<x;j++){

               if(y[j]==1)
               pro.push_back(j);
               }
            for(int k=0;k<pro.size()-1;k++){
                if(pro[k+1]-pro[k]<6){
                flag=1;break;}

            }

            if(flag==1)
            cout<<"NO"<<"\n";
            else
            cout<<"YES"<<"\n";


           }
           return 0;
}