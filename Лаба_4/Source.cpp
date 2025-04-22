#include <iostream>
#include <string>
using namespace std;
int main() {
	string now;
	int count = 0;
	string city[10];
	cout << "enter cities (10): ";
	//jsdnijfnirngn
	for (int i = 0; i < 10; ++i) { 
		cin >> now;
		city[i] = now;
		if (now.back() == 'b') {
			count++;
		}
	}
	cout << "count: " << count;
	return 0;
}
