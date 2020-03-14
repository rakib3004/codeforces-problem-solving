
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
 int l,r,a;
      scanf("%d%d%d",&l,&r,&a);
      int s=0;

      if(l==r)
      {

          s=(l+r)+a;
      }

      else if(l<r)
      {

          if(l+a>=r)

          {
              a=(l+a)-r;
              s=(2*r)+a;

          }
          else
          {

              s=2*(l+a);
          }
      }

      else
      {


          if(r+a>=l)
          {
              a=r+a-l;
               s=(2*l)+a;
          }

          else
          {

              s=2*(r+a);
          }
      }

      s=s-(s%2);

      printf("%d",s);
        return 0;

        }
