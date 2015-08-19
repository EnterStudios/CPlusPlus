#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	const int c = 10;
	
	for (int i = 0; i < 100; i++) {
		v.push_back(i);
	}

	
	for (int j = 0; j < 100; j++) {
		v.push_back(v.at(j));
	}

	for (int i = 0; i < 100; i++) {
		cout << i << endl;
	}

	getchar();
	return 0;
}