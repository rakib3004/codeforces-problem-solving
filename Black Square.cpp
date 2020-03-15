

 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;
int main(){

      long long  int a1,a2,a3,a4,sum=0;

cin   >>a1>>a2>>a3>>a4;

    string a;
    cin >> a;

  int g,i;

   g=a.size();

  for(i=0;i<g;i++)
  {

 if(a[i]=='1')
   {

      sum+=a1;
   }
   else  if(a[i]=='2')
   {

      sum+=a2;
   }
   else  if(a[i]=='3')
   {

      sum+=a3;
   }

   else  if(a[i]=='4')
   {

      sum+=a4;
   }


  }


     cout  <<sum;
return 0;


}
