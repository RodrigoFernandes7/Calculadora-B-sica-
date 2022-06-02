#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void limpatela(){
	system("CLS");
}

float soma(float a, float b){     // Declaração da variável da adição 
	float r;
	r=a+b;
	return r;
}

float subtrai(float a, float b){   // Declaração da variável da subtração 
	float r;
	r=a-b;
	return r;
}

float multiplica(float a, float b){ // Declaração da variável de multiplicação 
	float r;
	r=a*b;
	return r;
}

float divide(float a, float b){      // Declaração da variável da divisão 
	float r;
	r=a/b;
	return r;
}


void menu(){
	int op;
	int x;
	float num1, num2;
	int y,z;
	printf("-----------Calculadora Básica-----------\n"); //  Demonstrar o menu principal
	printf("Selecione uma operação:\n\n");
	printf("1-Adição\n");
	printf("2-Subtração\n");
	printf("3-Multiplicação\n");
	printf("4-Divisão\n");
	scanf("%d",&op);
	limpatela();
	switch(op){
		
		//ADIÇÃO
		
		case 1:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da soma entre %.2f e %.2f é: %.2f",num1,num2,soma(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova operação: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
			
		//SUBTRAÇÃO 
		
		case 2:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da subtração entre %.2f e %.2f é: %.2f",num1,num2,subtrai(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova operação: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
			
		//MULTIPLICAÇÃO
	
		case 3:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da multiplicação entre %.2f e %.2f é: %.2f",num1,num2,multiplica(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova operação: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		//divisão
		case 4:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			if(num2==0){
				printf("Não é possível realizar divisão por 0.");
			}else{
				printf("O resultado da divisão entre %.2f e %.2f é: %.2f",num1,num2,divide(num1, num2));
			}
			printf("\n\nDigite 1 para realizar uma nova operação: ");
			scanf("%d",&x);
			fflush(stdin);
			if(x==1){
				limpatela();
				menu();
			}else{
				limpatela();
				printf("Arrivedercci.\n\n");
				system("pause");
			}
			break;
		
		default:
			menu();
			break;	
	}
}

int main(){
	setlocale(LC_ALL, "");
	menu();
}
