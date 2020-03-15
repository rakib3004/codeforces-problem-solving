
#include<bits/stdc++.h>
using namespace std;
int main()
{
int z=0,e=0,r=0,o=0,n=0;
int p;
cin>>p;
string s;
cin>>s;
int q=s.size();
int iterator ;
for(iterator=0;iterator<q;iterator++){
    if(s[iterator]=='z'){
        z++;
    }

    else if(s[iterator]=='n'){
        n++;
    }
}

//int minimum_one=0;
//int minimum_two=0;
//int minimum_three=0;
//int minimum_four=0;
//
//minimum_one = min(o,e);
//minimum_one== min(minimum_one,n);
//o=o-minimum_one;
//e=e-minimum_one;
//minimum_two=min(o,e);
//minimum_three = min(z,r);
//minimum_four=min(minimum_two,minimum_three);

for(iterator=0;iterator<n;iterator++){
    cout<<1<<" ";
}
for(iterator=0;iterator<z;iterator++){
    cout<<0<<" ";
}

return 0;
}

