//CHAMPIONS LEAGE
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

	void gotoxy(int,int);
	int main(){

	setlocale(LC_ALL,"Spanish");
	
	int oct, cuar, semi, f, ch, op, i;
	
	for(i=0;i<=22;i++){
	gotoxy(196,i);printf("*\n");}
	gotoxy(50,0);printf("---Sistema de consulta de clasificaciíon de la Champions Leage 2018-2019---");
	gotoxy(0,1);printf("1.Octavos de final\n2.Cuartos de final\n3.Semifinal\n4.Final\n5.Campeón\n6.Salir del Menú");
	gotoxy(0,8);printf("Eliga el número de la opción que quiera saber:");
	scanf("%d",&op);
	for(i=0;i<=196;i++){
	gotoxy(i,8);printf("*");}
	
	switch(op){
		case 1:
			gotoxy(50,10);printf("---LA TABLA DE CONTRICANTES DE LOS OCTAVOS DE FINAL ES LA SUGUIENTE---");
			gotoxy(25,12);printf("1. SCHALKE VS MANCHESTER CITY");
			gotoxy(25,13);printf("2. ATLÉTICO VS JUVENTUS");
			gotoxy(25,14);printf("3. MANCHESTER U. VS PARIS SG");
			gotoxy(25,15);printf("4. TOTTENHAM VS DORMOUND");
			gotoxy(25,16);printf("5. LYON VS BARCELONA");
			gotoxy(25,17);printf("6. ROMA VS OPORTO");
			gotoxy(25,18);printf("7. AJAX VS REAL MADRID");
			gotoxy(25,19);printf("8. LIVERPOOL VS BAYERN MÚNICH");
			gotoxy(50,21);printf("---GRACIAS POR SU PREFERENCIA");
			for(i=0;i<=196;i++){
			gotoxy(i,22);printf("*");}
			break;
	}
	switch(op){
		case 2:
			gotoxy(50,10);printf("---LA TABLA DE CONTRICANTES DE LOS OCTAVOS DE FINAL ES LA SUGUIENTE---");
			gotoxy(25,12);printf("1. BARCELONA VS ROMA");
			gotoxy(25,13);printf("2. SEVILLA VS BAYERN MÚNICH");
			gotoxy(25,14);printf("3. JUVENTUS VS REAL MADRID");
			gotoxy(25,15);printf("4. LIVERPOOL VS MANCHESTER C");
			gotoxy(50,16);printf("---GRACIAS POR SU PREFERENCIA");
			for(i=0;i<=196;i++){
			gotoxy(i,17);printf("*");}
			break;
	}
	switch(op){
		case 3:
		gotoxy(25,12);printf("1. LIVERPOOL VS ROMA");
		gotoxy(25,13);printf("2. BAYERN MÚNICH VS REAL MADRID");
		gotoxy(50,14);printf("---GRACIAS POR SU PREFERENCIA");
		for(i=0;i<=196;i++){
		gotoxy(i,15);printf("*");}
		break;
	}
	switch(op){
		case 4:
			gotoxy(25,12);printf("1. REAL MADRID VS LIVERPOOL");
			gotoxy(50,13);printf("---GRACIAS POR SU PREFERENCIA");
			for(i=0;i<=196;i++){
			gotoxy(i,14);printf("*");}
			break;
	}
	switch(op){
		case 5: 
		gotoxy(25,12);printf("¡¡REAL MADRID!!");
		gotoxy(50,13);printf("---GRACIAS POR SU PREFERENCIA");
		for(i=0;i<=196;i++){
		gotoxy(i,14);printf("*");}
		break;
	}
	switch(op){
		case 6:
		gotoxy(50,12);printf("---GRACIAS POR SU PREFERENCIA");		
		for(i=0;i<=196;i++){
		gotoxy(i,13);printf("*");}
		break;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	return 0;
}

void gotoxy(int x, int y){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle (STD_OUTPUT_HANDLE);
	Coordenadas.X= x;
	Coordenadas.Y= y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}

void Centrar_Texto(const char *texto){
	
}
