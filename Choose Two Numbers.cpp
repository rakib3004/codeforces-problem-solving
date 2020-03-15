
#include<bits/stdc++.h>
using namespace std;

int main(){



  int n,m;
  int i,j;
  cin>>n;

  int a[n];

  for(i=0;i<n;i++){
    cin>>a[i];
  }
  cin>>m;
     int b[m];
  for(j=0;j<m;j++){
        cin>>b[j];
  }
  sort(a,a+n);
  sort(b,b+m);
  cout<<a[n-1]<<" "<<b[m-1];

  return 0;

}
