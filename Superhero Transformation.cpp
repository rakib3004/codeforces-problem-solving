
#include<stdio.h>
#include<string.h>

int main(){

long long i, count=0, f, g;
char a[10000], b[10000];
gets(a);
gets(b);
f=strlen(a);
g=strlen(b);
if(f!=g){


        printf("No");
return 0;
}

for(i=0; i<f; i++){

if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u') )
   count++;
else if((a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u') && (b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u') )
    count++;

}
if(count==f)
{
    printf("YES");
}

else
{

    printf("NO");

}
return 0;


}
