
#include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
int main()

{
int i;

    char a[1000];

    fgets(a,1000,stdin);
    int f=strlen(a);

    for(int i=0;i<f;i++)
    {

        if(a[f-3]==' ')
        {

            f--;
        }
        else

        {

            break;
        }

    }
    if(a[f-3]=='A'||a[f-3]=='e'||a[f-3]=='i'||a[f-3]=='o'||a[f-3]=='u'||a[f-3]=='y')
    {

        printf("YES");
    }

    else if(a[f-3]=='a'||a[f-3]=='E'||a[f-3]=='I'||a[f-3]=='O'||a[f-3]=='U'||a[f-3]=='Y')
    {
                printf("YES");


    }
    else

    {

        printf("NO");
    }

          return 0;
}
