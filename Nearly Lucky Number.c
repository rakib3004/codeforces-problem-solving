#include<stdio.h>
#include<string.h>
int main()


{

    int i,ab,count=0;
         char a[400];
         scanf("%s400011",a);

         ab=strlen(a);
         for(i=0;i<ab;i++)

         {

           if(a[i]=='4'||a[i]=='7')
           {

               count++;
           }
         }

         if(count==4||count==7)
         {

             printf("YES");
         }


         else
         {
             printf("NO");
         }

         return 0;

}


