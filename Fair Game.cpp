
#include<bits/stdc++.h>
#define o long long int
using namespace std ;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }

    sort(a,a+n);
    int b[n]={0};

    int t=1;



    for(i=1;i<n;i++){

        if(a[i]!=a[i-1]) {

            t++;

        }


    }

    if((t&1)||(t>2)){
        cout<<"NO";
    }
    else{
            if(a[n/2]!=a[(n/2)-1])
      cout<<"YES"<<endl<<a[0]<<" "<<a[n-1];
    else{
               cout<<"NO";

    }
    }



    return 0;

}
