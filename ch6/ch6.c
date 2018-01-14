/* Esercizi capitolo 6, prove varie */

#include <stdio.h>
# define DIM 10

void print_arrayint(int *, int);
void swap(int *, int *);
void init_array(int *, int);
int sum_array1(int *, int);
int sum_array2(int *, int);
void bubblesort(int *, int);
int strcmp(char *, const char *);
char * strcat(char *, const char *);
int strlen(const char *);
char * strcpy(const char *, register const char *);
void print_2d_array(int array[][3], int, int);

int main(){
	
	int a[DIM];
	int b[DIM] = {0};

	print_arrayint(a, DIM);			/* Stampa array non inizializzato */
	printf("\n");
	print_arrayint(b, DIM);			/* Stampa array inizializzato b = {0} */
	printf("\n");

	int c = 3, d = 2, *p1 = &c, *p2 = &d;	/* Stampa indirizzo e valore puntatore */
	printf("\nThe variable c, which is at the address %p, has value %d.\n", p1, c);
	printf("\nThe variable d, which is at the address %p, has value %d.\n", p2, d);
	int e = *p1;
	printf("\nSe faccio e = *p1, e avrà valore %d, il valore di c.\n", e);
	int f = *p2, *p3;
	printf("\nAllo stesso modo, inizializzando una variabile f = *p2, le attribuisco\n"
		"il valore della cella di memoria puntata da p2, che è quella di d.\n"
		"Pertanto f sarà uguale a %d.\n", f);
	printf("\n%s%s\n %s%d\n %s%d\n %s%p\n %s%p\n %s%p\n %s%s\n %s%d\n %s%d\n",
		"Espressione		", "Valore",	
		"p1 == &c 		", p1 == &c,
		"**&p1			", **&p1,
		"*&p1			", *&p1,
		"&p1			", &p1,
	     	"p1			", p1,
		"e = & c		", "Illegale",
		"7 * * p1 / * p2 + 7	", (7 * * p1 / * p2 + 7),
		"*(p3 = &c) *= *p1	", *(p3 = &c) * *p1 );
	printf("\n");	
	
	int g = 4, h = 14;			/*Chiamata per valore vs chiamata per indirizzo*/
	printf("\nAbbiamo dichiarato le variabili f = %d e g = %d.\n", g, h);
	swap(&g, &h);
	printf("\nDopo la chiamata a swap(&f, &g), f = %d e g = %d.\n"
		"Con questa chiamata, siamo andati a cambiarei valori in memoria\n"
		"delle due variabili.\n", g, h);

	int a1[DIM] = {10, 11, 12, 13};
	printf("\nAbbiamo dichiarato un array a1[%d] = {10, 11, 12}.\n", DIM);
	printf("\n%s%s\n %s%p\n %s%p\n %s%p\n %s%d\n %s%d\n %s%d\n %s%d\n %s%d\n %s%d\n %s%d\n",
		"Espressione		", "Valore",
		"a1			", a1,
		"(a1 + 0)		", a1 + 0,
		"(a1 + 1)		", a1 + 1,
		"*a1			", *a1,
		"*(a1 + 0)		", a1[0],
		"a[0]			", a1[0],
	     	"*(a1 + 1)		", *(a1 + 1),
	     	"a1[1]  		", a1[1],
		"*(a1 + 2)		", *(a1 + 2),
		"a1[2]			", a1[2]);	
	
	printf("\n");

	printf("\nLet's create a new array c_ar[%d] to make few tests:\n", DIM);
	int c_ar[DIM];			/*Array c_ar*/
	init_array(&c_ar[0], DIM);
	print_arrayint(c_ar, DIM);
	printf("\nThe sum from the function sum_array1, based on sum += *(p + i),\n"
		"is equal to %d.\n", sum_array1(c_ar, DIM));
	
	printf("\nThe sum from the function sum_array2, based on sum += p[i],\n"
		"is equal to %d.\n", sum_array2(c_ar, DIM));
	
	int *q;		/* c_ar = &c_ar[0] */ 
	int sum_array3 = 0;

	for(q = c_ar; q < &c_ar[DIM]; ++q)
		sum_array3 += *q;


	printf("\nThe same way, we can initialize a pointer int *q = c_ar, then\n"
		"we can produce the sum += *p, that is %d\n.", sum_array3);
	

	printf("\nOra proviamo a usare una delle funzioni sum_array per sommare\n"
		"una sola sezione dell'array int cc[DIM], dove tutti i valori sono 1.\n");

	int cc[DIM], *z;
	for(z = cc; z < &cc[DIM]; ++z)
		*z = 1;

	print_arrayint(cc, DIM);

	printf("\n"
		"sum_array1(cc, DIM) 			= %d\n"
		"sum_array1(cc + 1, 9)			= %d\n"
		"sum_array1(cc + 2, 8)			= %d\n"
		"sum_array1(cc + 1, 4)			= %d\n"
		"sum_array1(cc + 1, 5)			= %d\n"
		"sum_array1(&cc[1], 4)			= %d\n"
		"sum_array1(cc[1], 9)			= %s\n",
		sum_array1(cc, DIM),
		sum_array1(cc + 1, 9),
		sum_array1(cc + 2, 8),
		sum_array1(cc + 1, 4),
		sum_array1(cc + 1, 5),
		sum_array1(&cc[1], 9),
		"Illegale\n");


	printf("\nL'aritmetica dei puntatori. Vediamo un esempio con due piccoli array\n"
		"double dd[2] e int ee[2], assieme a due puntatori\n"
		"double *d1 = dd, double *d2 = d1  e int *e1 = ee e int *e2 = e1.\n");
	double dd[2];
	double *d1, *d2;
	d1 = dd;
	d2 = d1 + 1;
	printf("\nd2 - d1 		=	%d\n"
		"((int) d2 - (int) d1   = 	%d\n"
		"d2 			=	%p\n"
		"d1  			=	%p\n"
		"(int) d2  		=	%d\n" 
		"(int) d1		=	%d\n",
		d2 - d1, ((int) d2 - (int) d1), d2, d1, (int) d2, (int) d1);

	int ee[2];
	int *e1, *e2;
	e1 = ee;
	e2 = e1 + 1;
	printf("\ne2 - e1 		=	%d\n"
		"((int) e2 - (int) e1   = 	%d\n"
		"e2 			=	%p\n"
		"e1  			=	%p\n"
		"(int) e2  		=	%d\n" 
		"(int) e1		=	%d\n",
		e2 - e1, ((int) e2 - (int) e1), e2, e1, (int) e2, (int) e1);
	
	printf("\nLet's try to implement the algorithm bubblesort on a int\n"
		"ff[DIM] array:\n");
        int ff[DIM] = {9, -4, 7, 6, 11, 4, 15, 2, 1, 0};
     	
	print_arrayint(&ff[0], DIM); 
	
	bubblesort(&ff[0], DIM);

	printf("\nAnd now..:\n");

	print_arrayint(&ff[0], DIM);

	printf("\nE ora giochiamo con le stringe (ch. 6.10).\n");

	char *s = "abcde";		/* Stringhe , ch. 6.10 */
	char ss[] = "abcde";
	printf("\nAbbiamo dichiarato char *s = abcde e ss[] = abcde\n");
	printf("s 		= %s		ss 	 = %s\n", s, ss);
	printf("s + 1  		= %s		(ss + 1) = %s\n", (s + 1), (ss + 1));
	printf("*(s + 0)	= %c		ss[0] 	 = %c\n", *(s + 0), ss[0]);
	printf("*(s + 3)	= %c		ss[3] 	 = %c\n", *(s + 3), ss[3]);
	printf("s + 2  		= %s		(ss + 2) = %s\n", s + 2, ss + 2);

	int frogs;
	char *t1, *t2;
	printf("\nHow many frogs did you see?\n");
	scanf("%d", &frogs);
	t1 = (frogs == 1) ? "" : "s";
	t2 = (frogs == 1) ? "is" : "are";
	printf("\nIn the pool there %s %d frog%s.\n", (t2 + 1), frogs, t1);

	printf("\nLet's compare few strings with intstrcmp(char *, char *\n");
	printf(" %s\t%d\n %s\t%d\n %s\t%d\n",
		"hello - hella", strcmp("hello", "hella"),
		"hella - hello", strcmp("hella", "hello"),
		"hello - hello", strcmp("hello", "hello"));
	
	printf("\nLet's concatenate two strings with strcat(char *, char *)\n");
	char s1[20] = "How";
	char s2[20] = "Where";
	char s3[20] = "Op!";
	printf("\n%s\n%s\n%s\n", 
			strcat(s1, " are you?"),
			strcat(s2, " do we go now?"),
			strcat(s3, " op!"));

	printf("\n%s\n%s\n%s\n", 
			strcpy(s1, " are you?"),
			strcpy(s2, " do we go now?"),
			strcpy(s3, " op!"));
	printf("\n%s\t%d\n%s\t%d\n%s\t%d\n", 
			strcpy(s1, " are you?"), strlen(s1),
			strcpy(s2, " do we go now?"), strlen(s2),
			strcpy(s3, " op!"), strlen(s3));


	/*ARRAY MULTIDIMENSIONALI ********************************/

	int yy[2][3] = {1, 0, 0, 0, 1, 1};
	print_2d_array(yy, 2, 3);
	


	return 0;

}

