#include <iostream>
using namespace std;


string numbers[] = {"apple", "orange", "banana"};

void show1(int nElements, string texts[]) {
	
	//cout << sizeof(texts) << endl; 這裡是回傳的是 sizeof pointer

	for (int i = 0; i < nElements; i++)
	{
		cout << texts[i] << endl;
	}
}

void show2(int nElements, string *texts) {
  // cout << sizeof(texts) << endl; 這裡是回傳的是 sizeof pointer

  for (int i = 0; i < nElements; i++) {
    cout << texts[i] << endl;
  }
}

// 會檢查陣列長度是否相符的寫法
void show3(string (&texts)[3]) {

	//cout << sizeof(texts) << endl; 這裡是回傳的是 sizeof pointer

	for (int i = 0; i < sizeof(texts)/sizeof(string); i++)
	{
		cout << texts[i] << endl;
	}
}

char *getMemory() {
  char *pMem = new char[100];
  return pMem;
}

void freeMemory(char *pMem) { delete[] pMem; }

int main() {
  string texts[] = {"apple", "orange", "banana"};

  // 顯示 bytes 長度
  cout << sizeof(texts) << endl;

  show1(3, texts);
  show2(3, texts);
  show3(texts);

  char *pMemory = getMemory();
  freeMemory(pMemory);

  return 0;
}