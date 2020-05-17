
#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {

    int n;

    cin>>n;

    int a[n];
    int i,j;

    for(i=0;i<n;i++){

        cin>>a[i];

    }
int flag=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
          if(a[i]%2==0){
            flag=1;
            cout<<1<<endl;
            cout<<(i+1)<<endl;
            break;
          }
          else{
            if((a[i]+a[j])%2==0){
                    flag=1;
                cout<<2<<endl;
            cout<<(i+1)<<" "<<(j+1)<<endl;
            break;
            }
          }
        }
    }
    if(flag==0){
        cout<<-1<<endl;
    }

    }
    return 0;
}
