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
	// Jerarquía nivel 1 - Primarios
	// Paréntesis - Llamada a función ( () )
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
	//   Jerarquía nivel 2 - Operadores unarios
	//  La negación ( ! )
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

	// Operador "Tamaño de"  ( sizeof )
	printf("El tipo de dato int ocupa %d bytes en la memoria.\n", sizeof (int) );
	printf("El tipo de dato float ocupa %d bytes en la memoria.\n", sizeof (float) );
	printf("El tipo de dato double ocupa %d bytes en la memoria.\n", sizeof (double) );
	printf("El tipo de dato char ocupa %d bytes en la memoria.\n", sizeof (char) );
	printf("El arreglo arr ocupa %d bytes en la memoria.\n", sizeof (arr) );

	// Operadores Dirección ( & ) e indirección ( * )
	a = 50;
	ptr = &a;	// Guardamos la dirección de memoria de a (creamos el alias)

	PR(p, &a);
	PR(d, a);
	PR(p, &ptr);
	PR(p, ptr);
	PR(d, *ptr);

	// Operador cast ( (tipo) )
	car = 75;
	PR(c, car);			//  Esto no es promoción de tipos, solo es impresión
	PR(d, car);

	a = car;			//  Promuevo  char -> int
	f = a;				//  int  -> float
	h = f;				// float  -> double
	f = h;				//  "Pérdida de presición"

	a = (int) car;		// Conversión explícita de char a int
	f = (float) a;		// Conversión explícita de int a float
	h = (double) f;		// Conversión explícita de float a double
	f = (float) h;		// Conversión explícita de double a float
	car = (char) h;		// Conversión explícita de double a char

	//   5 / 2 = 2		División entera
	//   5.0 / 2 = 2.5  
	PR(d, 5 / 2);
	PR(f, 5 / 2);
	PR(f, (float) 5 / 2);
	PR(f,  5 / (float) 2);
}
void multiplicativos()
{
	//  Jerarquía nivel 3 - Operadores Multiplicativos
	//  Multiplicación ( * )
	PR(d, 5 * 4);

	// División  ( / )
	PR(d, 5 / 2);		// División entra (entro / entero = entero)
	PR(f, 5.0 / 2);
	PR(f, 5 / 2.0);
	PR(f, 5.0 / 2.0);

	PR(f, 5 / 9 * (80 - 32));   //  Error: división entera
	PR(f, 5.0 / 9 * (80 - 32));

	//  Módulo o residuo ( % )
	printf("5 %% 2 = %d\n", 5 % 2);
	a = 25;
	PR(d, a);
	if(a % 2 != 0)
		printf("El número es impar\n");
	else
		printf("El numero es par\n");
}
void aditivos()
{
	//  jerarquía nivel 4 -  Operadores Aditivos
	// Operador suma ( + )
	PR(d, 3 + 4);

	// Operador resta ( - )
	PR(d, 3 - 4);
}
void desplazamiento()
{
	//  Jerarquía nivel 5 - operadores de desplazamiento
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
	//  Jerarquía nivel 6 - Operadores relacionales
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
	// Jerarquía nivel 7 - Operadores de igualdad
	// Operador igual que ( == )
	PR(d, 5 == 10);

	// Operador diferente de  o no igual a ( != )
	PR(d, 5 != 10);
}
void deBits()
{
	// Jerarquía nivel 8 
	// Operador and de bits ( & )
	PR(d, 54 & 108);

	// Jerarquía nivel 10
	// Operador or de bits ( | )
	PR(d, 54 | 108);

	// Jerarquía nivel 9
	// Operador xor de bits ( ^ )
	PR(d, 54 ^ 108);
}
void lógicos() 
{
// Jerarqía nivel 9 
	//  operador And (y) lógico - ( && )
	PR(d, 54 && 108);
	PR(d, 0 && 108);

	// Jerarqía nivel 10 
	//  operador or o) lógico - ( || )
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
	// Jerarquía nivel 11 - Operador Condicional
	a = 5;
	b = 7;
	PRINT2(d, a, b);
	PR(d, a > b ? a : b);
	PR(d, a < b ? a : b);

	c = (a >= b) ? a : b;
	PR(d, c);
}
void asignación()
{
	// Jerarquía nivel 12 - Asignación (simple y compuesta)
	// Asignación simple ( = )
	a = 30 * 20;
	PR(d, a);
	//  Asignación multiple 
	a = b = c = d = 30 * 20;
	PRINT4(d, a, b, c, d);

	// Asignación compuesta   ( +=, -=, *=, etc.)

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
	// Jerarquía nivel 13 - Operador coma ( , )
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
