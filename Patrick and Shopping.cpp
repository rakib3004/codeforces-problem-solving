
#include<iostream>
#include<string>
#include<algorithm>

#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{

     int d1,d2,d3;
     cin >>d1>>d2>>d3;

    int s[4]={0};

    s[0]=d1+d2+d3;

    s[1]=2*(d1+d2);
    s[2]=2*(d2+d3);
    s[3]=2*(d1+d3);

    sort(s,s+4);


    cout << s[0];



return 0;

}
