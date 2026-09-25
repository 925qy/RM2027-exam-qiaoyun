#include <iostream>
using namespace std;

int main1() {
	int a[10] = { 5, 8, 2, 10, 7, 15, 13, 11, 20, 18 };

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	    }
	    cout << endl;
		return 0;
	}
