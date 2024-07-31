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

void sol6() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int ma = maElemNordMatrice(x, n);

	cout << "Media aritmetica a elementelor din sectiunea nord a matricei este " << ma << endl;

}

void test2() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	elemNegSudMatrice(x, n);

}

//TEMA

void sol7() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int cmmdc = cmmdcDiagP(x, n);

	cout << "Cel mai mare divizor comun al tuturor elementelor de pe diag principala este " << cmmdc << endl;

}

void sol8() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	if (simetrica) {
		cout << "Matricea este simetrica cu diagonala principala " << endl;
	}
	else {
		cout << "Matricea nu este simetrica cu diagonala principala " << endl;
	}

}

void sol9() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	inlocuireKCifraControl(x, n);

	

}

void sol10() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int numar = nrMaxcifraDistincte(x, n);

	cout << "Cel mai mare numarul cu cele mai multe cifre distincte de pe diagonaa secundara este " << numar << endl;

}

void sol11() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int m = 5;
	
	cifraControlNrPar(x, n, m);

}

void sol12() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int m = 5;

	int dim = 0;

	int v[10000];

	cifraControlNrPar1(x, n, m,v,dim);

	cout << endl;

	sortareVector(v, dim);

	cout << endl;

	cout << "Vectorul sortat este: " << endl;

	cout << endl;

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}


void sol13() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	interschimbareT(x, n);

	afisareMatrice(x, n);

}

void sol14() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	cout << "Afisare matrice initiala " << endl;

	afisareMatrice(x, n);

	cout << endl;

	interschimbareNcuS(x, n);

	cout << "Afisare matrice dupa schimbare " << endl;

	afisareMatrice(x, n);

}

void sol15() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	diagDescSumaElem(x, n);

	afisareMatrice(x, n);

}

void sol16() {

	int x[100][100] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };

	int n = 5;

	int m = 5;

	afisareMatrice(x, n);

	cout << endl;

	transpuaMatriceiB(x, n, m);

}