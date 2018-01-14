/* Esercizi capitolo 9 Kelley & Pohl */

#include<stdio.h>
#define X 1 

/**** TIPI ****/

enum alive {yes = 1, no = 2, partly = 3};
typedef enum alive alive;

struct core_troop {
	char *name;
	alive status;
	int points;
};
typedef struct core_troop core_troop;

struct army {
	char *race;
	core_troop c_t[2];
};
typedef struct army army;

/**** PROTOTIPI ****/

int core_troop_sum(army *);
void update_soldier_points(army *);
/**** MAIN ****/

int main(){

	core_troop soldier1, soldier2;


	soldier1.name = "Skeleton";
	soldier1.status = no;
	soldier1.points = 8;
	
	soldier2.name = "Zombie";
	soldier2.status = no;
	soldier2.points = 6;

	army player1;
	player1.race = "Vampire Counts";
	player1.c_t[0] = soldier1;
	player1.c_t[1] = soldier2;

	#if X

	printf("%s: %s\n", "Name:   ", soldier1.name);
	printf("%s: %d\n", "Status: ", soldier1.status);
	printf("%s: %d\n", "Points: ", soldier1.points);

	printf("\n%s: %s\n", 	"Army:   	", player1.race);
	printf("%s\n ", 	"Core troops:");
	printf("\t%s %s\n", 	"Name:   ", player1.c_t[0].name);
	printf("\t%s %d\n", 	"Status:   ", player1.c_t[0].status);
	printf("\t%s %d\n", 	"Points:   ", player1.c_t[0].points);
	
	printf("\n%s: %s\n", 	"Army:   	", player1.race);
	printf("%s\n ", 	"Core troops:");
	printf("\t%s %s\n", 	"Name:   ", player1.c_t[1].name);
	printf("\t%s %d\n", 	"Status:   ", player1.c_t[1].status);
	printf("\t%s %d\n", 	"Points:   ", player1.c_t[1].points);
	
	printf("%s: %s\n", "Name: ", soldier2.name);
	printf("%s: %d\n", "Status: ", soldier2.status);
	printf("%s: %d\n", "Points: ", soldier2.points);
	#endif
	
	printf("%d\n", core_troop_sum(&player1));
	update_soldier_points(&player1); 

	return 0;

}

/***** AUX ****/

int core_troop_sum(army *p){
	int sum = 0;
	for(int i = 0; i < 2; ++i)
		sum += (p -> c_t)[i].points;
	return sum;
}

void update_soldier_points(army *p){
	char soldier[10];
	printf("Which soldier points do you want to update?\n");
	scanf("%s", soldier);			/* La funzione esce qui */
	for(int i = 0; i < 2; ++i){
		if(soldier == (p -> c_t)[i].name){
			int temp;
			printf("%s old value: %d", soldier, (p -> c_t)[i].points);
			printf("%s new value\n", soldier);
			scanf("%d", &temp);
			(p -> c_t)[i].points = temp; 
		}
	}
}

