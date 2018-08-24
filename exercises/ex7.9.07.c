/* Exercise 7.9.07 Tempesta. Average daily temperature */

#include<stdio.h>
#include<stdlib.h>
#define DIM 4

typedef struct elem{
	int time;
	float temp;
	struct elem *next;
}ELEM;

typedef ELEM *LINK;

void print_list(LINK);

LINK enlist(int *, float *, int, int);

int average(LINK, float *);
/* MAIN */

int main(){
	int time[DIM] = {1, 2, 3, 4};
	float temp[DIM] = {37.1, 38.1, 39.1, 40.1};
	float *avg;	
	LINK l = enlist(time, temp, 0, DIM);
	print_list(l);
	average(l, avg);
       	printf("Avg = %f\n", *avg);
	return 0;
}

/* AUX */

LINK enlist(int *a, float *b, int start, int end){
	if(start == end)
		return NULL;
	else{
		LINK h = (LINK) malloc(sizeof(ELEM));
		h -> time = a[start];
		h -> temp = b[start];
		h -> next = enlist(a, b, ++start, end);
		return h;
	}
}

void print_list(LINK l){
	if(!l)
		printf("NULL\n");
	else{
		printf("%d -> %f => ", l -> time, l -> temp);	
		print_list(l -> next);
	}
}	

int average(LINK l, float *avg){
	int prev_time; float temp_sum;

	if(l == NULL)
		return 0;
	temp_sum = prev_time = 0;
	while(l != NULL){
		temp_sum += (l -> time - prev_time) * l -> temp;
		prev_time = l -> time;
		l = l -> next;
	}
	*avg = temp_sum / prev_time;
	return 1;
}










