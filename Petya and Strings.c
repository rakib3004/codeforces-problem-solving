
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()


{
             char a[102];
             char b[102];

             int i;

             scanf("%s%s",&a,&b);

             int one=0,two=0;

             int d=strlen(a);
             for(i=0;i<d;i++)
             {

                 if(a[i]>=65&&a[i]<=90)
                 {

                     a[i]=a[i]+32;
                 }
             }
                          for(i=0;i<d;i++)
             {

                 if(b[i]>=65&&b[i]<=90)
                 {

                     b[i]=b[i]+32;
                 }
             }

//             for(i=0;i<d;i++)
//             {
//
//                 if(a[i]>b[i])
//                 {
//
//                     one+=(a[i]-b[i]);
//                 }
//
//                 else if(b[i]>a[i])
//
//                 {
//                     two+=(b[i]-a[i]);
//                 }
//
//                 else
//                 {
//
//                     continue;
//                 }
//             }

                 one=strcmp(a,b);
            printf("%d",one);

        return 0;

}
