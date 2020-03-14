#include<stdio.h>
#include<string.h>

int main()

{
 int i,count=0;

char art[43434];

scanf("%s",&art);

int d=strlen(art);

for(i=0;i<d;i++)
{
       if(art[i]=='a'||art[i]=='e'||art[i]=='i'||art[i]=='o'||art[i]=='u')
       {

           count++;
       }

    else   if(art[i]<='9'&&art[i]>='0')
    {

        if((int)art[i]%2!=0)

        {
            count++;
        }
    }

       else

        {


            continue;

       }

}

 printf("%d",count) ;

    return 0;



}
