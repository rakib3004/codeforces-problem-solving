

 #include<iostream>
 #include<string>
 #include<algorithm>
using namespace std;
int main(){


    int n;

    cin >>n;

    int a[n],b[n];

    int i;

    for(i=0;i<n;i++)
    {


        cin >>a[i];
        b[i]=(a[i]/2);
    }

 for(i=0;i<n;i++)
    {


                cout<<b[i]<<endl;
    }



return 0;

}
