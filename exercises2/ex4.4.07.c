/* Exercise 4.4.07 Tempesta. Intersection of two sets */

#include<stdio.h>
#include<stdlib.h>
#define DIM1 3 
#define DIM2 3 

void print_array(int *, int, int);

/* MAIN */

int main(){
	int a1[DIM1] = {1, 2, 3};
	int a2[DIM2] = {1, 2, 7};

	int *a3;
	int dim3 = 0; 
	int *pdim3 = &dim3;

	int intersection(int *a1, int size1, int *a2, int size2, int **a3, int *size3){
		int *commons;
		if(size1 == 0 && size2 == 0){
			*a3 = NULL;
			*size3 = 0;
			return 1;
		}
		int i, j, unique;

		if(size1 == 0){
			*a3 = malloc(size2 * sizeof(int));
			*size3 = size2;
			for(i = 0; i < size2; ++i)
				(*a3)[i] = a2[i];
			return 1;
		}
		if(size2 == 0){
			*a3 = malloc(size1 * sizeof(int));
			*size3 = size1;
			for(i = 0; i < size1; ++i)
				(*a3)[i] = a1[i];
			return 1;
		}
		
		commons = (int *) malloc((size1 + size2) * sizeof(int));

		if(commons == NULL)
			return 0;
		
		*size3 = 0;
 
		int count = size1;

		for(i = 0; i < size1; ++i){
			commons[i] = a1[i];
			printf("! %d !", commons[i]);
		}

		
		for(i = 0; i < size2; ++i){
			for(j = 0, unique = 1; unique && j < (size1 + size2); ++j){
				if(a2[i] == commons[j]){
					unique = 0;
				}
			}

			if(unique){
				++count;
				commons[count - 1] = a2[i];
			}
		}

		*size3 = count;
		*a3 = malloc(count * sizeof(int));
		for(i = 0; i < count; ++i)
			(*a3)[i] = commons[i];
	
		return 1;
	}

	int res = intersection(a1, DIM1, a2, DIM2, &a3, pdim3);
	printf("size3: %d\n", dim3);
	printf("res: %d\n", res);
	print_array(a1, 0, DIM1);
	print_array(a2, 0, DIM2);
	print_array(a3, 0, dim3);
	return 0;
}

/* AUX */

void print_array(int *a, int start, int end){
	if(start == end)
		printf("\n");
	else{
		printf("| %d |", a[start]);
		print_array(a, ++start, end);
	}
}
