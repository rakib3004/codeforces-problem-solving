
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

          int n,i,j,t;
          cin>>n>>t;
          string s;
          cin>>s;
          if(n==1&&t==1){cout<<0; return 0;}
                if(t==0){
                    cout<<s;
                    return 0;
                }

          if(s[0]=='1'){
            t++;
            }

            s[0]='1';
            for(i=1,j=1;(i<n&&j<t);i++,j++){
                if(s[i]=='0'){
                    j--;
                }
                else{
                    s[i]='0';
                }
            }

         cout<<s;

    return 0;

}
