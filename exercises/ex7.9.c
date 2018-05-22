/* Exercise 7.9 */

#include <stdio.h>
#include <stdlib.h>
#define DIM 5

typedef int 		time;
typedef float		temp;


typedef struct elem{
	time		mns;
	temp		dgr;
	struct elem	*next;
}ELEM;

typedef ELEM 	*LINK;

LINK array_to_list(int *, float *, int);
void print_list(LINK);
float mean(LINK, int, int);
/* MAIN */

int main(){
	int time[DIM] = {1, 2, 3, 4, 5};
	float temp[DIM] = {1.0, 2.0, 3.0, 4.0, 5.0};

	LINK l = NULL;
	l = array_to_list(time, temp, DIM);
	print_list(l);
	printf("Mean: %.2f\n", mean(l, 1, 3));

	return 0;
}

/* AUX */

LINK array_to_list(int a[DIM], float b[DIM], int rec){
	if(!rec)
		return NULL;
	else{
		LINK head;
		head = malloc(sizeof(ELEM));
		head -> mns = a[0];
		head -> dgr = b[0];
		head -> next = array_to_list(a + 1, b + 1, --rec);
		return head;
	}
}

void print_list(LINK h){
	if(!h)
		printf("NULL\n");
	else{
		printf("%  d --> ", h -> mns);
		printf("%.2f --> ", h -> dgr);
		print_list(h -> next);
	}
}

float mean(LINK h, int time1, int time2){
	int diff = (time1 - time2)*(-1);
	float sum = 0.0;
	int i = 0;
	while(diff){
		h -> next;
		if(++i == time1){
			while(diff){
				sum += h -> dgr;
				--diff;
				h -> next;
			}
		}
	}
	return (sum / diff);
}














