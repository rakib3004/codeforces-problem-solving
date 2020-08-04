#include<bits/stdc++.h>
using namespace std;



int main()
{

int m,n;


cin>>n>>m;

int a[n],b[m];


int i;


for(i=0;i<n;i++){

    cin>>a[i];
}
for(i=0;i<m;i++){

    cin>>b[i];
}
int p = 1100;
for(i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]==b[j]){
            p = min(p,a[i]);
        }
    }
}

sort(a,a+n);
sort(b,b+m);

int q= (a[0]*10)+b[0];
int r =  (b[0]*10)+a[0];

q = min(q,r);
cout<<min(p,q);

return 0;


}






