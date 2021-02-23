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

int main()
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


	system("pause");
	return 0;
}
