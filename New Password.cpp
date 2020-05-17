
#include<bits/stdc++.h>
using namespace std;
 int main(){
int i;
int n,k;

cin>>n>>k;

int a = n/k;
int b = n%k;
string aAlpha="",bAlpha="",mainAlpha="";
for(i=0;i<k;i++){
aAlpha = aAlpha+char(97+i);
}
for(i=0;i<a;i++){
    mainAlpha = mainAlpha+aAlpha;
}
for(i=0;i<b;i++){
mainAlpha = mainAlpha+char(97+i);
}
cout<<mainAlpha;

}
