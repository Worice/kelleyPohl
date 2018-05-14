/* Exercise 9.4 */

#include <stdio.h>

typedef struct{
	unsigned r11 : 8, r12 : 8, r13 : 8, r14 : 8,
		 r21 : 8, r22 : 8, r23 : 8, r24 : 8;
} matrix;

matrix add(matrix *, matrix *);
void bit_print(unsigned int, int);

/* MAIN */

int main(){
	
	matrix m1, m2, m3;
	m1.r11 = 97; m1.r12 = 1; m1.r13 = 1; m1.r14 = 1;
	m1.r21 = 1; m1.r22 = 1; m1.r23 = 1; m1.r24 = 1;

	m2.r11 = 2; m2.r12 = 2; m2.r13 = 2; m2.r14 = 2;
	m2.r21 = 2; m2.r22 = 2; m2.r23 = 2; m2.r24 = 2;

	printf("Here is the sum of two bytes from the matrices:\n");	
	
	printf("%d\n", m1.r11);	
	printf("%c\n", m1.r11);	
	bit_print(m1.r11, 8);
	m3 = add(&m1, &m2);
	

	return 0;
}

/* AUX */

matrix add(matrix *m1, matrix *m2){
	matrix m3;
	m3.r11 = m1 -> r11 + m2 -> r11;
	m3.r12 = m1 -> r12 + m2 -> r12;
	m3.r13 = m1 -> r13 + m2 -> r13;
	m3.r14 = m1 -> r14 + m2 -> r14;
	return m3;
}

void bit_print(unsigned int n, int rec){
	char mask = 1;
	mask <<= 8 - 1;
	int i, j;
	if(rec > 0){
		printf("%c", ((mask && n) == 1) ? '1' : '0');
		mask >>= 1;
		bit_print(n, rec - 1);
	}
	else
		printf("\n");
}
	












