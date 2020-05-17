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
int n;

cin>>n;

int a[n];
int i;
for(i=0;i<n;i++){

    cin>>a[i];
}

int x=0;

int cnt=0;


for(i=1;i<n-1;++i)
     {
         if(a[i]>a[i-1]&&a[i]>a[i+1])
             cnt++;

        else if(a[i]<a[i-1]&& a[i]<a[i+1])
            cnt++;
     }

cout<<cnt;

}
/*
    for(i=1;i<n-1;++i)
     {
         if(a[i]>a[i-1]&&a[i]>a[i+1])
             cnt++;

        else if(a[i]<a[i-1]&& a[i]<a[i+1])
            cnt++;
     }*/

