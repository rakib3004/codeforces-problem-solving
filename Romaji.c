
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
  char a[107];
  scanf("%s",&a);

  int i;
   int d= strlen(a);
  for(i=0;i<d; )
  {

      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='n')

      {

          i++;
      }


      else
      {

          if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')//||a[i+1]=='\0'superoman)
                    {


             i+=2;


          }
          else{
             printf("NO");

             return 0;

          }

      }

}

printf("YES");
        return 0;

        }
