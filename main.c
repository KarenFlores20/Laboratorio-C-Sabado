#include <stdio.h>
#include <stdlib.h>
/*Karen Aracely Flores Martinez, gpo:006, 30/08/19, horario:Viernes 7:00 a 9:00am
matrícula:1866124*/

/***********************************ACTIVIDAD 1*******************************************************/

int main()
{
	int n=0, sum=0, i=0; /*Aquí vamos a declarar las variables */
	char c;/*Declaramos el caracter*/
	printf("Programa que suma una cantidad deseada de numeros.\n");
	printf("Ingrese un numero: ");/*Le pedimos al usuario que introduzca los numeros que desee*/
	scanf("%d", &n);/*escaneamos los numeros, que sera lo que el usuario coloque*/
	sum=sum+n;/*Vamos sumando los numeros que ya tenemos*/
	do/*Usamos un do para que nuestro programa funcione como mientras*/
	{
		printf("Desea introducir otro numero?(s/n): ");/*Preguntamos si querrá añadir otro*/
		fflush(stdin);/*Usamos esto para reiniciar el scanf*/
		scanf("%c", &c);/*escaneamos los numeros, que sera lo que el usuario coloque*/
		if(c=='s')/*Utilizamos una condicion para saber si el usuario añadio s o n*/
		{
		i=1;/*Mientras nuestra i sea 1 seguira avanzando*/
		printf("Introduzca otro numero: ");/*Le pedimos al usuario otro número*/
		fflush(stdin);/*Usamos esto para reiniciar el scanf*/
		scanf("%d", &n);/*escaneamos los numeros, que sera lo que el usuario coloque*/
		sum=sum+n;	/*Vamos sumando los numeros que ya tenemos*/
		}
		else 
		{
		i=0;/*Cuando el usuario coloque n el programa dejara de funcionar y...*/
		}
	}while(i==1);
	printf("La suma de los numeros es: %d", sum);/*Imprimirá la suma de la cantidad de números agregados*/
	getch();
	
/***********************************ACTIVIDAD 2*******************************************************/
   /*Para que el programa ejecutable funcione debemos cambiar el nombre de las variables*/
    int m=0, sum2=0, j=0;/*Aquí vamos a declarar las variables */
	char k; /*Declaramos el caracter*/
	printf("\n\nPrograma que suma una cantidad deseada de numeros.\n");
	printf("Ingrese un numero: ");/*Le pedimos al usuario que introduzca los numeros que desee*/
	scanf("%d", &m);/*escaneamos los numeros, que sera lo que el usuario coloque*/
	sum2=sum2+m;/*Vamos sumando los numeros que ya tenemos*/
	do/*Usamos un do para que nuestro programa funcione como mientras*/
	{
		printf("Desea introducir otro numero?(S/N): ");/*Preguntamos si querrá añadir otro*/
		fflush(stdin);/*Usamos esto para reiniciar el scanf*/
		scanf("%c", &k);/*escaneamos los numeros, que sera lo que el usuario coloque*/
		if(k=='S')/*Utilizamos una condicion para saber si el usuario añadio S o N*/
		{
		j=1;/*Mientras nuestra j sea 1 seguira avanzando*/
		printf("Introduzca otro numero: ");/*Le pedimos al usuario otro número*/
		fflush(stdin);/*Usamos esto para reiniciar el scanf*/
		scanf("%d", &m);/*escaneamos los numeros, que sera lo que el usuario coloque*/
		if(m>0&&m<100) /*Con esta condicion le prohibimos al usuario ingresar un numero abajo de 0 y arriba de 100*/
		sum2=sum2+m;/*Vamos sumando los numeros que ya tenemos*/
		else 
		{
		j=0;/*Cuando el usuario ingrese un numero menor que 0 y mayor que 100 la j tendra un valor de 0 lo que acabará el programa*/
		printf("Numero fuera de rango.\n");
		}
		}
		else j=0;/*Cuando el usuario coloque n el programa dejara de funcionar y...*/
	}while(j==1);
	printf("La suma de los numeros es: %d", sum2);/*Imprimirá la suma de la cantidad de números agregados*/
	getch();
		return 0;
}
