 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;
int main(){


int n;

  cin  >>n;

 long long int r[n]={0},a,b,k;

 int  i,j;


  for(i=0;i<n;i++)
  {

    cin>>a>>b>>k;

 r[i]=(k/2)*(a-b);

        if(k%2)
        {
         r[i]+=a;


        }

        else
        {

            r[i]+=0;
        }

      }



      for(i=0;i<n;i++)
      {

          cout << r[i] <<endl;
      }

return 0;


}
