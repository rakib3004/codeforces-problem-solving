
#include<bits/stdc++.h>
#define o long long int
using namespace std ;


int main(){


int n_time;


cin>>n_time;

while(n_time--){

    int a_number,b_number;

    cin>>a_number>>b_number;


    int modular=0;
    if(b_number>a_number){
        swap(a_number,b_number);
    }
    while(b_number){
        modular = modular +(a_number/b_number);

             a_number = a_number % b_number;
             swap(a_number,b_number);
    }

      cout<<modular<<endl;

}
  return 0;

}
