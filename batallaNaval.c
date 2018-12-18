#include <stdio.h>

//https://github.com/Beatt/Batalla-Naval-en-C/blob/master/JimMarGab%20Proyecto.c
//http://programasenc.blogspot.com/2009/01/hundir-la-flota.html
//http://martindec.blogspot.com/2011/01/batalla-naval-en-c.html

void matriz_usuario(char mu[5][4], apuntador[3]){
	int i, j;
	int asignacion_a = 65;
	for(i=0; i< 5; i++){
		for ( j = 0; j < 4; j++){
			
			mu[i][j] = asignacion_a++;
			if(apuntador[0] == mu[i][j]){
				mu[i][j] = 42;
			}
			if(apuntador[1] == mu[i][j]){
				mu[i][j] = 42;
			}
			if(apuntador[2] == mu[i][j]){
				mu[i][j] = 42;
			}
		}
	}
}

void imprime(char mu[5][4]){
	int i, j;
	for ( i = 0; i < 5; i++)	{
		for (j = 0; j < 4; j++){
			printf("|%c|\t", mu[i][j]);
		}
		printf("\n\n");
	}
}

void matriz_virtual(char mv[5][4]){
	int i, j;
	int asignacion_a = 65;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			mv[i][j] = asignacion_a++;	
		}
	}
}

void m_letras(char m_p[5][4]){
	int i, j;
	asignacion_a=65;
	for(i = 0; i < 5; i++){
		for( j = 0; j < 4; j++){
			m_p[i][j] = asignacion_a++;
		}
	}
}

void nombre(char name[20]){
	printf("Ingrese su nombre: ");
	gets(name);
	system("cls");
	printf("*********************\n Nombre: %s \n*****************\n", name);	
}

void barcos(char b[3]){
	int i, anterior;
	int a = 1;
	for(i=0; i<3;){
		printf("Ingrese la ubicacion del barco %i: ", a);
		scanf("%c", &b[i]);
		fflush(stdin);
		if(b[i] >= 65 && b[i] <= 84){
			if(b[i] >=65 && b[i] <= 90);
			else b[i] = b[i] - 32;
			if (b[i]! = anterior){
				anterior = b[i];
				i++;
				a++;
			}
			else printf("Ingreso un barco en otra posicion \n");
		}
		else printf("Opcion incorrecta, ingrese una letra que se encuentre dentro del tablero\n");
	}
}


void Maquina_tiro_aleatorio(char mu[5][4], int *x, int *j){
	int i, y;
	srand(time(NULL));
	do{
		*x = rand() % 5;
		*j = rand() % 4;
	}
	while( mu[*x][*j] == 5 || mu[*x][*j] == 1);
}

int tabla(){
	int fallo = 5;
	int asterisco = 42;
	int carita = 1;
	printf("****************\n%c=BARCO  %c=BARCO HUNDIDO   %cTIRO FALLADO\n**************\n\n", asterisco, carita, fallo);	
}

void aleatorio(char ale[3]){
	int i, numero;
	srand(time(NULL));
	do{
		i=0
		for(; i<3;i++){
			numero = srand()%20+65;
			ale[i] = numero;
		}
	}
	while(ale[0] == ale[1] || ale[0] == ale[2] || ale[1] == ale[2]);
}

int menu(){
	int p;
	printf("Bienvenido\n ****************\n");
	printf("***************************\nAl Juego de Batalla Naval\n*****************************\n");
    printf("1.- <<<<<<<Jugar>>>>>>>>>>>>\n");
    printf("2.- <<<<<Como Jugar>>>>>>>>>>>>\n");
    printf("3.-<<<<<<<Salir>>>>>>>>>>>>>>\n");
    printf("Por favor ingrese una opcion: ");
    scanf("%i",&p);
    fflush(stdin);
	return p;
}

void como_jugar(){
	    printf("");
    printf("*****************************\n\n\t\t\t<<<<MODO DE JUGAR>>>>\n\n1<<COLOCA TRES BARCOS EN DIFERENTES POSICIONES\nTU TABLERO SE ENCUENTRA EN LA PARTE DE ARRIBA>>\n");
    printf("\n2<<DERRIBA LOS BARCOS DE LA MAQUINA [-TABLERO DE ABAJO-]\nATACANDO UNA POSICION [-LETRA-]\nDONDE CREAS QUE SE ENCUENTRE UN BARCO>>\n");
    printf("\n3<<EL JUEGO TERMINA HASTA QUE ALGUNO DE LOS DOS HALLA \nHUNDIDO TRES BARCOS>>\n");
    printf("\n\t\t    NOTA: OBSERVA QUE LA TECLA BLOQ MAYUS SE ENCUENTRE ENCENDIDA\n");
	tabla();
}

void lanzamiento_usuario(char mv[5][4], char mu[5][4], char m_op[5][4], char name[20], ale[3]){
	char k, t, m, i, anterior;
	int p=0, c=0, x=0, C=0, ne=0;
	do{
		if(p==0){
			printf("INGRESE EL PUNTO DONDE DESEA ATACAR: ");
			scanf("%s", &k);
			if(k >= 65 && k <= 84){
				if(k == ale[0] || k == ale[1] || ale[3]){
					if(k!=anterior){
						printf("Barco hundido\n");
					}
				}
			}
		}
	}
}