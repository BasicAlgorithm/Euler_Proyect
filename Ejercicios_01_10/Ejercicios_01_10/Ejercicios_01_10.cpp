// Ejercicios_01_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int problem1(int a) {
	int b = 0;
	for (int x = a - 1; x; x--) {
		if (x % 3 == 0 || x % 5 == 0) b += x;
	}
	return b;
}

int problem2(int a) {
	int x = 1;
	int y = 1;
	int r = 0;
	int respuesta = 0;
	for (int b = 1; b; b++) {
		if (y >= a) break;
		cout << y << ", " << endl;
		//s += y;
		//cout << "valor de s " << s << endl;
		if (y % 2 == 0) respuesta += y;
		r = x + y;
		x = y;
		y = r;
	}
	cout << "la suma de pares es: ";
	return respuesta;
}

int problem3(long long a) {
	//cout << a << endl;
	int primo = 0;
	long respuesta = 0;
	for (int x = 1; x < a / 2; x++) {
		//if (x % 3 == 0) continue;
		//if (x % 5 == 0) continue;
		for (int y = 1; y <= x; y++) {
			if (x%y == 0) primo++;
		}
		//if (primo <= 2) ;
		if (primo <= 2 && a%x == 0) respuesta = x;
		primo = 0;
		x++;
	}
	return respuesta;
}

int problem3a(long long a) {
	int i;
	for (i = 2; i < a / 2; i++) {
		if (a%i == 0)
			a /= i;
	}
	return a;
}

int problem4(int a) {
	int n, r = 0, respuesta = 0, multiplicacion;
	for (int x = 100; x <= 999; x++) {
		for (int y = 100; y <= 999; y++) {
			multiplicacion = x * y;
			n = multiplicacion;
			for (n; n; n /= 10) r = (r * 10) + (n % 10);
			if (multiplicacion == r && multiplicacion > respuesta) respuesta = multiplicacion;
			r = 0;
		}
	}

	return respuesta;
}

// 600851475143


int main()
{
	long long a = 600851475143;
	int b = 0;
	cout << "resolving problems: " << endl;
	cout << problem3a(a) << endl;
	//cout << 1%2 << endl;
	system("pause");
}



//EXTRAS
//PROBLEMA 4 PERO RECORRE LOS POSIBLES NUMEROS

int problem4(int a, int b) {
	int r = 0, n, respuesta = 0, y = 100;
	for (y; y <= 9801; y++) {
		cout << y << endl;
		n = y;
		for (n; n; n /= 10) {
			r = (r * 10) + (n % 10);
		}
		if (y == r)  respuesta = y;
		r = 0;
	}
	return respuesta;
}