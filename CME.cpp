

#include<stdio.h>

#include<iostream>

using namespace std;


int main()
{


int n;

cin>>n;

int a[n];
int iterator;

for(iterator=0;iterator<n;iterator++){

    cin>>a[iterator];
    if(a[iterator]<4){
        a[iterator]=4-a[iterator];
    }
    else{
        a[iterator]=a[iterator]%2;

    }

}


for(iterator=0;iterator<n;iterator++){

        cout<<a[iterator]<<endl;
}

return 0;

}


