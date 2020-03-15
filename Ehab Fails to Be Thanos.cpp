

#include<iostream>
#include<algorithm>


using namespace std;

int main()


{

    int n;


    cin>>n;

    int i;


    n=n*2;
    int a[n];


    for(i=0;i<n;i++)
    {
       cin>>a[i];

    }
        int h=1;



        for(i=1;i<n;i++)

        {

            if(a[i-1]!=a[i])
            {

                h=0;
                break;
            }

        }


    if(h)
    {

        cout<<-1;


        return 0 ;


    }

    sort(a,a+n);


    for(i=0;i<n;i++)
    {

        cout<<a[i]<<" ";


    }
        return    0;



}
