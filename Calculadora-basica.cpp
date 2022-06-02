#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

void limpatela(){
	system("CLS");
}

float soma(float a, float b){     // Declara��o da vari�vel da adi��o 
	float r;
	r=a+b;
	return r;
}

float subtrai(float a, float b){   // Declara��o da vari�vel da subtra��o 
	float r;
	r=a-b;
	return r;
}

float multiplica(float a, float b){ // Declara��o da vari�vel de multiplica��o 
	float r;
	r=a*b;
	return r;
}

float divide(float a, float b){      // Declara��o da vari�vel da divis�o 
	float r;
	r=a/b;
	return r;
}


void menu(){
	int op;
	int x;
	float num1, num2;
	int y,z;
	printf("-----------Calculadora B�sica-----------\n"); //  Demonstrar o menu principal
	printf("Selecione uma opera��o:\n\n");
	printf("1-Adi��o\n");
	printf("2-Subtra��o\n");
	printf("3-Multiplica��o\n");
	printf("4-Divis�o\n");
	scanf("%d",&op);
	limpatela();
	switch(op){
		
		//ADI��O
		
		case 1:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da soma entre %.2f e %.2f �: %.2f",num1,num2,soma(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
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
			
		//SUBTRA��O 
		
		case 2:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da subtra��o entre %.2f e %.2f �: %.2f",num1,num2,subtrai(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
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
			
		//MULTIPLICA��O
	
		case 3:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			printf("O resultado da multiplica��o entre %.2f e %.2f �: %.2f",num1,num2,multiplica(num1, num2));
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
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
		//divis�o
		case 4:
			printf("Digite o primeiro valor: ");
			scanf("%f",&num1);
			fflush(stdin);
			printf("Digite o segundo valor: ");
			scanf("%f",&num2);
			fflush(stdin);
			if(num2==0){
				printf("N�o � poss�vel realizar divis�o por 0.");
			}else{
				printf("O resultado da divis�o entre %.2f e %.2f �: %.2f",num1,num2,divide(num1, num2));
			}
			printf("\n\nDigite 1 para realizar uma nova opera��o: ");
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
