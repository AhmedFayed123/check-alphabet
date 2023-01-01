#include<iostream>
using namespace std;
int main() {
	char x;
	cout << "enter character to check "<<endl;
	cin >> x;
	if (x >= 'a' && x <= 'z')
		cout << x << " :is alphabet";
	else
		cout << x << " :isnot alphabet";

	return 0;
}