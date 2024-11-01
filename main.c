#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



float adicao(float a, float b) {
	return (a + b);
}

float subtracao(float a, float b) {
	return (a - b);
}

float multiplicacao(float a, float b) {
	return (a * b);
}

float divisao(float a, float b) {
	return (a / b);
}

float GetOneNumberFloatOfUser() {
	float number;

	printf("Digite um numero\n");
	scanf("%.2f", &number);

	return number;
}


float ShowCalculator() {

	float num1, num2;

	num1 = GetOneNumberFloatOfUser();
	num2 = GetOneNumberFloatOfUser();

	int option;
	printf("\n Digite uma opcao: \n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n", option);
	scanf("%d", &option);


	if(option == 1) { // adicao
		printf("O resultado: %f", adicao(num1, num2));
	} else if (option == 2) {// subtracao
		printf("O resultado: %f", subtracao(num1, num2));
	} else if (option == 3) {// multiplicacao
		printf("O resultado: %f", multiplicacao(num1, num2));
	} else if (option == 4) {// divisao
		printf("O resultado: %f", divisao(num1, num2));
	} else {
		printf("deu ruim: ");
	}

	return 1;

}

float questao1() {
	float num1, num2, res;
	num1 = GetOneNumberFloatOfUser();
	num2 = GetOneNumberFloatOfUser();

	res = adicao(num1, num2);
	printf("O resultado e: %f", res);

	return res;
}

float questao2() {
	float num1, res;
	num1 = GetOneNumberFloatOfUser();

	res = adicao(num1, 42);
	printf("O resultado do numero + 42 e: %f", res);

	return res;
}

float questao3() {
	float num1, res;
	num1 = GetOneNumberFloatOfUser();

	res = multiplicacao(num1, 10);
	printf("O resultado do numero vezes 10 e: %f", res);

	return res;
}

float sumFirstAndLastNumber(float a[]) {
	float result;
	result = adicao(a[0], a[2]);
	return result;
}

float sumOfTreeNumbers(float arr[]) {
	float result;

	result = adicao(arr[0], arr[1]);
	result = adicao(result, arr[2]);
	return result;
}

int CheckIfTheNumberIsOddOrEven(int num) {
	
	if (num % 2 == 0)  { //Par
		return 0;
	} else {
		return 1;
	}

}

int somaDosPositivos() {
	int num, i, sum;
	sum = 0;
	bool repetir;
	repetir = true;
			
	while (repetir) {
		printf("\n Digite um numero!");
		scanf("%d", &num);	
		
		if(num > 0) {
			sum += num;
		} else if (num == 0) {
			repetir = false;
		}
	}
	return sum;
}

int mediaDosPositivos() {
	int num, i, sum, count;
	sum = 0;
	count = 0;
	bool repetir = true;
			
	while (repetir) {
		printf("\n Digite um numero!");
		scanf("%d", &num);	
		
		if(num > 0) {
			sum += num;
			count++;
		} else if (num == 0) {
			repetir = false;
		}
	}
	return (sum / count);
}



