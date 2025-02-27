#include <iostream>
using namespace std;

int* test() {
	int array[]{ 1,2,3,4,5,6,7,8,9,10 };
	return array;
}

int main() {
	int* pointer = test();

	for (int i = 0; i < 10; i++) {
		cout << *(pointer + i) << " ";
	}

	cout << endl;

	return 0;
}