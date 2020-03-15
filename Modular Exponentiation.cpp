

     #include<iostream>
  #include<string>
  #include<algorithm>
  #include<math.h>

  #define lx   long long int
 using namespace std;
 int main()
{

  lx n,m;
       cin >> n>>m;
 lx i,k;

 i=pow(2,n) ;


    k=m%i;

       cout << k;


  return 0;

}
