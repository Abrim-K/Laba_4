#include <iostream>
#include <string>
using namespace std;


int task_1() {
	string now;
	int count = 0;
	string city[10];
	cout << "enter cities (10): " << endl;
	for (int i = 0; i < 10; ++i) {
		cin >> now;
		city[i] = now;
		if (now.back() == 'b') {
			count++;
		}
	}
	return count;
}


int task_2() {
	string now;
	int d = 0;
	string girls[5];
	cout << "enter name girls (5): " << endl;
	for (int i = 0; i < 5; ++i) {
		cin >> now;
		girls[i] = now;
		if (d == 0) {
			d = now.size();
		}
		else {
			if (d > now.size()) {
				d = now.size();
			}
		}
	}
	return d;
}


int task_3() {
	string now;
	int count = 0;
	string city[10];
	cout << "enter cities (10): " << endl;
	for (int i = 0; i < 10; ++i) {
		bool proverka = false;
		cin >> now;
		city[i] = now;
		for (int j = 0; j < now.size(); ++j) {
			if ((now[j] == 'd') or (now[j] == 'D')) {
				proverka = true;
			}
		}
		if (proverka) {
			count++;
		}
	}
	return count;
}


void task_4() {
	string word;
	int count;
	int post_count = 0;
	string* workers{ new string[20] };
	string* post_workers{ new string[20] };
	cout << "Enter count workers: ";
	cin >> count;
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Input not number" << endl;
	}
	cout << "workers:" << endl;
	for (int i = 0; i < count; ++i) {
		cin >> word;
		workers[i] = word;
		if (word.size() > 7) {
			post_workers[post_count] = word;
			post_count++;
		}
	}
	bool proverka = true;
	while (proverka) {
		int now = 0;
		proverka = false;
		for (int i = 0; i < post_count - 1; ++i)
			if (post_workers[now].compare(post_workers[now + 1]) <= 0) {
				now++;
			}
			else {
				string between = post_workers[now];
				post_workers[now] = post_workers[now + 1];
				post_workers[now + 1] = between;
				proverka = true;
			}
	}
	cout << "result: " << endl;
	for (int i = 0; i < post_count; ++i) {
		cout << post_workers[i] << endl;
	}
}
	