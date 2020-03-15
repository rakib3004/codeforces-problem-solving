

 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;
int main(){



  int n,m,count=0;

  cin >>n>>m;

  int a[n],b[n],c[m+1]={0};

  int i,j;

  for(i=0;i<n;i++)
  {


      cin >>a[i]>>b[i];

      for(j=a[i];j<=b[i];j++)
      {

        c[j]++;
      }

  }



   for(i=1;i<=m;i++)

  {



      if(c[i]==0)
      {

          count++;
      }
  }


  cout <<count<<endl;


  for(i=1;i<=m;i++)

  {

      if(c[i]==0)
      {

          cout<<i<<" ";
      }

  }


return 0;

}
