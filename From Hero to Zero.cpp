
#include<iostream>
using namespace std;



int main()

         {
int t;


cin >>t;



long long int s[t];

 long long int i,j,p;

 long long int n,k;

for(i=0;i<t;i++)
{

    s[i]=1;


    cin >>n>>k;


    for(j=1; ;j++)
    {


             if(n==0)
    {

        break;
    }


       else if(n%k!=0)
        {
             p=n%k;

             s[i]=s[i]+p;
             n=n-p;

        }



        else
        {

            n=n/k;
            s[i]++;

        }





    }


}


for(i=0;i<t;i++)
{

   cout <<s[i]-1<<endl;

}



               return 0;
         }
