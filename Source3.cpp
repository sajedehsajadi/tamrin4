#include<iostream>
#include<conio.h>
using namespace std;
int main() {
	int j = 0,i=0;
	char * p,ch;
	char array[100];
	cout << "enter a string:\n";
	gets_s(array);
	p = array;
	while (p[i]!=0) {
		ch = p[i];
		i++;
		if (ch == ' ')
			j++;
	}
	cout << j + 1;
}