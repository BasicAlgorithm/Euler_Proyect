// Ejercicios del 01 al 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <math.h>

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

long long problem3a(long long a) {
	long long i;
	for (i = 2; i < a / 2; i++) {
		if (a%i == 0)
			a /= i;
	}
	return a;
}

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

int problem4a(int a) {
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

int problem5(int a) {
	while (a > 0) {
		if (a % 2 == 0 && a % 3 == 0 && a % 4 == 0 && a % 5 == 0 && a % 6 == 0 && a % 7 == 0 &&
			a % 8 == 0 && a % 9 == 0 && a % 10 == 0 && a % 11 == 0 && a % 12 == 0 && a % 13 == 0 &&
			a % 14 == 0 && a % 15 == 0 && a % 16 == 0 && a % 17 == 0 && a % 18 == 0 && a % 19 == 0 && a % 20 == 0) return a;
		a++;
	}
	return 0;
}

long long problem6(int a) {
	long long respuesta;
	long long b = 0;
	long long c = 0;
	//cout << a << endl;
	for (int x = 1; x <= a; x++) {
		respuesta = x*x;
		b += respuesta;
		//cout << b << endl;
	}
	respuesta = 0;
	for (int y = 1; y <= a; y++) {
		respuesta += y;
		c = respuesta * respuesta;
	}
	respuesta = c - b;
	return respuesta;
}

long long problem7(long long a) {
	int contador = 0;
	long long numeroprimo;
	int primo = 0;
	while (contador != a) {
		for (int x = 2; ; x++) {
			for (int y = 1; y <= x; y++) {
				if (x%y == 0) primo++;
			}
			if (primo <= 2) {
				numeroprimo = x;
				contador++;
				//cout << numeroprimo << endl;
			}
			primo = 0;
			if (contador == a) break;
		}
	}
	return numeroprimo;
}

bool esprimo(long long a) {
	//long long raiz = 0;
	//for (long long y = 2; y < a; y++) if (y*y == a) raiz = y;
	for (long long x = 2; x <= sqrt(a); x++) if (a%x == 0) return false;
	return true;
}

long long problem10(long long a) {
	long long rr = 0;
	for (long long x = 2; x <= a; x++) if (esprimo(x) == true) rr += x;
	return rr;
}



// Numero del ejercicio 3 a evaluar 600851475143

int main()
{
	long long a = 2000000;
	int b = 6;
	cout << "resolving problems: " << endl;
	cout << problem10(a) << endl;
	//cout << 1%2 << endl;
	system("pause");
}


