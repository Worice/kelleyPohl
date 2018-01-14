 /* Esercizio 6.29 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
	int i = 0, j = 0, k = 0, l = 0, m = 0;
	char *en[97];
	char *it[97];
	char temp[20];
	
	FILE *p = fopen(argv[1], "r");
	FILE *q = fopen(argv[2], "r");
	FILE *r = fopen(argv[3], "r");
	char single;
	
	while((single = fgetc(p)) != EOF){
		if(!isspace(single))
			temp[i++] = single;
		else{
			temp[i] = '\0';
			en[j++] = strdup(temp);
			i = 0;
		}
	}
	fclose(p);

	while((single = fgetc(q)) != EOF){
		if(!isspace(single))
			temp[k++] = single;
		else{
			temp[k] = '\0';
			it[l++] = strdup(temp);
			k = 0;
		}
	}
	fclose(q);

	while((single = fgetc(r)) != EOF){
		if(!isspace(single))
			temp[m++] = single;
		else{
			temp[m] = '\0';
			for(int n = 0; n < 97; n++)
				if(strcmp(temp, en[n]) == 0)
					printf("%s ", it[n]);
			m = 0;
		}
	}
	fclose(r);


	return 0;
}

