#include<bits/stdc++.h>
using namespace std;


void test()
{

    long long int lineCount=0;


    long long    int n;


    cin>>n;

    string lineArray;

    long long int distance[n]= {0};

    cin>>lineArray;

    long long int i;

    for(i=0; i<n; i++)
    {
        if(lineArray[i]=='L')
        {
            distance[i]=i;
        }
        else
        {
            distance[i]=n-1-i;
        }
        lineCount+=distance[i];
    }
    sort(distance,distance+n);

    long long  int checkDissimilarity=0;
    for(i=0; i<n; i++)
    {
        checkDissimilarity= n-1-(2*distance[i]);

        if(checkDissimilarity>0)
        {
            lineCount+=checkDissimilarity;
        }
        cout<<lineCount<<" ";
    }


    cout<<endl;
    return;


}
int main()
{


    int t;

    cin>>t;
    while(t--)
    {

        test();

    }


    return 0;

}
