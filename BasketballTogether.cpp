

#include<bits/stdc++.h>
using namespace std;


void test()
{
   long long int n,d;
    cin>>n>>d;


    int array[n]={0};

    int i;


    for(i=0;i<n;i++){
        cin>>array[i];
    }

int teams=0,sum=0;


sort(array,array+n);


 for(i=n-1;i>=0;i--){

  teams=teams+(d/array[i]+1);

  if(teams>n){
    break;
  }

    sum++;

   }

   cout<<sum<<endl;
    return;

}
int main()
{


    int t;

   t=1;
    while(t--)
    {

        test();

    }


    return 0;

}
