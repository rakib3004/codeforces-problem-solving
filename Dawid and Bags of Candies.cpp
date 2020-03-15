
//#include<bits/stdc++.h>
//using    namespace std  ;
//int  main()
//{
//    int t,i,n;
//    cin>>n;
//     int left = 0;
//     int right = 9;
//
//  int a[10]={0};
//
//  string s;
//        cin>>s;
//
//
//        for(i=0;i<n;i++){
//            if(s[i]=='L'){
//              a[left]=1;
//              left++;
//              if(left==10){left=0;}
//
//            }
//            else if(s[i]=='R'){
//                a[right]=1;
//            right--;
//            if(right==-1){right=9;}
//
//            }
//            else{
//               int h= s[i]-'0';
//               a[h]=0;
//            }
//
//
//        }
//        for(i=0;i<10;i++){
//        cout<<a[i];
//        }
//return 0;
//}
#include<bits/stdc++.h>
using    namespace std  ;
int  main(){
    int a[4]={0};
    int i,j;
        int sum=0;
      int pre_sum=0;
     int  post_sum =0;
    for(i=0;i<4;i++){
        cin>>a[i];
        sum  = sum + a[i];
    }
    if(sum%2){
        cout<<"NO";
        return 0;
    }


    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            pre_sum=a[i]+a[j];
            post_sum= sum - pre_sum;
              if(pre_sum==post_sum){
              cout<<"YES";
              return 0;
              }
                }
                  }

     sort(a,a+4);
     sum = sum -a[3];

     if(sum==a[3]){
        cout<<"YES";
              return 0;
     }
     else
    cout<<"NO";

    return 0;

}
