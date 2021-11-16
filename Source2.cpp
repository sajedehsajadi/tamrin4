#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int n, m;
	cout << "enter count of rows and columns:";
	cin >> n >> m;
	int** p;
	p = new int* [n];
	for (int i = 0; i < n; i++) {
		p[i - 1] = new int[m];
	}
	for (int k = 1; k <= n; k++) {
			for (int s = 1; s <= m; s++) {
				int z = k * s;
				cout << z<<"   ";
			}
			cout << '\n';
		}

}