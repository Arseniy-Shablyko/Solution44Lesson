//#include <iostream>
//#include <string>
//using namespace std;
//
//void init(int* vector, int size) {
//	for (int i = 0; i < size; i++) {
//		vector[i] = rand() % 100;
//	}
//}
//
//string convert(int* vector, int size) {
//	string msg = "";
//	for (int i = 0; i < size; i++) {
//		msg += to_string(vector[i]) + " ";
//	}
//
//	return msg;
//}
//
//void get_extream_element(int* vector, int size, int* ptrmax, int* ptrmin) {
//	*ptrmax = vector[0];
//	*ptrmin = vector[0];
//
//	for (int i = 1; i < size; i++) {
//		if (vector[i] > *ptrmax) {
//			*ptrmax = vector[i];
//		}
//
//		if (vector[i] < *ptrmin) {
//			*ptrmin = vector[i];
//		}
//	}
//}
//
//int main() {
//	int const SIZE = 10;
//	int vector[SIZE]{};
//	init(vector, SIZE);
//
//	int max, min;
//
//	get_extream_element(vector, SIZE, &max, &min);
//
//	string vector_string = convert(vector, SIZE);
//
//	cout << "Vector: " << vector_string << endl;
//	cout << "Max element: " << max << endl;
//	cout << "Min element: " << min << endl;
// 
//
//	return 0;
//}