
#include<bits/stdc++.h>
using namespace std;

#define max 500
    int x[max],y[max];
    int a[max];


void solution(){

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
}

}
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


    int i;

    for(i=1;i<=n;i++){

        cin>>a[i];
    }

    int m;

    cin>>m;


for(i=1;i<=m;i++){

    cin>>x[i]>>y[i];

    if(x[i]>1){
a[x[i]-1] = a[x[i]-1] + (y[i]-1);

    }
    if(x[i]<n){


    a[x[i]+1] = a[x[i]+1] + (a[x[i]]-y[i]);

    }
    a[x[i]]=0;
}

    for(i=1;i<=n;i++){

        cout<<a[i]<<endl;
    }

}
