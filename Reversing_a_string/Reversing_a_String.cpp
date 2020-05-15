#include <iostream>

using namespace std;

int main() {
	char text[] = "abcde";

 	int nChars = sizeof(text) - 1;

	char* pStart = text;
	char* pEnd = text + nChars - 1;

	while (pStart < pEnd) {
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;
		
		pStart++;
		pEnd--;
	}

	cout << text << endl;

	return 0;
}