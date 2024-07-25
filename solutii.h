#include "algoritmi.h"

void sol1() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int suma = sumaDiagSec(x, n);

	cout << "Suma elementelor situate pe diagonala secundara a matriciei este " << suma << endl;

}

void sol2() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int suma = sumaDeasupraDiagP(x, n);

	cout << "Suma elementelor situate deasupra diagonalei principale " << suma << endl;

}

void sol3() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	afisareDescDiagP(x, n);
}


void sol4() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int numar = nrSuperPrimeSubDiagSup(x, n);

	cout << "Sub diagonala secundara se afla " << numar  << " numere superprime " << endl;

}

void test1() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	afisareNrSuperPrimeSubDiagSup(x, n);

}


void sol5() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int suma = sumaElemDeasupraDiagSec(x, n);

	cout << "Suma elementelor situate deasupra diagonalei secundare este " << suma << endl;

}