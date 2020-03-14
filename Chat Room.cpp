 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j=0;
int    flag=0;
   char a[1456];
   char h[5]={'h','e','l','l','o'} ;
   scanf("%s",a);

   int n=strlen(a);

   for(i=0;i<n;i++)
   {
         if(a[i]==h[j])
         {


             flag++;
               j++;
               if(flag==5)
               {

                   break;
               }
         }


   }

   if(flag==5)
   {

       printf("YES");
   }
   else

   {
       printf("NO");
   }

    return 0;

}


