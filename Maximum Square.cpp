
#include<bits/stdc++.h>
using namespace std;


void solution(){

    int n;

    cin>>n;
    int a[n];
int i;

    for(i=0;i<n;i++){

        cin>>a[i];

    }
sort(a,a+n);
int max1=0;

for(i=0;i<n;i++){

max1 = max(max1,min(a[i],n-i));

    }

cout<<max1<<endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
solution();
    }
    return 0;
}
