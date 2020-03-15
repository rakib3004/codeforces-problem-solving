

 #include<iostream>

 #include<algorithm>
using namespace std;
int main(){

      long long  int a,b,n;

cin   >>a>>b>>n;


  if(a%n)
  {

      a=a/n;
      a++;
  }
  else{

    a=a/n;
  }
  if(b%n)
  {


      b=b/n;
      b++;
  }

  else
  {

      b=b/n;
  }

  n=a*b;


cout << n;




return 0;


}
