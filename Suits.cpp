#include<bits/stdc++.h>
using namespace std;

int main(){




 int a,b,c,d,e,f;

cin>>a>>b>>c>>d>>e>>f;
int cost=0;

if(e>f){

    cost = min(a,d)*e;
    d=d- min(a,d);
    int g=min(b,c);

    cost  = cost + (min(g,d)*f);
    cout<<cost<<endl;
}
else{
    int g=min(b,c);

    cost  =min(g,d)*f;

    d=d- min(g,d);
        cost =cost + min(a,d)*e;
    cout<<cost<<endl;


}
return 0;
}



