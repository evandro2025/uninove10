#include <stdio.h>
/*
comando cli linux:

*/
//int contador();
// este contador eh fornecido por:
// https://linguagemc.com.br/a-estrutura-de-repeticao-for-em-c/
int main()
{

  /////////////////////////////////////////
   //Declaração das variáveis
  float nota1, nota2, media;
  int alu;
  
  printf("---- Calculando a media para 10 alunos -----\n\n");
  
  //Entrada de dados
  for (alu = 1; alu<=3; alu++)
  {
    printf("Digite a primeira nota do aluno %d\n", alu);
    scanf("%f",&nota1);
  
    printf("Digite a segunda nota do aluno %d\n",alu);
    scanf("%f",&nota2);
  
    //Processamento
    media = (nota1 + nota2) / 2;
  
    //Saída
    printf("\nMedia do aluno %d = %.2f\n",alu,media);
    printf("--------------fim----------------------------\n\n");
  }
  //////////////////////////////////////////
 int frase;//variável de controle do loop
  
  for (frase = 1; frase <= 3; frase++)
  {
    printf("I master all programming languages includin C \n");
  }
  
  int contador; //variável de controle do loop
  int backcontador;
  
  for(contador = 1; contador <= 20; contador++)
  {
    printf("%d ", contador);
  }
  printf("\n");
   for(backcontador = 20; backcontador >= 1; backcontador--)
  {
    printf("%d ", backcontador);
  }
    
    float num1;
    float num2;

    printf("\nEnter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%f", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %f", num2);
    
    float soma =  num1 + num2;
    float sub =  num1 - num2;
    float multi =  num1 * num2;
    float div =  num1 / num2;
    
    printf("\nresultados= %.2f and %.2f and %.2f and %.2f ",soma, sub, multi, div);
getch();
    return 0;
}


