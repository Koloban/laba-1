#include <iostream>

using namespace std;

int main()
{
	//Pervaya
	int mas[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		if (!(mas[i] % 2)) {
			mas[i] = 0;
		}
		cout << mas[i] << " ";
	}
	//В цикле вставляем 0 вместо элемента, на каждую четную позицию
	//Vtoraya
	string sim;

	do {
		cout << "\nEnter char:";
		cin >> sim;
	} while (sim.size() != 1);
	// Если строка длинной 1, значит это символ
	string strok;

	do {
		cout << "\nEnter string:";
		cin >> strok;
	} while (strok.size() <= 1);
	// Если строка длинной больше 1 - значит это строка
	cout << "char:" << sim << "\nstring:" << strok << "\nposition:" << strok.find(sim[0]) << endl;
	// Функция find находит первую позицию символа строки
	//Tretya
	int mat[3][3];
	for (int i = 0; i < 3; i++)
		for (int k = 0; k < 3; k++) {
			cout << "\nmat[" << i << "][" << k << "]=";
			cin >> mat[i][k];
		}
	// Заполняем двухмерный массив представленный матрицей 3 х 3
	cout << "\nOpredelityel:" << mat[0][0] * mat[1][1] * mat[2][2] + mat[2][0] * mat[0][1] * mat[1][2] +
		mat[1][0] * mat[2][1] * mat[0][2] + mat[2][0] * mat[1][1] * mat[0][2] +
		mat[0][0] * mat[2][1] * mat[1][2] + mat[1][0] * mat[0][1] * mat[2][2];

	// Формулиро определителя взята из интернета
}