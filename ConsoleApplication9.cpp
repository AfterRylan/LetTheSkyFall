#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {

    int a;
    int r;
    cin >> a;
    cin >> r;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
        cin >> v[i];
    for (int i = 0; i < a; i++)
        cout << v[i] * r << " ";
}

//TEST(TestCaseName, TestInt)