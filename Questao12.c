#include <stdio.h>

int main(int argc, char **argv)
{
	int n, inv;
	printf("digite os numeros a serem inveertidos:\n");
	scanf("%d",&n);
	while(n>0)
	{
		inv=n%10;
		printf("%d\n",inv);
		n=n/10;
	}
	printf("\n");
	return 0;
}
