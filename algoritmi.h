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