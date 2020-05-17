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
int i=0;
string nameConvention,reverseNameConvention,thisString="";
cin>>nameConvention;
reverseNameConvention = nameConvention;

int n = reverseNameConvention.length();

    // Swap character starting from two
    // corners
    for ( i = 0; i < n / 2; i++)
        swap(reverseNameConvention[i], reverseNameConvention[n - i - 1]);

        if(n%2==0){

            for(i=0;i<n/2;i++){
                thisString= thisString+reverseNameConvention[i]+nameConvention[i];

            }
        }
else{

     for(i=0;i<=n/2;i++){
            if(i==((n/2))){
                thisString= thisString+nameConvention[i];
            }

            else{
                                thisString= thisString+nameConvention[i]+reverseNameConvention[i];

            }

            }
}


 for (int i = 0; i < n / 2; i++)
        swap(thisString[i], thisString[n - i - 1]);

        cout<<thisString;
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

