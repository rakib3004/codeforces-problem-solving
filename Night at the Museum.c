#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main()

{

    int i;
    char  opp[105];

    int n;
    int k;
    scanf("%s",&opp);
    int count=0;
    n=strlen(opp);
    k=abs(opp[0]-'a');
    if(k>13)
    {

        k=26-k;
    }

    count=count+k;

    for(i=1;i<n;i++)
    {
      k=abs(opp[i]- opp[i-1]);

       if(k>13)
    {

        k=26-k;
    }

    count=count+k;


    }

    printf("%d",count);

    return 0;
}


