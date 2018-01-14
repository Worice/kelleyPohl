/* Exercise 3.13
 *
 * The following table shows how many bytes are required on most machines to
 * some of the fundamental types. What are the appropriate values for your machine?
 * Write and execute a program that allows you to complete the table.
 *	(Table missing, see the book)
 *
 */ 


#include<stdio.h>

int main(int argc, char *argv[]){
	printf("\nType		4 Bytes machine		2 Bytes machine		My machine\n"
		"char		1 byte			1 byte			%zu byte\n"
		"short		2			2			%zu\n"
		"int		4			2			%zu\n"
		"unsigned	4			2			%zu\n"
		"long		4			4			%zu\n"
		"float		4			4			%zu\n"
		"double		8			8			%zu\n"
		"long double	?			?			%zu\n\n",
		sizeof(char), sizeof(short), sizeof(int), sizeof(unsigned), sizeof(long),
		sizeof(float), sizeof(double), sizeof(long double));
	
}
