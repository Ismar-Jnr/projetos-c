#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Defina se o numero que o usuario digitar é primo ou não*/
int main(int argc, char *argv[]) {
	
	int num, primo = 1;
	int i =2;
	
	printf("Digite um numero\n");
	scanf("%i", &num);
	
	if (num<=1){
		primo = 0; //numeros menores ou iguais a 1 ñ são primos
		
	}else {
		for( i = 2; i <= (num/2); i++);{
			if (num % i == 0){
				primo = 0; //numeros divisiveis por outros que nao sejam 1 e ele mesmo não são primos
				
			}
		}
	}
	
	if (primo == 0){
		printf("%i e um numero primo.\n", num);
	}else {
		printf("%i nao e um numero primo", num);
	}
	
	
	return 0;
}
