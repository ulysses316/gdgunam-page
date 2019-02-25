#include<stdio.h>
char historial[100];
char arr_abc[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
int desplazamiento=0;
char codificar();
char decodificar();
char recuperar();
main(){
	int opc=0,salir=1;
	do{
	printf("¿Que deseas hacer? \n");
	printf("1-Codificar \n");
	printf("2-Decodificar \n");
	printf("3-Recuperar texto original \n");
	printf("4-Salir \n");
	scanf("%d",&opc);
	switch(opc){
		case 1:

			codificar();
		break;
		case 2:
			decodificar();
		break;
		case 3:
			recuperar();
		break;
		case 4:
			printf("¿Seguro que deseas salir? \n");
			printf("0-Si \n");
			printf("1-No \n");
			scanf("%d",&salir);
			if(salir!=0 && salir!=1){
				printf("Esa opcion es invalida \n");
				salir=1;
			} else{
				printf("Entendido \n");
			}
		break;

		default:
			printf("No es una opcion valida \n");
	}
	}while(salir==1);
	/*Aqui se encontrara el codigo para el historial de loque el usuario realizo*/
	system("PAUSE");
	return 0;

}


char codificar () {
	char arr_palabra[100];
	    printf ("CODIFICAR \n");
	    printf("¿Que desplazamiento? \n");
	    scanf("%d",&desplazamiento);
	    printf("Introduzca la palabra en minusculas que desea codificar \n");
	    gets(arr_palabra);
		gets(historial);
	for(int j=0;j<100;j++){
		for(int i=0;  i <26;i++){
	    if(historial[j]==arr_abc[i]){
	    	printf("%c",arr_abc[i+desplazamiento]);
		}
	}

	}
	printf("\n");
	printf("\n");
}
char decodificar(){
	char arr_palabra[100];
	    printf ("DECODIFICAR \n");
	    printf("¿Que desplazamiento? \n");
	    scanf("%d",&desplazamiento);
	    printf("Introduzca la palabra en minusculas que desea decodificar \n");
	    gets(arr_palabra);
		gets(historial);
	for(int j=0;j<100;j++){
		for(int i=0;  i <26;i++){
	    if(historial[j]==arr_abc[i]){
	    	printf("%c",arr_abc[i-desplazamiento]);
		}

	}

	}
	printf("\n");
	printf("\n");
}
char recuperar(){
	char arr_palabra[100];
	printf ("RECUPERAR TEXTO ORIGINAL\n");
	/*printf("¿Que desplazamiento? \n");
	scanf("%d",&desplazamiento);*/
	printf("Introduzca la palabra que desea ocultar \n");
	gets(arr_palabra);
	gets(historial);
	for(int j=0;j<100;j++){
		for(int i=0;  i <26;i++){
			if(historial[j]==arr_abc[i]){
				printf("%c",arr_abc[i+3]);
			}

		}

	}
	printf("\n");
	printf("\n");
}