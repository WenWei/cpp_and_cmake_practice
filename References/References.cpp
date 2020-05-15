#include <iostream>

using namespace std;

void changeSomething(double& value) {
	value = 123.4;
}

int main() {
	int value1 = 8;
	int value2 = value1;
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	// References
	int value3 = 11;
	int& value4 = value3;
	value4 = 12;

	cout << "Value3: " << value3 << endl;
	cout << "Value4: " << value4 << endl;

	// 傳址參考
	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	return 0;
}