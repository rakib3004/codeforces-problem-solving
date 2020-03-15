
#include<stdio.h>

#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{

int a,b;



cin>>a>>b;


int c=abs(a-b);

if(a==0&&b==0)
{

    cout<<"NO";


}



  else if(c>1)
{

    cout<<"NO";
}


else

{


    cout<<"YES";
}


return 0;

}






