#include "util.h"
void init(int* vector, int size, int a, int b) {
	for (int i = 0; i < size; i++) {
		vector[i] = rand() % (b - a + 1) + a;
	}
}

string convert(int* vector, int size) {
	string msg = "";
	for (int i = 0; i < size; i++) {
		msg += to_string(vector[i]) + " ";
	}

	return msg;
}