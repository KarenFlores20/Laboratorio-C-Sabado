#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Karen Aracely Flores Martinez, 
gpo:006, 01/11/19, 
horario:Viernes 7:00 a 9:00am
matrícula:1866124*/


int main() {
	/************************************ACTIVIDAD 1***************************************************/
	int a=0,e=0,i=0,o=0,u=0,k,j;/*Declaramos las variables para guardar como contadores*/
	int *b,*c,*d,*f,*g;/*Declaramos los punteros*/
	b=&a, c=&e, d=&i, f=&o, g=&u;/*localizamos las posiciones de los punteros*/
	char frase[50];/*Hacemos la cadena para la frase*/
	printf("Ingrese una frase: ");/*Le pedimos una frase al usuario*/
	gets(frase);/*La escaneamos*/
	k=strlen(frase);/*Contamos la longitud de la frase y la guardamos en una variable*/
	for(j=0;j<k;j++){/*Hacemos el for para contar las vocales*/
		if(frase[j]=='a'||frase[j]=='A'){/*y empezamos a contar*/
			a=a+1;
		}else if(frase[j]=='e'||frase[j]=='E'){
			e=e+1;
		}else if(frase[j]=='i'||frase[j]=='I'){
			i=i+1;
		}else if(frase[j]=='o'||frase[j]=='O'){
			o=o+1;
		}else if(frase[j]=='u'||frase[j]=='U'){
			u=u+1;
		}
	}

	printf("A= %d  E=%d  I= %d  O=%d  U= %d ",*b,*c,*d,*f,*g);/*Una vez ya contadas todo, las imprimiremos*/
	
	printf("\n\n\n");
	
	/************************************ACTIVIDAD 2***************************************************/
	int br,ka;/*Primero declaramos nuestras variables*/
	br=10, ka=13;/*Les damos un valor a dichas variables*/
	int *ya,*re;/*Declaramos los apuntadores*/
	ya=&br, re=&ka;/*Y les damos la direccion a ellos*/
	printf("%d",*ya+*re);/*Ahora imprimimos la suma de ellos*/
	return 0;
}
