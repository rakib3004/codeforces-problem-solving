

     #include<iostream>
     using namespace std;


     int main()
    {

       int i,j;

       int n,m;
          int count=0;
      cin   >> n >>m;

       for(i=0;i<1001;i++)
       {

           for(j=0;j<1001;j++)
           {
               if((i*i+j==n)&&(i+j*j==m))

               {

                count++;

               }
           }
       }



     cout << count;
      return 0;

    }