int main() {
	
		int option;
		printf("\n Digite uma opcao: \n1-Somar dois numeros\n2-Somar um numero a 42\n3-Multiplicar por 10\n5-Somar 3 números\n6-Somar o primeiro e o ultimo\n7-Verificar se os numeros sao Impar ou Par\n8-Verificar qual o maior numero\n9-Verificar se o numero e positivo, negativo ou zero\n10-Verificar se o ano é bissexto\n11-Somar positivos até digitar 0\n12-Calcular Fatorial\n13-Calcular Medias\n", option);
		scanf("%d", &option);
	
		float arrNums[3];
		
		if(option == 1) {
			questao1();
		} else if (option == 2) {
			questao2();
		} else if (option == 3) {
			questao3();
		} else if (option == 5) {
			arrNums[0] = GetOneNumberFloatOfUser();
			arrNums[1] = GetOneNumberFloatOfUser();
			arrNums[2] = GetOneNumberFloatOfUser();
	
			printf("A soma dos tres numeros e: %f", sumOfTreeNumbers(arrNums));
			
		} else if (option == 6) { // Questao 6, somar o primeiro e o ultimo size 3
			arrNums[0] = GetOneNumberFloatOfUser();
			arrNums[1] = GetOneNumberFloatOfUser();
			arrNums[2] = GetOneNumberFloatOfUser();
	
			printf("A soma do primeiro e do ultimo e: %f", sumFirstAndLastNumber(arrNums));
			
		} else if (option == 7) { // Aula 02 - questao 1
			
			int i, qtt, number, oddOrEven;
			printf("\n Quantos numeros quer verificar se e impar ou par?");
			scanf("%d", &qtt);
			
			i = 0;
			
			for (i; i < qtt; i++) {
				printf("\n Digite o número!");
				scanf("%d", &number);
							
			   	oddOrEven = CheckIfTheNumberIsOddOrEven(number);
				if(oddOrEven == 0 && number != 0) {
					printf("O numero %d e Par\n", number);
				} else if(oddOrEven == 0 && number == 0) {
					printf("O numero e zero ", number);
				} else {
					printf("O numero %d e Impar\n", number);
				}
			}
			
			
		    return 1;
		    
			
		} else if (option == 8) { // Compara o maior de dois números
			int num1, num2;
			
			printf("\n Digite o número!");
			scanf("%d", &num1);
			
			printf("\n Digite outo número!");
			scanf("%d", &num2);
			
			if(num1 == num2) {
				printf("Os numeros sao iguais: %d", num1);
			} else if(num1 > num2) {
				printf("O numero maior e: %d", num1);
			} else {
				printf("O numero maior e: %d", num2);
			}
		    return 1;
		    
			
		}  else if (option == 9) { // positivo, neg ou 0
			int num;
			
			printf("\n Digite o número!");
			scanf("%d", &num);
			
			if(num == 0) {
				printf("O numero e 0");
			} else if(num > 0) {
				printf("O numero e positivo");
			} else if (num < 0) {
		 		printf("O numero e negativo");
			}
		    return 1;
		    
			
		} else if (option == 10) { // ano bissexto
			int year;
			
			printf("\n Digite o ano!");
			scanf("%d", &year);
			
			
			if(year % 4 == 0) {
				if(year % 100 == 0) {
					if(year % 400 == 0) {
						printf("O ano e bissexto: %d", year);
					} else {
						printf("O ano nao e bissexto: %d", year);
					}
				} else {
					printf("O ano e bissexto: %d", year);
				}
				
			}
			return 1;
			
		} else if (option == 11) { // Soma dos positivos
		    printf("\nA soma total dos numeros positivos digitados e: %d", somaDosPositivos());
			
		} else if (option == 12) { // Calcular Fatorial
			int num, i, result;
			result = 0;
			
			printf("\n Digite um numero para descobrir o fatorial!");
			scanf("%d", &num);
			
			if (num <= 0) {
				printf("\n Nao e possivel calcular o fatorial desse numero!");
				return -1;
			}
			
			result = num;
			for (i = (num - 1); i <= num && i > 0; i--) {
				result = result * i;				
			}
			
			printf("\nO fatorial de %d", num);
			printf(" e: %d", result);
			
		} else if (option == 13) { // Calcular Medias
			int media;
			
			media = mediaDosPositivos();
			
			printf("\n A media dos positivos e: %d", media);
			
			
		} else if (option == 14) { // Contar multiplos de 3
			int num, i, sum, count;
			i = 0;
			sum = 0;
			count = 0;
					
			for (i; i < 15; i++) {
				printf("\n Digite um numero!");
				scanf("%d", &num);	
				
				if(num % 3 == 0) {
					count++;
				} else if (num == 0) {
					return -1;
				}
			}
			
			printf("\n Quantidade de numeros multiplos de Tres: %d", count);
			
		} else if (option == 15) { // Contar algarismos
			int sum, num;
			sum = 0;
			printf("\n Digite um numero!");
			scanf("%d", &num);	
				
			while (num > 0) {
		        int digit = num % 10; // Obtém o último algarismo
		        sum += digit;
		        num = num / 10;    // Remove o último algarismo
		    }
		    			
			printf("\n A Soma e: %d", sum);
			
		} else if (option == 16) { // Contar algarismos
			int sum, num, count;
			count = 0;
			sum = 0;
			printf("\n Digite um numero!");
			scanf("%d", &num);	
				
			while (num > 0) {
		        int digit = num % 10; 
		        sum += digit;
		        num /= 10;  
				count++;  
		    }
		    			
			printf("\n O numero possui %d digitos", count);
			
		} else {
			printf("deu ruim: ");
		}
	
	
}
