#include <stdio.h>

int main()
{
    float num1;
    float num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%f", &num2);

    printf("num1 = %2.f\n", num1);
    printf("num2 = %2.f", num2);
    
    // add a jump condition at this point
    if(num1 > num2)
    {
    
    float soma =  num1 + num2;
    float sub =  num1 - num2;
    float multi =  num1 * num2;
    float div =  num1 / num2;
    
    printf("\nresultados= %2.f and %2.f and %2.f and %2.f \n ",soma, sub, multi, div);
    	
	}else{
		printf("\nJump forward to the AND Draw something");
	}
    
    getch();

    return 0;
}


