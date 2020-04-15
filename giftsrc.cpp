#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a;string s;
    cin>>n;
    while(n--)
    {   int x=0,y=0;
        cin>>a;
        cin>>s;
        for(int i=0;i<a;i++)
        {   if((s[i]=='L's[i]=='R')&&(s[i-1]!='L'&&s[i-1]!='R'))
           {
            if(s[i]=='L')
              x=x-1;
            else if(s[i]=='R')
              x=x+1;
            }
            else if((s[i]=='U's[i]=='D')&&(s[i-1]!='U'&&s[i-1]!='D'))
            {
             if(s[i]=='D')
              y=y-1;
            else if(s[i]=='U')
              y=y+1;
            }




        }
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}