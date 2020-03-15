
#include<bits/stdc++.h>
using namespace std;

    int main(){

 int n,m;
 int i;
 map<string,string>Map;
 string name,command,ip;
   cin>>n>>m;
while(n--){
   cin>>name>>ip;
   ip=ip+';';
   Map[ip]=name;
}
while(m--){
    cin>>command>>ip;
    cout<<command<<" "<<ip<<" #"<<Map[ip]<<endl;;
}



}
