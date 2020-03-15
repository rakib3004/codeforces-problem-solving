
#include<stdio.h>
  #include<iostream>
  #include<string>
   #include<cstdio>
   #include<cmath>
   #include<algorithm>

#include<string.h>


using namespace std;

int main()

{






int n;

cin>>n;
int m;

int i;

if(n==2)
{

    cout<<1<<endl<<1;
}
 else if(n==3)
{

    cout<<2<<endl<<"1 3";
}





 else
 {
     cout<<n<<endl;
      if(n%2==0)
    {

     m=n-1;



    }

    else
    {


        m=n;

        n--;
    }




   for(i=m;i>=1;i-=2)
{

   cout<<i<<" ";

}
     for(i=n;i>=1;i-=2)
{

    cout<<i<<" ";


}


 }


    return 0;

}
