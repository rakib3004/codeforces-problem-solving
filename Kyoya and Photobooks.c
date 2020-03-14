#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<math.h>

int main()

{
  char a[107];
  scanf("%s",&a);

  int i,counter=0;
   int length= strlen(a);
  for(i=0;i<=length;i++)
  {

      if(i==0||i==length)
    counter+=25;
    else
        counter+=24;

  }


  printf("%d",counter+length);
        return 0;

        }

