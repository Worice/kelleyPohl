/* Exercise 4.5
 *
 * Write a program that contains the loop
 *
 * 	while (scanf("%lf", &salary) == 1){
 * 		...
 * 	}
 *
 * Within the body of the loop, compute a 17% federal withholding tax and a 3% state
 * withholding tax, and print these values along with the corresponding salary. Accu-
 * mulate the sums of all salaries and taxes printed. Print these sums after the pro-
 * gram exits the while loop.
 *
 */

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){	
	int 	i = 0;

	double 	fed_tax = 0, state_tax = 0, salary = 0;
	
	double 	tot_fed_tax = 0, tot_state_tax = 0, tot_salary = 0;

	printf("\n%-20s%-20s%-20s%-20s\n"
		"%-20s%-20s%-20s%-20s",		
		"Human", "Federal", "State", "Salary",
		"ID", 	"Tax", "Tax", "");
	printf("\n\n");

	while (scanf("%lf", &salary) == 1){
		fed_tax = 	(salary / 100) * 17;
		state_tax = 	(salary / 100) * 3;

		tot_fed_tax 	+= fed_tax;
		tot_state_tax	+= state_tax;
		tot_salary	+= salary;

		printf("%10d%20.2lf%20.2lf%20.2lf\n",
			++i, fed_tax, state_tax, salary);
	}

	printf("\n%-20s%-20s%-20s\n"
		"%-20s%-20s%-20s\n"
		"%-20s%-20s%-20s\n",
		"Total",	"Total",	"Total",
		"Federal",	"State", 	"Salaries",
		"Taxes", 	"Taxes", 	"");

	printf("\n%-20.2lf%-20.2lf%-20.2lf\n\n",
		tot_fed_tax, tot_state_tax, tot_salary);

	return 0;
}







