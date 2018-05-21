/* Esercitazione 8 2018 */

#include <stdlib.h>
#include <stdio.h>

int main(){
	printf("Esercizio 8.1\n");

	int n1 = 0;
	int n2 = 0;

	printf("Inserisci un numero:\n");
	scanf("%d", &n1);
	
	printf("Inserisci un numero:\n");
	scanf("%d", &n2);

	while(n2 != n1){
		n1 = n2;
		printf("Inserisci un numero:\n");
		scanf("%d", &n2);
	};

	printf("Sessione terminata.\n");

	printf("Esercizio 8.2\n");
	int m1 = 	0;
	int sum = 	0;
	int count = 	0;

	while(m1 >= 0){
		
		printf("Inserisci un numero:\n");
		scanf("%d", &m1);
		sum += m1;
		count++;
		printf("La media %d / %d e' = %f\n", sum, count, ((float) sum/count));
		
	};

	printf("Sessione terminata.\n");
	
	printf("Esercizio 8.3\n\n");
	printf("Inserisci un numero pari e positivo:\n");
	int q1, q2;
	int g = 0; int *p1 = &q1; int *p2 = &q2;
	scanf("%d", &g);

	int prime(int n){
		int flag = 1; int i = 2;
		while(flag && i < n){
			if(n % i == 0){
				flag = 0;
			}
			++i;
		}
		return flag;
	}

	void gold(int g, int *p1, int *p2i, int i){
		if(prime(i) && prime(g - i)){
			*p1 = i; *p2 = (g - i);
		}
		else
			gold(g, p1, p2, ++i);
	}
	gold(g, p1, p2, 2);

	printf("\n\nGoldbach %d:\t= %d + %d\n\n", g, *p1, *p2);	

	return 0;
}
		


