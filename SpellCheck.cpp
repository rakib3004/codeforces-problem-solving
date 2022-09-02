#include<bits/stdc++.h>
using namespace std;


void test()
{

    int n;

    cin>>n;

    string name;

    cin>>name;

    string expectedName = "Timur";


    sort(name.begin(),name.end());
    sort(expectedName.begin(),expectedName.end());

    if(name==expectedName){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";

    }




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
