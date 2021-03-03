#include <stdio.h>			//  Para usar printf()
#include <stdlib.h>			//  par usar system()
#include "defs.h"

void bases()
{
	//  Bases numericas
	a = 179;
	printf("179 en Base 10 es %o en base 8\n", a);
	printf("179 en Base 10 es %X en base 16\n", a);

	a = 0263;		//  Anteponer 0 a un numero lo vuelve base 8
	printf("0263 en Base 8 es %d en base 10\n", a);
	printf("0263 en Base 8 es %x en base 16\n", a);

	a = 0xb3;		//  Anteponer 0x a un numero lo vuelve base 16
	printf("0xb3 en Base 16 es %d en base 10\n", a);
	printf("0xb3 en Base 16 es %o en base 8\n", a);
}
void primarios() 
{
	// Jerarqu�a nivel 1 - Primarios
	// Par�ntesis - Llamada a funci�n ( () )
	bases();

	PR(f, 5.0/9.0 * (80 - 32) );

	PR(d, 2 + 3 * ((4 - 5) + 6));

	// Indice de Arreglo ( [] )
	arr[5] = 34;
	PR(d, arr[5]);

	// Punto o Parte de estructura ( . )
	PR(s, juan.nombre);
	PR(d, juan.edad);
	PR(c, juan.sexo);

	// flecha o Parte de estructura ( -> )
	juancho = &juan;		//  Juancho se vuelve un "apodo" o sobrenombre de Juan
	PR(s, juancho->nombre);
	PR(d, juancho->edad);
	PR(c, juancho->sexo);
}
void unarios() 
{
	//   Jerarqu�a nivel 2 - Operadores unarios
	//  La negaci�n ( ! )
	a = 0;
	if( !!!!!!!!!!!a )
	{
		printf("Esto es verdad\n");
	}
	else
		printf("Esto es falso\n");
	PR(d, a);
	PR(d, !a);
	PR(d, !!a);
	PR(d, !!!a);
	PR(d, !!!!a);

	//  Operadores Menos y mas unario ( - / + )
	a = +3;
	b = -3;
	PRINT2(d, a, b);
	PRINT2(+d, a, b);

	// Operador complento a uno ( ~ )
	a = 20;
	PRINT2(d, a, ~a);

	// Operadores incremento en 1 y decremento en 1  ( ++ / --)
	a = 10;
	b = 10;
	a++; 
	b--;
	PRINT2(d, a, b);

	a = 10;
	b = 10;
	++a; 
	--b;
	PRINT2(d, a, b);

	a = 10;
	b = 10;
	PR(d, a++ + b);
	PR(d, a);

	a = 10;
	PR(d, ++a + b);
	PR(d, a);

	a = 10;
	b = 10;
	PR(d, a++ + ++b);
	PRINT2(d, a, b);

	a = 10;
	b = 10;
	PR(d, ++a + b++);
	PRINT2(d, a, b);

	a = 10;
	b = 10;
	PR(d, ++a + a++);
	PRINT2(d, a, b);

	a = 5; b = 8; c = 0;
	PRINT1(d, d = a++ + b-- + !c);
	PRINT4(d, a, b, c, d);

	// Operador "Tama�o de"  ( sizeof )
	printf("El tipo de dato int ocupa %d bytes en la memoria.\n", sizeof (int) );
	printf("El tipo de dato float ocupa %d bytes en la memoria.\n", sizeof (float) );
	printf("El tipo de dato double ocupa %d bytes en la memoria.\n", sizeof (double) );
	printf("El tipo de dato char ocupa %d bytes en la memoria.\n", sizeof (char) );
	printf("El arreglo arr ocupa %d bytes en la memoria.\n", sizeof (arr) );

	// Operadores Direcci�n ( & ) e indirecci�n ( * )
	a = 50;
	ptr = &a;	// Guardamos la direcci�n de memoria de a (creamos el alias)

	PR(p, &a);
	PR(d, a);
	PR(p, &ptr);
	PR(p, ptr);
	PR(d, *ptr);

	// Operador cast ( (tipo) )
	car = 75;
	PR(c, car);			//  Esto no es promoci�n de tipos, solo es impresi�n
	PR(d, car);

	a = car;			//  Promuevo  char -> int
	f = a;				//  int  -> float
	h = f;				// float  -> double
	f = h;				//  "P�rdida de presici�n"

	a = (int) car;		// Conversi�n expl�cita de char a int
	f = (float) a;		// Conversi�n expl�cita de int a float
	h = (double) f;		// Conversi�n expl�cita de float a double
	f = (float) h;		// Conversi�n expl�cita de double a float
	car = (char) h;		// Conversi�n expl�cita de double a char

	//   5 / 2 = 2		Divisi�n entera
	//   5.0 / 2 = 2.5  
	PR(d, 5 / 2);
	PR(f, 5 / 2);
	PR(f, (float) 5 / 2);
	PR(f,  5 / (float) 2);
}
void multiplicativos()
{
	//  Jerarqu�a nivel 3 - Operadores Multiplicativos
	//  Multiplicaci�n ( * )
	PR(d, 5 * 4);

	// Divisi�n  ( / )
	PR(d, 5 / 2);		// Divisi�n entra (entro / entero = entero)
	PR(f, 5.0 / 2);
	PR(f, 5 / 2.0);
	PR(f, 5.0 / 2.0);

	PR(f, 5 / 9 * (80 - 32));   //  Error: divisi�n entera
	PR(f, 5.0 / 9 * (80 - 32));

	//  M�dulo o residuo ( % )
	printf("5 %% 2 = %d\n", 5 % 2);
	a = 25;
	PR(d, a);
	if(a % 2 != 0)
		printf("El n�mero es impar\n");
	else
		printf("El numero es par\n");
}
void aditivos()
{
	//  jerarqu�a nivel 4 -  Operadores Aditivos
	// Operador suma ( + )
	PR(d, 3 + 4);

	// Operador resta ( - )
	PR(d, 3 - 4);
}
void desplazamiento()
{
	//  Jerarqu�a nivel 5 - operadores de desplazamiento
	// Desplazamiento a la izquierda ( << )
	PR(d, 54 << 1);
	PR(d, 54 << 2);
	PR(d, 54 << 3);
	PR(d, 54 << 4);
	NL;

	// Desplazamiento a la derecha ( >> )
	PR(d, 54 >> 1);
	PR(d, 54 >> 2);
	PR(d, 54 >> 3);
	PR(d, 54 >> 4);
}
void relacionales()
{
	//  Jerarqu�a nivel 6 - Operadores relacionales
	// Operador menor que ( < )
	PR(d, 5 < 10);

	// Operador menor o igual que ( <= )
	PR(d, 5 <= 10);

	// Operador mayor que ( > )
	PR(d, 5 > 10);

	// Operador mayor o igual que ( >= )
	PR(d, 5 >= 10);
}
void igualdad()
{
	// Jerarqu�a nivel 7 - Operadores de igualdad
	// Operador igual que ( == )
	PR(d, 5 == 10);

	// Operador diferente de  o no igual a ( != )
	PR(d, 5 != 10);
}
void deBits()
{
	// Jerarqu�a nivel 8 
	// Operador and de bits ( & )
	PR(d, 54 & 108);

	// Jerarqu�a nivel 10
	// Operador or de bits ( | )
	PR(d, 54 | 108);

	// Jerarqu�a nivel 9
	// Operador xor de bits ( ^ )
	PR(d, 54 ^ 108);
}
void l�gicos() 
{
// Jerarq�a nivel 9 
	//  operador And (y) l�gico - ( && )
	PR(d, 54 && 108);
	PR(d, 0 && 108);

	// Jerarq�a nivel 10 
	//  operador or o) l�gico - ( || )
	PR(d, 54 || 108);
	PR(d, 0 || 108);
	NL;
	a = 5;
	b = 0;
	c = 2;
	PRINT3(d, a, b, c);
	PRINT1(d, a && b || c);
	PRINT1(d, a || b && c);
	PRINT1(d, a++ && b++ || c++);
	PRINT3(d, a, b, c);

	a = 0;
	b = 5;
	c = 2;
	PRINT3(d, a, b, c);
	PRINT1(d, (a++ == 1) && (b++ == 4) || (c++ == 3));
	PRINT3(d, a, b, c);

		a = 0;
	b = 5;
	c = 2;
	PRINT3(d, a, b, c);
	PRINT1(d, (a++ == 1) && (b++ == 4) && (c++ == 3));
	PRINT3(d, a, b, c);
}
void condicional()
{
	// Jerarqu�a nivel 11 - Operador Condicional
	a = 5;
	b = 7;
	PRINT2(d, a, b);
	PR(d, a > b ? a : b);
	PR(d, a < b ? a : b);

	c = (a >= b) ? a : b;
	PR(d, c);
}
void asignaci�n()
{
	// Jerarqu�a nivel 12 - Asignaci�n (simple y compuesta)
	// Asignaci�n simple ( = )
	a = 30 * 20;
	PR(d, a);
	//  Asignaci�n multiple 
	a = b = c = d = 30 * 20;
	PRINT4(d, a, b, c, d);

	// Asignaci�n compuesta   ( +=, -=, *=, etc.)

	a = 5;
	PRINT2(d, a, a = a + 5);

	a = 5;
	PRINT2(d,a, a += 5);

	a = b = c = 1;
	a -= b += c *= d = 2;
	PRINT4(d, a, b, c, d);

}
void coma()
{
	// Jerarqu�a nivel 13 - Operador coma ( , )
	int a, b, c, d;
	int arreglo[] = { 0, 1, 2, 3, 4, 5 };
	pow(2, 5);
}

int main()
{
	//  Ejercicios
	int a = 3, b = 3, c = 0, d = -1, e = 3;
	float f = 2;

	PRINT1(d, a += 2 * a * ++b);
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	PRINT1(d, b = ++b + b++);
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(d, d /= d + d++);
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(d, d = d ? d-- : d++);
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(d, !a + !b + (d && c));
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(d, d = (a || b) && (c || (d && !f)) );
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(d, e *= !!!!!!!d );
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(d, a % b * c - d++ );
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	a = 3; b = 3; c = 0; d = -1; e = 3;
	PRINT1(f, f /= (float) e-- / e++);
	PRINT5(d, a, b, c, d, e); PRINT1(f, f);

	system("pause");
	return 0;
}
