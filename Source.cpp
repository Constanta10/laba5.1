#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int* a, n;
	cin >> n;
	a = new int[n];
	for (int i=0 ; i < n; i++) {
		cin >> a[i];
	}
	reverse(a, a + n);
	for (int i=0; i < n; i++) {
		cout << a[i] << endl;
	}
}