
#include<iostream>
using namespace std;

int main(){

  int t;
  string language;
    int n;
  cin>>t;
  while(t--){
      cin>>language;

      n = language.size();
         if(language[n-1]=='o'&&language[n-2]=='p'){
            cout<<"FILIPINO"<<endl;
         }
         else if(language[n-1]=='a'&&language[n-2]=='d'&&language[n-3]=='i'&&language[n-4]=='n'&&language[n-5]=='m'){
            cout<<"KOREAN"<<endl;
         }
         else{
            cout<<"JAPANESE"<<endl;
         }
  }

  return 0;

}
