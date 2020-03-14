#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
int main()

{

   int S=0,F=0,s,v1,v2,t1,t2;
      scanf("%d%d%d%d%d",&s,&v1,&v2,&t1,&t2);

      F=(s*v1)+(t1*2);
      S=(s*v2)+(t2*2);

      if(F<S)
      {
        printf("First");

      }
      else if(F>S)
      {
        printf("Second");

      }
   else
      {
        printf("Friendship");

      }

    return 0;



}

