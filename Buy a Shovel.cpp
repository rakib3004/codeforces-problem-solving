
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{


int k,r,p;

cin  >>k>>r;


int i;
for(i=1; ;i++)
{
  p=k*i;

  if(p%10==0||((p-r)%10==0))
  {

      printf("%d",i);
      return 0;
  }

}

return 0;

}
