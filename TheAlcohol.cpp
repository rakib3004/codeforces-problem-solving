#include<bits/stdc++.h>
using namespace std;

/*

2 500
5000 100
350 100
*/

/*

3 0
100 0
100 0
100 0

3 0
100 4
100 3
100 2

5 101
3 50
60 100
10 100
15 100
15 100


*/

int main()
{

  int n;
   int x;
    scanf("%d",&n);
    scanf("%d",&x);

    double totalConsume=0;
    double perUnitConsume=0;

    int volummm[n]={0};
    int percentage[n]={0};

    int i,j;

        x=x*100;
    for(i=0;i<n;i++){

    scanf("%d",&volummm[i]);
    scanf("%d",&percentage[i]);
    }



     for(i=0;i<n;i++){
            perUnitConsume = (volummm[i]*percentage[i]);

        totalConsume = totalConsume+ perUnitConsume;
      //  cout<<"Amount: "<<totalConsume<<endl;


        if((int)totalConsume>x){
            cout<<i+1<<endl;
            return 0;
        }
    }



           cout<<-1<<endl;





    return 0;
}
