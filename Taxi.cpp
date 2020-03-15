

 #include<iostream>

 #include<algorithm>
using namespace std;
int main(){




   int n;
         int sum=0;
   cin  >> n;

   int a[n],b[5]={0};

   int i;

   for(i=0;i<n;i++)
   {


       cin  >> a[i];

      b[a[i]]++;

   }


     sum+=b[4];
     sum+=(b[2]/2);

      if(b[3]>=b[1])
      {

          sum+=b[3];
          b[3]=0;
          b[1]=0;
      }

      else
      {
        sum+=b[3];
      b[1]=b[1]-b[3];


      }

      if((b[2]%2==1)&&b[1]!=0)

      {
          if(b[1]==1||b[1]==2)
          {


              sum++;
          }
          else

            {

              sum++;
          b[1]-=2;

          if(b[1]%4)
          {

              sum+=(b[1]/4);

              sum++;

          }
          else

          {
            sum+=(b[1]/4);


          }

            }



      }

      else if((b[2]%2==1)&&b[1]==0)
      {

        sum++;
      }
      else if((b[2]%2==0)&&b[1]!=0)
      {
          if(b[1]%4)
          {

              sum+=(b[1]/4);

              sum++;

          }
          else

          {
            sum+=(b[1]/4);


          }


      }




    cout <<sum;


return 0;


}
