#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    int a,b,c,n;

cin>>a>>b>>c>>n;

int m1,m2,m3,m4;
    m1 = max(a,b);
    m2 = max(m1,c);

    m3 = (3*m2) - (a+b+c);
      n=n-m3;
      if(n%3!=0||n<0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;

      }
    }

return 0;

}

