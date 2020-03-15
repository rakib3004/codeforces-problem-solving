
#include<bits/stdc++.h>

using namespace std;
int main(){


    int n;
    string a;

     int m=0;
    cin>>n>>a;

 int i;


 for(i=0;i<n;i+=2){

   if((a[i]=='a'&&a[i+1]=='b')||(a[i]=='b'&&a[i+1]=='a')) {

    continue;
   }
   else if(a[i]=='a'&&a[i+1]=='a') {
          m++;
          a[i+1]='b';
   }
   else if(a[i]=='b'&&a[i+1]=='b') {
          m++;
          a[i]='a';
   }
 }
 cout<<m<<endl;
 cout<<a;
}
