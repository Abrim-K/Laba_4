#include <iostream>
#include <string>
#include "tasks.h"
using namespace std;


int main() {
	int start = 1;
	while (start != 0) {
		cout << "choose task (from 1 to 4 or press 0 to exit): ";
		cin >> start;
		switch (start) { //выбор задачи
		case 1: 
			cout << task_1() << endl;
			break;
		case 2: 
			cout << task_2() << endl;
			break;
		case 3: 
			cout << task_3() << endl;
			break;
		case 4: 
			task_4();
			break;
		default:
			cout << "uncorrect input" << endl;
		}
	}
	return 0;
}
