
#include<bits/stdc++.h>
using    namespace std  ;
int  main()
{
    int n,i;
    cin>>n;

    string s;
    cin>>s;
    if(n%2)
    {
        cout<<"No";
        return 0;
    }
    int a=0,b=0,c=0;
    for(i=0; i<n; i++)
    {
        if(s[i]=='(')
        {
            c++;
        }
        else
        {
            c--;
        }
        if(c<-1)
        {
          cout<<"No";
          return 0;
        }
    }
    if(c){
        cout<<"No";
    }
    else
      cout<<"Yes";
    return 0;

}
