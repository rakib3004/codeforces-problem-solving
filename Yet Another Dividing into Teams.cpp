
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
            if(abs(a[i]-a[j])==1){
                flag=1;
                break;
            }
        }
    }
    if(flag){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
    }
    }
    return 0;
}
