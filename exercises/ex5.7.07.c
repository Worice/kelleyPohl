/* Exercise 5.7.07 Tempesta */

#include<stdio.h>
int if_sum(int *, int, int);

/* MAIN */

int main(){
	int a[3] = {8, 5, 6};
	printf("Possible: %d\n", if_sum(a, 12, 3));	
	return 0;
}

/* AUX */

int if_sum(int *a, int sum, int dim){
	if(sum < 0 || (sum != 0 && dim == 0))
		return 0;
	else{
		if(sum == 0)
			return 1;
		else
			return if_sum(a, sum - a[dim - 1], dim - 1) || if_sum(a, sum, dim - 1);

	}
}



