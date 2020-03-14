
#include<string.h>
#include<stdio.h>
int main()

{





int i,x=0,y=0,n;


scanf("%d",&n);

//fgets(a,n,stdin);
//printf("%s",a);
//scanf("%d",&n);
char a[n];
scanf("%s",&a);
for(i=0;i<n;i++)
{
    if(a[i]=='A')
    {

        x++;
    }


    else if (a[i]=='D')
    {

        y++;
    }

    else{
        continue;
    }
}

if(x>y)
{

    printf("Anton");
}

else if(x<y)
{

    printf("Danik");
}

else
{

    printf("Friendship");
}

return 0;
}

