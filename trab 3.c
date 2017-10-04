#include <stdio.h>
#include <locale.h>

int main()
{
	int num, num2, p=1;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nOlá, meu nome JACKSON DA ROCHA NASCIMENTO Eu vou calcular a soma dos numeros não primos\n");
	
	while (p<=1) 
	{	
	
		do
		{
			printf("\n\nEntre com o primeiro número: ");
			scanf("%d", &num);		
        }
		while((num<=0) && ((num==1) || (num%2>0) || (num%3>0) || (num%5>0) || (num%7>0)));
		
		if ( ((num%2 > 0) || (num%3 > 0) || (num%5 > 0) || (num%7 > 0)))
		printf("\n%d não é um número válido, pois é primo.", num);
		
		else
        
		do
        {
	        do
	        {
				printf("\nEntre com o segundo número: ");
				scanf("%d", &num2);
			}
			while((num<=0) && ((num==1) || (num%2>0) || (num%3>0) || (num%5>0) || (num%7>0)));
		
			if ( ((num2==1) || (num2%2 == 0) || (num2%3 == 0) || (num2%5 == 0) || (num2%7 == 0)) && !((num2==2) || (num2==3) || (num2==5) || (num2==7)) )
			printf("\n%d não é um número válido, pois é primo.", num2);
			
			else
			printf("\n%d + %d = %d", num, num2, num + num2);   
		}
		while((num<=0) && ((num==1) || (num%2>0) || (num%3>0) || (num%5>0) || (num%7>0)));
        
		printf("\n\nDeseja continuar (1-Sim / 2-Não) ? ");
		scanf("%d", &p);
	}
	
	if (p=2)
	
	printf("\nObrigado, até a próxima!\n\n");

	system("pause");
	return 0;
}

