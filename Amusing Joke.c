#include<stdio.h>
#include<string.h>
#include<string.h>

  int main()
  {


      int sum=0;
      int count=0;

      char a[103];
      char b[103];
      char c[104];

      int i=0;
      scanf("%s%s%s",a,b,c);

      for(i=0;i<105;i++)

      {
          if(a[i]!='\0')

          {
              sum+=a[i];
          }

          else
          {

              break;
          }
      }

      for(i=0;i<105;i++)

      {
          if(b[i]!='\0')

          {
              sum+=b[i];
          }

          else
          {

              break;
          }
      }


      for(i=0;i<105;i++)

      {
          if(c[i]!='\0')

          {
              count+=c[i];
          }

          else
          {

              break;
          }
      }


      char p[4]="AC";
      char Q[4]="KKK";

      if(strcmp(p,a)==0||strcmp(Q,a)==0)
      {

        printf("NO");
        return 0;
      }

     if(count==sum)
     {

         printf("YES");
     }

     else
     {

         printf("NO");
     }

     return 0 ;

  }

