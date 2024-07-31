#pragma once
#include <iostream>
#include <string.h>
using namespace std;

// Sa se calculeze suma elementelor de pe diagonala secundara

int sumaDiagSec(int a[100][100], int n) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		suma += a[i][n - 1 - i];
	}
	return suma;
}

// Realizati suma elementelor situate deasupra diagonalei principale

int sumaDeasupraDiagP(int a[100][100], int n) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			suma += a[i][j];
		}
		
	}
	return suma;
}

// Afisati descrescator ( dupa ce au fost sortate ) elementele de pe diagonala principala

void afisareDescDiagP(int a[100][100], int n) {

	for (int i = n - 1; i >= 0; i--) {
		cout << a[i][i] << " ";
	}
}

// Cate elemente superprime situate sub diagonala secundara avem ?

int numarPrim(int n) {

	if (n <= 1) {
		return false;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int superPrim(int n) {

	while (n != 0) {

		if (!numarPrim(n)) {
			return false;
		}
		n = n / 10;
	}
	return true;
}

int nrSuperPrimeSubDiagSup(int a[100][100], int n) {

	int ct = 0;

	for (int i = 0; i < n; i++) {
		for (int j = n - 1 - i; j < n; j++) {
			if (superPrim(a[i][j])) {
				ct++;
			}
		}
	}
	return ct;
}

void afisareNrSuperPrimeSubDiagSup(int a[100][100], int n) {


	for (int i = 0; i < n; i++) {
		for (int j = n-i-1; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

// Care este suma elementelor situate deasupra diagonalei secundare?

int sumaElemDeasupraDiagSec(int a[100][100], int n) {

	int suma = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			suma += a[i][j];
		}
	}
	return suma;
}

// Afisati media artimetica a elementelor din regiunea nord a matricei

int maElemNordMatrice(int a[100][100], int n) {

	int suma = 0;
	int ct = 0;


	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n - 1 - i; j++) {
			ct++;
			suma += a[i][j];
		}
	}
	
	return suma / ct;

}

//Cate elemente negative sunt in regiunea de sud a matricei 

void elemNegSudMatrice(int a[100][100], int n) {

	int ct = 0;

	for (int i = n - 1; i >= 0; i--) {
		for (int j = 1; j < n - 1 && j < i; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

}


//TEMA

//Care este cmmdc ul tuturor elementelor de pe diagonala principala

int cmmdc(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}


int cmmdcDiagP(int a[100][100], int n) {

	int nr = a[0][0];
	for (int i = 1; i < n; i++) {
		nr = cmmdc(nr, a[i][i]);
	}
	return nr;
}

//Sa se verifice daca matricea este simetrica fata de diagoonala I

int simetrica(int a[100][100],int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; i < n; i++) {
			if (a[i][j] != a[j][i]) {
				return false;
			}
		}

	}
	return true;
}

//Afisati triunghiul isoscel cu maximul de numere ce au prima cifra egala cu ultima cifra

int primaUltimaCifraEgala(int n) {

	int ultima = n % 10;
	int prima;
	while (n >= 10) {
		n /= 10;
	}
	prima = n;
	if (prima != ultima) {
		return false;
	}
	return true;
}

// Sa se inlocuiasca toate aparitiile lui k din triunghiul dreptunghic inferior diagonalei secundare cu cifra lui de coontrol;

int cifraDeControl(int n) {

	while (n > 9) {

		int suma = 0;

		while (n != 0) {
			int cifra = n % 10;
			suma += cifra;
			n /= 10;
		}
		n = suma;
	}
	return n;
}

void inlocuireKCifraControl(int a[100][100], int n) {

	int k;
	cout << "Introduceti un numar: ";
	cin >> k;
	int cifraControl = cifraDeControl(k);

	for (int i = 0; i < n; i++) {
		for (int j = n-1-i; j < n; j++) {
			if (a[i][j] == k) {
				a[i][j] = cifraControl;
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

//Care este numarul cu cele mai multe cifra distincte de pe diagonaa secundara 

int nrCifreDistincte(int n) {

	bool aparitii[10] = { 0 };
	int ct = 0;

	while (n != 0) {
		int cifra = n % 10;
		if (!aparitii[cifra]) {
			aparitii[cifra] = true;
			ct++;
		}
		n = n / 10;
	}


	return ct;
}

int nrMaxcifraDistincte(int a[100][100], int n) {

	int maxCifreDistincte = 0;
	int numarMax = 0;

	for (int i = 0; i < n; i++) {
		int nrCurent = a[i][n - 1 - i];
		int cifreDistincte = nrCifreDistincte(nrCurent);

		if (cifreDistincte > maxCifreDistincte) {
			maxCifreDistincte = cifreDistincte;
			numarMax = nrCurent;
		}
	}
	return numarMax;
}

// Sa se realizeze un vector cu toatte elementele ce au cifra de control un numar par;

void cifraControlNrPar(int a[100][100], int n,int m) {

	int dim = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cifraDeControl(a[i][j]) % 2 == 0) {
				cout << a[i][j] << " ";
			}
		}
	}

}

// Sortati vectorul de la punctul g. crescator pana la mijloc si descrescator duppa ( metodele cu care se va sorta acest vector trebuie sa difere pentru cele doua sortari)

void cifraControlNrPar1(int a[100][100], int n, int m, int v[], int &dim) {

	dim = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (cifraDeControl(a[i][j]) % 2 == 0) {
				cout << a[i][j] << " ";
				v[dim++] = a[i][j];
			}
		}
	}

}

void sortareVector(int v[], int n) {

	for (int i = 0; i < n / 2; i++) {
		for (int j = i + 1; j < n/2; j++) {
			if (v[j] < v[i]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
		
	}

	for (int i = n/2; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[j] > v[i]) {
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}

// Interschimbati toate elementele din triunghiul superior diagonalei principale cu elementele din triunghiul inferior diagonalei secundare

void interschimbareT(int a[100][100], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (i + j > n - 1) {
				int aux = a[i][j];
				a[i][j] = a[n-1-j][n - 1 - i];
				a[n-1-j][n - 1 - i] = aux;
			}
		}
	}

}

void afisareMatrice(int a[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

// Interschimbati toate elementele de minim din N cu toate elementele de maxim din S.

void interschimbareNcuS(int a[100][100], int n) {

	int min = 99999;
	int max = 0;
	int min_i, min_j, max_i, max_j;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n - 1 - i; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
				min_i = i;
				min_j = j;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i + j > n - 1 && i > j) {
				if (a[i][j] > max) {
					max = a[i][j];
					max_i = i;
					max_j = j;
				}
			}
		}
	}

	int aux = a[min_i][min_j];
	a[min_i][min_j] = a[max_i][max_j];
	a[max_i][max_j] = aux;

}

//Sortati descrescator diagonala secundara in functie de suma cifrelor din elemente

int sumaCifrelor(int n) {
	int suma = 0;
	while (n != 0) {
		suma += n % 10;
		n /= 10;
	}
	return suma;
}

void diagDescSumaElem(int a[100][100], int n) {

	int diagSec[100];
	int suma[100];

	for (int i = 0; i < n; i++) {
		int numar = a[i][n - 1 - i];
		int suma = sumaCifrelor(numar);

	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (suma[i] < suma[j]) {
				int aux = suma[i];
				suma[i] = suma[j];
				suma[j] = aux;

			}
		}
	}
}