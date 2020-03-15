
#include<iostream>

using namespace std;

int main() {

    int n,k;

    int i;
    cin>>n>>k;
    int a[n];
    for(i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int c =0;
    int s =0;
    for( i = 0 ; i < n ; i++){
        if(a[i]>8){
            s+=8;
            a[i+1]+=a[i]-8;
            c++;
        }
        else{
            s+=a[i];
            c++;
        }
        if(s>=k){
            cout<<c;
            return 0;
        }
    }

    cout<<"-1";
}
