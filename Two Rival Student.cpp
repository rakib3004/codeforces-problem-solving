
#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,x,a,b;

  int t;
  cin>>t;

  while(t--){
    cin>>n>>x>>a>>b;

    n--;
    int c= abs(a-b)+x;
    int d=   min(c,n);
    cout<<d<<endl;

  }
  return 0;

}
