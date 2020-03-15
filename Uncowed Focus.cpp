

 #include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{


   double a,b,c,d,e;

  cin >> a >> b>>c>>d>>e;

  double n;

  cin >> n;

  int ans = 0;

  ans+=max(0.3*500, (500-2*a)-50*n);

  cin >> n;

  ans+=max(0.3*1000, (1000-4*b)-50*n);

  cin >> n;

  ans+=max(0.3*1500, (1500-6*c)-50*n);

  cin >> n;

  ans+=max(0.3*2000, (2000-8*d)-50*n);

  cin >> n;

  ans+=max(0.3*2500, (2500-10*e)-50*n);

  cin >> n;

  ans+=100*n;

  cin >> n;

  ans-=50*n;

  cout << ans;


           return 0;
}



