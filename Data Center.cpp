
#include<bits/stdc++.h>
using namespace std;



int main()
{

int n,i;
cin>>n;

int a,b;
long long int minParameter=9000000000002;
 long long int evaluateParameter=0;
for(i=1;i<=n;i++){

    if(n%i==0){
        a=n/i;
        b=i;
        evaluateParameter = (a+b)*2;
        minParameter = min(minParameter,evaluateParameter);
    }
}

cout<<minParameter;
return 0 ;

}




