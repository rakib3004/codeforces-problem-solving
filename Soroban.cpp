#include<bits/stdc++.h>
using namespace std;


/*void solution(){


int a,b,x,y;

cin>>a>>b>>x>>y;

int area1,area2,area3,area4;

area1= x*b;
area2= (a-x-1)*b;
area3 = y*a;
area4 = (b-y-1)*a;

int area;

area = max(max(area1,area2),max(area3,area4));
cout<<area<<endl;
}*/



int main()
{

  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  /*  int t;
    cin>>t;
    while(t--)
    {
solution();
    }
    return 0;*/
long long int n;

cin>>n;


if(n==0){
    cout<<"O-|-OOOO"<<endl;
    return 0;
}
if(n==1){
    cout<<"O-|O-OOO"<<endl;
    return 0;
}

int size1 = ceil(log10(n));
string s[size1];
string r="";

int i;
int d;

for(i=0;i<size1;i++){

    d=n%10;
if(d>=5){
    s[i]=s[i]+"-O";

}else{
    s[i]=s[i]+"O-";

}
s[i]=s[i]+"|";
d=d%5;
int k;
for(k=1;k<=d;k++){
s[i] = s[i]+"O";
}
s[i]=s[i]+"-";
for(k=d+1;k<=4;k++)
s[i] = s[i]+"O";

n=n/10;
}

for(i=0;i<size1;i++){
    cout<<s[i]<<endl;
}
if(n==1){
    cout<<"O-|O-OOO"<<endl;
}
return 0;
}
/*
    for(i=1;i<n-1;++i)
     {
         if(a[i]>a[i-1]&&a[i]>a[i+1])
             cnt++;

        else if(a[i]<a[i-1]&& a[i]<a[i+1])
            cnt++;
     }*/

