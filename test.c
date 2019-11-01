#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Karen Aracely Flores Martinez, 
gpo:006, 01/11/19, 
horario:Viernes 7:00 a 9:00am
matrícula:1866124*/


int main() {
	/************************************ACTIVIDAD 1***************************************************/
	int a=0,e=0,i=0,o=0,u=0,k,j;/**/
	int *b,*c,*d,*f,*g;
	b=&a, c=&e, d=&i, f=&o, g=&u;
	char frase[50];
	printf("Ingrese una frase: ");
	gets(frase);
	k=strlen(frase);
	for(j=0;j<k;j++){
		if(frase[j]=='a'){
			a=a+1;
		}else if(frase[j]=='e'){
			e=e+1;
		}else if(frase[j]=='i'){
			i=i+1;
		}else if(frase[j]=='o'){
			o=o+1;
		}else if(frase[j]=='u'){
			u=u+1;
		}
	}

	printf("A= %d  E=%d  I= %d  O=%d  U= %d ",*b,*c,*d,*f,*g);
	
	printf("\n\n\n");
	
	/************************************ACTIVIDAD 2***************************************************/
	int br,ka;/*Primero declaramos nuestras variables*/
	br=10, ka=13;/*Les damos un valor a dichas variables*/
	int *ya,*re;/*Declaramos los apuntadores*/
	ya=&br, re=&ka;/*Y les damos la direccion a ellos*/
	printf("%d",*ya+*re);/*Ahora imprimimos la suma de ellos*/
	return 0;
}
