
#include<iostream>
#include<algorithm>
using namespace std;

int main()

{

   int i;

   string a;

   cin  >> a;

for(i=0;a[i]!='\0';i++)
{

  if(a[i]=='1'&&a[i+1]=='4'&&a[i+2]=='4')
  {

      i++;
      i++;
  }
  else  if(a[i]=='1'&&a[i+1]=='4')
  {

      i++;

  }

    else  if(a[i]=='1')
    {

        continue;
    }

    else
    {


        printf("NO");
        return 0;
    }

}



printf("YES");



     return 0;
}




