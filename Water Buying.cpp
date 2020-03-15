

#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
int main()


{


   long long int i,n;
    scanf("%lld",&n);
  long long  int a[n],b[n],c[n],d[n];

    for(i=0; i<n; i++)
    {

        scanf("%lld%lld%lldd",&a[i],&b[i],&c[i]);

    }

    for(i=0; i<n; i++)
    {

        if(a[i]==1)

        {
            printf("%lld\n",b[i]);
        }


        else if(b[i]<=c[i]/2)
        {

            printf("%lld\n",a[i]*b[i]);
        }

        else

        {

            d[i]=(a[i]/2)*c[i];
            d[i]+= (a[i]%2)*b[i];
            printf("%lld\n",d[i]);
        }
    }


    return 0;
}
