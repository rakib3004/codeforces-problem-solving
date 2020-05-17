
#include<bits/stdc++.h>
using namespace std;


void solution(){

 int a,b,c;


 cin>>a>>b>>c;

 int stones = 0;

 int d= min(b,c/2);
 stones = 3*d;
 b= b-d;

 int e  = min(a,b/2);
 stones = stones+(3*e);
 cout<<stones<<endl;

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
