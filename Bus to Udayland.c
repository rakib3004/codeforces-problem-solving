#include<stdio.h>
int main()

{
    int i,flag=0,n;
    scanf("%d",&n);

    n=n*6;
    char a[n];
for(i=0;i<n;i++)
{
    scanf("%c",&a[i]);
}

for(i=0;i<n;i++)
{

  if(a[i]=='O'&&a[i+1]=='O')
  {
   flag=1;
   a[i]='+';
   a[i+1]='+';
   break;

  }







}
  if(flag==1)
  {
  printf("YES");
 for(i=0;i<n;i++)
 {

     printf("%c",a[i]);
 }
  }

  else

        printf("NO");



return 0;
}

