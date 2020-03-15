
#include<iostream>
#include<algorithm>
#define lx  long long int
using namespace std;

int main()

{



  lx x,y,z;

 lx p=0,s,k;
  cin >>x >> y>> z;

         s=(x/z)+ (y/z);

         lx a,b;
         a=x%z;
         b=y%z;

        k=(x%z)+ (y%z);


        if(k>=z)
        {

            s++;
          p=std::max(a,b);


          p=z-p;


        }



    cout << s<<" " << p;




     return 0;
}




