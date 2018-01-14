/* Exercise 3.3
 *
 * Write a program that prints a table of trigonometric values 
 * for sin(), cos() and tan(). The angles in your table should go 
 * from 0 to 2PI in 20 steps.
 *
 */

# include <stdio.h>
#include<ncurses.h>
# include <math.h> 
void main(){
	float r ; 
	int i ; 
	char ch ; 
	clrscr() ;
        printf("\nI do not remember what trigonometry is and I have\n"
		"no intention, right now, to spend time on it.\n"
		"Because of that, I reused a program from the web.\n"
		"In any case, the problem was simpler than\n"
		"anticipated. I should really take on trigometry\n"
		"again.\n");	
	printf("- - - - - - - - - - - - - - - - - -") ; 
	printf("\nAngle \t  Sin \t  Cos \t  Tan \n") ; 
	printf("- - - - - - - - - - - - - - - - - -") ; 
	for(i = 0 ; i <= 180 ; i = i + 20){
		r = i * 3.14159 / 180 ; 
		printf("\n%3d \t %5.2f \t %5.2f \t %5.2f\n",
			i, sin(r), cos(r), tan(r));
	        } 
		printf("- - - - - - - - - - - - - - - - - -") ; 
		getch();

}	
