#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

	}
	void printVec(const vector<int>& vec) {
		for (auto i : vec) {
			cout << i << " ";
		}
		cout << endl;
	}
	int main() {
	vector<int> vec;
	for (int i = 0; i < 100; i++) {
		vec.push_back(rand() % 100);
	}
	printVec(vec);
	sort(vec.begin(), vec.end());
	printVec(vec);	
	}
}
