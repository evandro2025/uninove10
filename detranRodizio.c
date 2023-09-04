#include <stdio.h>
int main(){
int placa;
	printf("============Bem Vindo ao DETRANSP=============\n");
	printf("informe sua placa: ");
	//PBA2019
	//BRA2E17
	scanf("%d", &placa);
	printf("Hoje eh segunda=feira");
	printf("\nsua placa alfanumerica eh final %d \n", placa);
	if(placa == 1 | placa == 2){
		printf("\nVoce nao pode rodar os periodos de 7h aas 10h nem  de 17h aas 20h");
	}else{
		printf("Voce nao estah no rodizio");
	}
	
	printf("\n\n==qual biblioteca fornece dia da semana?\n==========Volte Sempre=============");
	printf("\n============VOLTE SEMPRE=============\n");
	getch();
	return 0;


}
	

/*
Dia 	        segunda   terça 	quarta 	quinta 	sexta
Final da placa 	1 e 2 	  3 e 4 	5 e 6 	7 e 8 	9 e 0

das 7h às 10h            e          das 17h às 20h.

input informe sua placa
que horas sao o input?
SE DIA = SEGUNDA FEIRA; HORA 7  = 10; & PLACA = 1 & 2; NAO RODA

process

Dia da semana 	Dígitos proibidos
Segunda-feira 	1 e 2
Terça-feira 	3 e 4
Quarta-feira 	5 e 6
Quinta-feira 	7 e 8
Sexta-feira 	9 e 0 

verify

output






*/
 
