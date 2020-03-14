#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
    int i,n;
    scanf("%d",&n);

    int c1=0,c2=0;
    int x[n],y[n];
        for(i=0;i<n;i++)
        {

            scanf("%d%d",&x[i],&y[i]);

            if(x[i]<0)
                c1++;
            else
                c2++;
        }

        if(c1==0||c1==1||c2==0||c2==1)

        {
            printf("Yes");
        }

        else
        {

            printf("No");
        }
        return 0;

        }

