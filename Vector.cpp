#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> vec;
	for (int i = 0; i < 100; i++) {
		vec.push_back(rand() % 100);
	}

	for (auto i : vec) {
		cout << i << " ";
	}
	cout << endl;
	sort(vec.begin(), vec.end());

	for (auto i : vec) {
		cout << i << " ";
	}
}
