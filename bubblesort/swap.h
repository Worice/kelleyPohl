/* Funzione swap, scambia il contenuto di due celle di memoria */


void swap(int *, int *);

void swap(int *p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
