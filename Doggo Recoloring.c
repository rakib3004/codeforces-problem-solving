
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
int n;
       scanf("%d",&n);

char a[n];

scanf("%s",a);
int i,j;
    int f=1;
for(i=0;i<n;i++)
{

    for(j=i+1;j<n;j++)
    {

        if(a[i]==a[j])

        {
            f=1;
            printf("Yes");
            return 0;
        }
        else

            {
              f=0;
            }

    }
}
         if(f){            printf("Yes");
}
            else
      printf("No");
        return 0;

        }
s
