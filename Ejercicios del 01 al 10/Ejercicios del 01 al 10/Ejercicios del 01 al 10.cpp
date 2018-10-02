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

int problem8 (){
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
	int nuevovalor = 0;
	int respuesta = 0;
	char *p=cadena;
	//cout << *p << endl;
	char c1[1];
	char c2[1];
	char c3[1];
	char c4[1];
	char c5[1];
	char c6[1];
	char c7[1];
	char c8[1];
	char c9[1];
	char c10[1];
	char c11[1];
	char c12[1];
	char c13[1];
	for (int x = 0; x <= lencadena - 13; x++) {
		for (int y = 0; y <= 12; y++) {
			*p = cadena[x+y];
			switch (y) {
			case 0: p = c1; cout << "aqui"<< *p; break;
			case 1: p = c2; break;
			case 2: p = c3; break;
			case 3: p = c4; break;
			case 4: p = c5; break;
			case 5: p = c6; break;
			case 6: p = c7; break;
			case 7: p = c8; break;
			case 8: p = c9; break;
			case 9: p = c10; break;
			case 10: p = c11; break;
			case 11: p = c12; break;
			case 12: p = c13; break;
			}
		}
		int v1 = atoi(c1); cout << "ALLA" << v1 << endl;
		int v2 = atoi(c2);
		int v3 = atoi(c3);
		int v4 = atoi(c4);
		int v5 = atoi(c5);
		int v6 = atoi(c6);
		int v7 = atoi(c7);
		int v8 = atoi(c8);
		int v9 = atoi(c9);
		int v10 = atoi(c10);
		int v11 = atoi(c11);
		int v12 = atoi(c12);
		int v13 = atoi(c13);
		cout << v1 << v2 << v3 << v4 << v5 << v6 << v7 << v8 << v9 << v10 << v11 << v12 << v13 << endl;
		nuevovalor = v1 * v2*v3*v4*v5*v6*v7*v8*v9*v10*v11*v12*v13;
		if (nuevovalor > respuesta) respuesta = nuevovalor;

	}
	return respuesta;


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
	cout << problem8() << endl;
	
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


