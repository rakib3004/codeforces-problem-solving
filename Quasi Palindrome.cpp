
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
char a[100];
    int i,j;
scanf("%s",a);
int d=strlen(a);
        d--;
for(i=d;i>=0;i--)
{

   if(a[i]=='0')
   {

       d--;
   }
   else{

    break;
   }

}
if(d==-1)
{

    printf("YES");
      return 0;

}

else
{


    d++;
    d--;
}
     for(i=0,j=d;i<=d;i++,j--)

     {

        if(a[i]==a[j])

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
