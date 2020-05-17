
#include<bits/stdc++.h>
using namespace std;

#define max 500
    int x[max],y[max];
    int a[max];





int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  /*  int t;
    cin>>t;
    while(t--)
    {
solution();
    }
    return 0;*/


    int n;

    cin>>n;

    int a[n],flag[n];

    int i,j;

    for(i=0;i<n;i++){
        cin>>a[i];
        flag[i]=1;
    }
    int indecator=0;
    int count=0;
 sort(a,a+n);
 for(i=1;i<n;i++){
    if(a[i]==a[i-1]){
        flag[i]=0;
    }
 }
 for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(flag[i]==1){
indecator=1;
                if(a[j]%a[i]==0){
                    flag[j]=0;
                }
            }
        }
        if(indecator){
            count++;
        }
        indecator=0;

 }
 if(flag[n-1]){
                count++;

 }

cout<<count;
}
/*void solution(){

int n,d;

cin>>n>>d;
int a[n];
int i;
for(i=0;i<n;i++){
    cin>>a[i];
}

if(n==1){
    cout<<a[0]<<endl;
}
else{

    for(i=1;i<n;i++){
        if(d>0){
                int p = min(a[i],(d/i));
         a[0] = a[0]+ p;
        d=d-p;
        }
        else{
            break;
        }
    }
    cout<<a[0]<<endl;
}*/
