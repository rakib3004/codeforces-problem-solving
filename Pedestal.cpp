#include<bits/stdc++.h>
using namespace std;


void test()
{

   int total,place;
   cin>>total;

   if(total%3==0){
        place=total/3;

    cout<<place<<" "<<place+1<<" "<<place-1<<endl;
   }

   else   if(total%3==1){
        place=total/3;

    cout<<place+1<<" "<<place+2<<" "<<place-2<<endl;
   }
 else{
    place=total/3;

    cout<<place+1<<" "<<place+2<<" "<<place-1<<endl;
 }
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
