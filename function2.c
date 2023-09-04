
#include<stdio.h>



int multiplica(int N1, int N2) //multiplica recebe N1,N2 e retorna um int
{
  int resultado;
  resultado = N1 * N2;
  return(resultado); //retornando o valor para main
}


void imprime_cabec(void)
{
  printf("******************************\n");   
  printf("*       LINGUAGEM C          *\n");
  printf("******************************\n");   

  return; /* retorno de uma funcao void  */
}


void fimPrograma(void)
{
  printf("******************************\n");   
  printf("*       END OF PROGRAM  *\n");
  printf("******************************\n");   

  return; /* retorno de uma funcao void  */
}



/******************* funcao principal (main) *********************/
int main(void)
{
	
	imprime_cabec();
	
  int V1, V2, resultado;
  printf("Digite o primeiro valor:");
  scanf("%d", &V1);
  printf("Digite o segundo valor:");
  scanf("%d", &V2);
  
  //chama a função e recebe o retorno
  resultado = multiplica(V1,V2);
  
  printf("Resultado = %d\n", resultado);
  
  fimPrograma();
  
  getch();
  return 0;
}

 