/********* FUNZIONI AUSILIARIE *****************/

void print_2d_array(int (*array)[3], int row, int col){
	int p, q;
	for(p = 0; p < row; p++){
		printf("\n");
		for(q = 0; q < col; q++)
			printf("%d ", *(array[p] + q));
	}			
}



int strlen(const char *s){
	int count = 0;
	register char *p = s;
	while(*p++)
		count++;
	return count;
}

char * strcpy(const char *s1, register const char *s2){
	register char *p = s2;
       	while(*p++ = *s2++);
	return s1;
}

char * strcat(char *s1, register const char *s2){
 	register char *p = s1;
	while(*p)
		++p;
	while(*p++ = *s2++);
	return s1;
}			
 		


int strcmp(char *s1, const char *s2){	/* Compare strings lexicographically */
	int res = 1, i = 0;
	while(*s1 && *s2 && res){
		if(*(s1 + i) < *(s2 + i))
			res = -1;
		if(*(s1 + i) == *(s2 + i))
			res = 0;
	}
	return res;
}
		




void print_arrayint(int *p, int len){
	int i;
	for(i = 0; i < len; i++)
		printf("\narray[%d] = %d", i, *(p + i));
	return; 
}

void swap(int *p1, int *p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void init_array(int *p, int dim){	/*Initialize array*/
	int i;
	for(i = 0; i < dim; i++)
		*(p + i) = i;
}				

int sum_array1(int *p, int dim){
	int i, sum = 0;
	for(i = 0; i < dim; i++)
		sum += *(p + i);
	return sum;
}			
				
int sum_array2(int *q, int dim){
	int i, sum = 0;
	for(i = 0; i < dim; ++i)
		sum += q[i];
	return sum;
}	

void bubblesort(int *p, int dim){
	int i, j;
	for(i = 0; i < dim; i++)
		for(j = dim - 1; j > i; j--)
			if(p[j] < *(p + (j - 1)))
				swap((p + j) , (p + j - 1));
}	







