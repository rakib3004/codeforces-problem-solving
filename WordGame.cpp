#include<bits/stdc++.h>
using namespace std;
string word[4][1005];
 
 
void test()
{
 
int n;
 
cin>>n;
 
 
int i,j;
 
map<string,int>counter;
 
 
for(i=0;i<3;i++){
 
for(j=0;j<n;j++){
cin>>word[i][j];
counter[word[i][j]]++;
 
 
}
}
 
int points=0;
 
 
for(i=0;i<3;i++){
points=0;
 
for(j=0;j<n;j++){
if(counter[word[i][j]]==2){
points=points+1;
}
if(counter[word[i][j]]==1){
points=points+3;
}
 
}
cout<<points<<" ";
 
}
 
cout<<endl;
    return;
 
}
int main(){
 
    int t;
 
   cin>>t;
    while(t--)
    {
 
        test();
 
    }
 
 
    return 0;
 
}
