
#include<stdio.h>
  #include<string.h>
int main()

{


    int i;
    char a[123];

    scanf("%s",a);
    int b;
    b=strlen(a);
    int count=0;

    for(i=0;i<b;i++)
    {

        if(a[i]=='a')
        {

          count++;
        }

}
if(count>(b/2))
{

    printf("%d",b);

    return 0;
}

else
{
   printf("%d",2*count-1);
    return 0;
}

return 0;

}

