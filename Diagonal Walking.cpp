
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
int n;
scanf("%d",&n);
    int sum=0;
char a[n];
scanf("%s",a);

int i,j;
for(i=0;i<n; )
{
 if((a[i]=='R'&&a[i+1]=='U')||(a[i]=='U'&&a[i+1]=='R'))
 {

        sum++;
         i=i+2;
 }
 else
 {

     sum++;
     i++;
 }

}
     printf("%d",sum);


  return 0;
}
