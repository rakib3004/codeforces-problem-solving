
#include<bits/stdc++.h>
using    namespace std  ;
int  main()
{
    int t,i,n;
    cin>>t;

   while(t--){

    cin>>n;
      int   picture=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int mi = a[n-1];
    for(i=n-1;i>=0;i--){
    if(a[i]>mi){picture++;}
      mi = min(mi,a[i]) ;
    }
    cout<<picture<<endl;

}

return 0;
}
