#include<bits/stdc++.h>
using namespace std;


void test()
{
    int n;
    string a,b;
    cin>>n;
    cin>>a;
    cin>>b;

    int i=0;

    for(i=0;i<n;i++){
        if((a[i]=='R')&&(b[i]=='G'||b[i]=='B')){
            cout<<"NO"<<endl;
            return ;
        }
        swap(a[i],b[i]);
       if((a[i]=='R')&&(b[i]=='G'||b[i]=='B')){
            cout<<"NO"<<endl;
            return ;
        }
                swap(a[i],b[i]);

    }

                cout<<"YES"<<endl;

    return;

}
int main()
{


    int t;

   cin>>t;
    while(t--)
    {

        test();

    }


    return 0;

}
