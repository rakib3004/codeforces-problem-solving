

 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;
int main(){


string b[6]={"Power","Time","Space","Soul","Reality","Mind"};
string c[6]={"purple","green","blue","orange","red","yellow"};
       int d[6]={1,1,1,1,1,1};
     int n;
     cin >>n;


     string a[n];
     int i,j;

     for(i=0;i<n;i++)
     {


         cin >>a[i];

         for(j=0;j<6;j++)
         {

             if(a[i]==c[j])
             {

                 d[j]=0;
             }
         }
     }

cout <<6-n<<endl;
        for(i=0;i<6;i++)
        {

            if(d[i])
            {

                cout  << b[i]<<endl;
            }
        }



return 0;

}
