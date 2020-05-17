
#include<bits/stdc++.h>
using namespace std;
int GCD(int n1,int n2)
{
    int i, gcd;



    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0){
            gcd = i;
            return i;
        }
    }


    return 0;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int LCM(int a,int b) {
    return (a*b)/gcd(a, b);
}


int main(){


int t;

cin>>t;
int i,j;

while(t--){

    int n;

    cin>>n;

cout<<1<<" "<<n-1<<endl;
}
return 0;
}
