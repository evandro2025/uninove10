
/*

Tel. (11) 3477-5176
treinamento@intellectuale.com.br

    Home
    Nossa Escola
    Curso Presencial

Funções em C

Por: Eduardo Casavella

Definição de Função

Uma função nada mais é do que uma subrotina usada em um programa.

Na linguagem C, denominamos função a um conjunto de comandos que realiza uma tarefa específica em um módulo dependente de código.

A função é referenciada pelo programa principal através do nome atribuído a ela.

A utilização de funções visa modularizar um programa, o que é muito comum em programação estruturada.

Desta forma podemos dividir um programa em várias partes, no qual cada função realiza uma tarefa bem definida.

Esqueleto de uma função
tipo_de_retorno nome_da_função (listagem de parâmetros)

{
   instruções;
   retorno_da_função;
}

Parâmetros de uma função

Os parâmetros são as variáveis declaradas diretamente no cabeçalho da função.

A finalidade dos parâmetros é fazer a comunicação entre as funções e a função principal.

Chamamos de passagem de parâmetros a passagem de valores entre as funções.

Exemplo de programa usando função em C


*/
#include <stdio.h>
#include <conio.h>

/*
Nome da função: multiplica
recebe como parâmetos dois valores inteiros (N1,N2)
objetivo: multiplicar os valores recebidos nos parâmetros.
retorno: um parâmetro inteiro (res) contendo o resultado
*/
int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}
/******************* função principal (main) *********************/
int main(void)
{
  int V1, V2, resultado;
  printf("Digite o primeiro valor:\n");
  scanf("%d", &V1);
  printf("Digite o segundo valor:\n");
  scanf("%d", &V2);
  
  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  
  printf("Resultado = %d\n", resultado);
  
 
  printf("Resultado = %d\n", multiplica(4,4));
  
  
  printf("Resultado = %d\n", multiplica(16,16));
  
  
  printf("Resultado = %d\n", multiplica(32,32));

  
  printf("Resultado = %d\n", multiplica(64,64));

  
  return 0;
}

 

 