
#include<stdio.h>
  #include<stdlib.h>
  #include<string.h>

int main()

{

    char  a[106];

    scanf("%s",a);
    int i;
     int n=strlen(a);
  int b[60];

    int j=0;

    for(i=0;i<n;i+=2)
    {

        if(a[i]=='1'){


           b[i/2]=1;
//      j++;

        }

        else if(a[i]=='2')
        {
           b[i/2]=2;


//      j++;

        }
            else  if(a[i]=='3')
        {
           b[i/2]=3;


//      j++;

        }

        else
        {

            continue;
        }



    }
      int t;


        int  m=(n+1)/2;

    for(i=0;i<m;i++)
    {

        for(j=i+1;j<m;j++)
        {

            if(b[j]<b[i])
            {

                t=b[j];
                b[j]=b[i];
                b[i]=t;
            }
        }

    }

printf("%d",b[0]);
    for(i=1;i<m;i++)

    {



            printf("+%d",b[i]);

    }

    return 0;
}
