#include<bits/stdc++.h>

using namespace std ;
int main()
{


  int i,n;

  cin>>n;

 string s[n];
 int a[n],b[n];

 for(i=0;i<n;i++){

        cin>>s[i]>>a[i]>>b[i];

  }

for(i=0;i<n;i++){

        if(a[i]>=2400&&b[i]>a[i]){
            cout<<"YES";
            return 0;
        }

  }


    cout<<"NO";
    return 0;
}
