
#include <iostream>
using namespace std;
int main(){
	int n, a, x[3] = { 1, 2, 3 };
	cin >> n;	for (int i = 0; i < n; i++){
		cin >> a;
		if (a == x[0]) swap(x[1], x[2]);
		else if (a == x[1]) { swap(x[0], x[2]); }
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
