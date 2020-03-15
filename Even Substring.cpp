

 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;
int main(){

     string a;
    int i,n,counter=0;

    cin >>n>>a;

     for(i=0;i<n;i++)
     {



         if(a[i]%2==0)
         {

             counter+=i+1;
         }
     }

    cout <<counter;
return 0;

}
