
#include<bits/stdc++.h>

using namespace std ;
int main()
{


  string a;

  cin>>a;

            int i,m=0,p=0;

  int k =a.size();

  for(i=0;i<k;i++){


    if(a[i]=='-') {
        m++;
    }
    else{
      p++;
    }
  }
  if(m==0||p==0){
  cout<<"YES";
   return 0;
  }

  if(m%p==0){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
    return 0;
}
