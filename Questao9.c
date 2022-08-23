#include <stdio.h>

int main(int argc, char **argv)
{
	int a, cont=1, div=0;
	printf("digite um numero:\n");
	scanf("%d",&a);

	while (cont>=a)
	{
		a/cont;
		if (a%cont==0)
		{
			div=div+1;
		}
		cont=cont+1;
	}
	if (div==2)
	{
		printf("é um numero primo:\n");
	}
	else
	{
		printf("nao é um numero primo:\n");
	}
	return 0;
}
