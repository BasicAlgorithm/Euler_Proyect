// Ejercicios del 01 al 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
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

long long problem8() {
	char cadena[] =
		"73167176531330624919225119674426574742355349194934"
		"96983520312774506326239578318016984801869478851843"
		"85861560789112949495459501737958331952853208805511"
		"12540698747158523863050715693290963295227443043557"
		"66896648950445244523161731856403098711121722383113"
		"62229893423380308135336276614282806444486645238749"
		"30358907296290491560440772390713810515859307960866"
		"70172427121883998797908792274921901699720888093776"
		"65727333001053367881220235421809751254540594752243"
		"52584907711670556013604839586446706324415722155397"
		"53697817977846174064955149290862569321978468622482"
		"83972241375657056057490261407972968652414535100474"
		"82166370484403199890008895243450658541227588666881"
		"16427171479924442928230863465674813919123162824586"
		"17866458359124566529476545682848912883142607690042"
		"24219022671055626321111109370544217506941658960408"
		"07198403850962455444362981230987879927244284909188"
		"84580156166097919133875499200524063689912560717606"
		"05886116467109405077541002256983155200055935729725"
		"71636269561882670428252483600823257530420752963450";
	int lencadena = sizeof(cadena);
	//cout << "sizeof cadena"<<sizeof(cadena) << endl;
	long long nuevovalor = 1;
	long long respuesta = 0;
	//char *p = cadena;
	//char *q = nullptr;
	for (int x = 0; x <= lencadena - 13; x++) {
		//q = p;
		//cout << "main pointer q: " << *q << endl;
		for (int y = 0; y <= 12; y++) {
			//cout << *q << endl;
			char c1[1];
			c1[0] = cadena[x + y];
			long long v1 = atoi(c1);
			
			cout << v1;
			nuevovalor *= v1;
			//q++;
		}
		cout << " valor de la multi: " << nuevovalor << endl;
		cout << "\n";
		if (nuevovalor > respuesta) respuesta = nuevovalor;
		nuevovalor = 1;
		//p++;
		//cout <<"dasdsa"<< *p << endl;
	}
	return respuesta;


}

int problem9() {
	int a = 0;
	int b = 0;
	int c = 0;
	//int suma = 1000;
	for (a; a <= 1000; a++) {
		//cout << a << endl;
		for (b; b < 1000 - a; b++) {
			//cout << b << endl;
			c = 1000 - a - b;
			if (b >= c) {
				c = 0;
				b = 0;
				break;
			}
			//cout << "a: " << a << " b: " << b << " c: " << c << endl;
			if ((a*a) + (b*b) == (c*c)) {
				cout << "respuesta " << a << " " << b << " " << c << endl;
				return 888;
			}
		}
	}
	return 999;
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
	//char t[] = { '5','2','63','55' };
	//char r[1];
	//char *p = t;
	//char *s = t + 1;
	

	cout << "resolving problems: " << endl;
	cout << problem9() << endl;
	
	//int myint1 = atoi(t[2]);

	//cout << *p << endl;
	//r[0] = *p;
	//cout << r[0] << endl;
	//int con = atoi(r);
	//cout << con*10 << endl;
	//cout << sizeof(r) << endl;
	system("pause");
	return 0;
}


