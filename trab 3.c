#include <stdio.h>
#include <locale.h>

int main()
{
	int num1, num2, opc=1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nOlá, meu nome JACKSON DA ROCHA NASCIMENTO Eu vou calcular a soma dos numeros não primos\n");
	
	while (opc<=1) 
	{
	
		do
		{
			printf("\nEntre com o primeiro número: ");
			scanf("%d", &num1);
		
	
		printf("\nEntre com o segundo número: ");
			scanf("%d", &num2);
        }
		while(num1,num2<=0);

		if ( ((num1==1||num2==1) || (num1%2 == 0||num2%2 == 0) || (num1%3 == 0||num2%3 == 0) || (num1%3 == 0||num2%5 == 0) || (num1%7 == 0||num2%7 == 0)) && !((num1==2||num2==2) || (num1==3||num2==3) || (num1==5||num2==5) || (num1==7||num2==7)) )


          
	printf("%d + %d = %d", num1, num2, num1 + num2);	
	
	else
	
	printf("\nUm ou ambos os números digitados é primo. Tente novamente.");

		printf("\nDeseja continuar (1-Sim / 2-Não) ? ");
		scanf("%d", &opc);
	}
	
	if (opc=2) 
	
	printf("\nObrigado, pelo teste até mais\n\n");

	system("pause");
	return 0;
}
