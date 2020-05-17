
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	int counter=1;
	while(n!=0)
	{
		if(n%2)
		{
			v.push_back(counter);
		}
		n=n/2;
		counter++;
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
}
