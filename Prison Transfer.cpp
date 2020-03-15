
#include <bits/stdc++.h>
using namespace std;

const int N = 200100;

int n,t,c,a[N],array1[N],ans;

int main()
{

 cin>>n>>t>>c;
    for(int i=1;i<=n;i++)
      cin>>a[i];

    array1[n-c+2] = -1;

    for(int i=1;i<=n;i++)
        if(a[i]>t)
        {
            array1[i+1]++;
            array1[max(0,i-c+1)]--;
        }

    for(int i=1;i<=n;i++)
    {
        array1[i] += array1[i-1];
        if(array1[i]==0){
            ans++;
        }
    }

    cout<<ans;
}
