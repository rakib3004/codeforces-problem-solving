#include<bits/stdc++.h>
using namespace std;

void iitcpc(){


string s;

cin>>s;

int length =0;
  length = s.size();
int i=0;

bool isFirst[length];
bool isSecond[length];
bool isThird[length];
bool isForth[length];

for(i=0;i<length;i++){
    isFirst[i] = false;
    isSecond[i]=false;
     isThird[i] = false;
    isForth[i]=false;

}

int firstA=0,firstB=0,thirdA=0,thirdB=0;

for(i=0;i<length;i++){
    if(s[i]=='('){
            isFirst[firstA]=true;
            firstA++;
       }
  if(s[i]==')'){
        if(isFirst[firstB]==true){
            isSecond[firstB]=true;
            firstB++;
        }

        }
 if(s[i]=='['){
            isThird[thirdA]=true;
            thirdA++;
       }
  if(s[i]==']'){
           if(isThird[thirdB]==true){
            isForth[thirdB]=true;
            thirdB++;
        }
       }
//            cout<<isFirst[i]<<"  "<<isSecond[i]<<endl;
//
//    cout<<isThird[i]<<"  "<<isForth[i]<<endl;

}


int maxPosition1 = max(firstA,firstB);
int maxPosition2 = max(thirdA,thirdB);
int maxPosition = max(maxPosition1,maxPosition2);


int minimumMove=0;

for(i=0;i<maxPosition;i++){

//    bool testRBS =


    if(isFirst[i]==true&&isSecond[i]==true){
//            cout<<isFirst[i]<<"  "<<isSecond[i]<<endl;
        minimumMove++;
    }
//         testRBS =


 if(isThird[i]==true&&isForth[i]==true){
//    cout<<isThird[i]<<"  "<<isForth[i]<<endl;
        minimumMove++;
    }
}

cout<<minimumMove<<endl;

}
int main(){

int t;


cin>>t;

while(t--){

    iitcpc();
}

return 0;
}
