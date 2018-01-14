/* Funzione merge. Considera due array di lunghezza m ed n e li fonde, ordinandoli */


void merge(int *, int *, int *, int, int);

void merge(int *aa, int *bb, int *cc, int m, int n){
	
	int i = 0, j = 0, k = 0;

	while(i < m && j < n){
		if(aa[i] < bb[j])
			cc[k++] = aa[i++];
		else
			cc[k++] = bb[j++];
	}

	while(i < m)
		cc[k++] = aa[i++];
	

	while(j < n)
		cc[k++] = bb[j++];
}

