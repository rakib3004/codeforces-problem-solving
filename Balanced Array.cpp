
#include<bits/stdc++.h>
using namespace std;


void solution(){

    int n;

    cin>>n;
    int aSum=0,bSum=0;
if(n%4==0){
        cout<<"YES"<<endl;
        int i;
        for(i=2;i<=n;i=i+2){
            cout<<i<<" ";
            aSum = aSum+i;
        }
        for(i=2;i<=n-2;i=i+2){
            cout<<i-1<<" ";
            bSum= bSum+(i-1);
        }
        cout<<aSum-bSum<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
solution();
    }
    return 0;
}
