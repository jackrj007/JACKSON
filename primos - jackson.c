/****************************************************
* Trab 2 : Numeros Primos
* Nome: Jackson da Rocha Nascimento
* Matrícula: 0050015116
* Professor: Alex Salgado
*****************************************************/

#include <stdio.h> 

int main (void) 

{ 
	int i, num, opc=1, teste = 0; 
	
	printf("\nOla, meu nome eh Jackson da Rocha e vou calcular numeros primos.\n"); // Mensagem de saudação.

	while (opc<=1) // Início do loop - "Deseja continuar (1-Sim / 2-Nao) ?".
	{	
		do // Início do loop - Entrada do número apenas positivo.
		{
			printf ("\nEntre com um numero positivo:  "); 
	
			if (scanf ("%d", &num) != 1) 
			return -1; 
		}
		while(num<=0); // Fechamento do loop - Entrada do número apenas positivo.
	
		for (i = 2; i < num; i++) 
	
		if (num % i == 0) 
		teste = 1; 
	
		if (!teste) 
		printf ("%d eh um numero primo.\n", num); 
	
		else 
		printf ("%d NAO EH um numero primo.\n", num);
		
		printf("\nDeseja continuar (1-Sim / 2-Nao) ? ");
		scanf("%d", &opc);
	} // Fechamento do loop - "Deseja continuar (1-Sim / 2-Nao) ?".
	
	if (opc=2) // Agradecimento antes do encerrar programa.
	printf("\nObrigado, ate a proxima! Para ver o meu codigo entre no link:\n\nhttps://github.com/jackrj007/JACKSON/blob/master/primos%20-%20jackson.c\n\n");
	
	system("pause");
	return 0;
	
}
