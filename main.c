#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/***********************************ACTIVIDAD 1*******************************************************/
int main() {
	char texto[40];/*Declaramos el arreglo*/
	int  n,l,e=0;/*Y declaramos las variables que utilizaremos*/
	int error = 0;
	printf("Ingrese una palabra(sin espacios): ");/*Le pediremos al usuario que ingrese una palabra*/
	gets(texto);/*Usamos gets para que el usuario ingrese la palabra*/
	n=strlen(texto);/*Con esta opcion el arreglo ira desde su espacio nulo*/
	e=n;
	for(l=0;l<e;l++){/*Usamos for para repetir la letra */
		printf("letra en %d: %c Letra en %d: %c \n",l,texto[l],n, texto[n-1]);
		if(texto[l] != texto[n-1]){/*Hacemos que si el texto es igual */
			error = 1;/*Entonces marcara error con 1*/
		}
		n--;
	}
	if(error == 1){/*SI el valor es 1 entonces...*/
		printf("No es un palindromo");/*IMprimira que es un palindromo*/
	}else{
		printf("Si es un palindromo");
	}
/***********************************ACTIVIDAD 2*******************************************************/
	printf("\n\n\n");
	printf("ACTIVIDAD 2\n\n");
	char array[20],i;/*Declaramos el arreglo y la i*/
	int  cont=0,j;/*Y declaramos las variables que utilizaremos*/
	printf("Introduzca una palabra con 20 caracteres en mayusculas: ");/*Le pedimos al usuario que ingrese la palabra*/
	gets(array);/*Usamos gets para que el usuario ingrese la palabra*/
	i=65;/*Hacemos i = 65 que toma un valor de A*/
		for(j=0;j<20;j++){/*Ahora vamos a capturar lo que hay en la casilla 0*/
			if(array[j]==i){/*Y verificamos si es igual a A*/
				cont=cont+1;/*SI es asi entonces empezara a contar la cantidad de A que hay*/
			}
		}if(cont!=0){/*Aqui damos en claro para que solo imprima si hay letras del abecedario*/
		   printf("%c: %d\n",i,cont);/*Si es asi imprimira esto*/
		}
		 i++;/*Ahora incrementaremos la i para que tome un valor de B, y asi sucesivamente*/
		 cont=0;/*Y hacemos cont 0 de nuevo para que no se repita*/
		 /*Hacemos ese paso 26 veces que es el numero de letras que hay*/
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
		 for(j=0;j<20;j++){
			if(array[j]==i){
				cont=cont+1;
			}
		}if(cont!=0){
		   printf("%c: %d\n",i,cont);	
		}
		 i++;
		 cont=0;
	return 0;
}
