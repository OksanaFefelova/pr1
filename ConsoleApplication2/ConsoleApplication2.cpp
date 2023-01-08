#include <iostream>
#include <cstdlib>
using namespace std;

void addaray(float* m1, float* m2, float* m3, int ra) {
	for (int i = 0; i < ra; i++) {
		*(m3++) = *(m1++) + *(m2++);
	}
}
int main()
{
	//Изменение кодировки консоли:
	system("chcp 1251>nul");
	const int razm = 8;
	
	float mas1[razm];
	float mas2[razm];
	float mas3[razm];
	srand(3);
	for (int i = 0; i < razm; i++) {
		mas1[i] = rand() % 25;
		cout << mas1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < razm; i++) {
		mas2[i] = rand() % 25;
		cout << mas2[i] << " ";
	}
	addaray(mas1, mas2, mas3, razm);
	for (int i = 0; i < razm; i++) {
		cout << mas3[i] << " ";
	}
	system("pause>nul");
	return 0;
}

