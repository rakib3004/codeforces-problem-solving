
#include<stdio.h>

int main()

{

    int i,n;

    scanf("%d",&n);

    int count=0;

    char a[n+1];

    scanf("%s",&a);

    for(i=0;i<n-1;i++)
    {
          if(a[i]==a[i+1])

             {
             count++;

             }

    }

    printf("%d",count);

    return 0;
}
