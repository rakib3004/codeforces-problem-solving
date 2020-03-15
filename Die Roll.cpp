

 #include<iostream>
  #include<string>
  #include<algorithm>
 using namespace std;
 int main()
{

 int a,b,m,k=6;

 cin >> a>>b;

 if(a>b)
 {

     m=a;

 }

 else
 {


     m=b;
 }

 m=k-m;
 m++;
 int p;

 p=__gcd(m,k);

 m=m/p;
 k=k/p;

 cout << m <<"/" <<k;


  return 0;

}

