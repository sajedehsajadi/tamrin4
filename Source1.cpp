//tamrin 1 bedun araye pooya
#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int a[100][100];
	int n;
	cout << "enter number:";
	cin >> n;
	a[0][0] = 0;
	a[0][1] = 1;
	a[0][2] = 0;
	cout << a[0][1] << '\n';
	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= n+1; j++) {
			if (j <= i+1 && j != 0) {
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
				cout << a[i][j] << '\t';
			}
			else
				a[i][j] = 0;
		}
		cout << '\n';
	}
}