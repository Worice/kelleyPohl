/* Kelley & Pohl, 1998. "A book on C." Excercises from chapter one."*/

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#define DIM 100

/*1)-------------------------------------------------------*/

void ex1aux(void){
	printf("1)\tOn the screen write the words:\n"
		"she sells sea shells by the seashore\n" 
		"(no virgolette):\n"
		"\t(a) all on one line;" 
		"\t(b) on three lines;" 
		"\t(c) inside a box.");
	return;
}

void ex1(){
	ex1aux();
	char s[DIM], *p;
	int op, i, len = 0;
	printf("\nOn the screen write the words:\n"
                "\"she sells sea shells by the seashore\" (no virgolette)\n"
                "(a) all on one line, (b) on three lines, (c) inside a box.\n\n");
				/*output option, strin length*/
	strcpy(s, "she sells sea shells by the seashore"); 
	printf("\t1) all on one line;\n"
		"\t2) on three lines;\n"
		"\t3) inside a box.\n");
	scanf("%d", &op);
	if(op == 1)
		printf("%s\n\n", s);
	else if(op == 2){
		p = s + 22;
		for( ; *p != '\0'; ++p){
			if(*p == ' ')
				*p = '\n';
		}
		printf("%s\n\n", s);
	}
	else if(op == 3){
		p = s;
		for( ; *p != '\0'; ++p)
			len += 1;
		for(i = 0; i <= len + 3; ++i)
			printf("*");
		printf("\n");
		printf("* %s *\n", s);
		for(i = 0; i <= len + 3; ++i)
			printf("*");
		printf("\n\n");
	}
	else{
		printf("\nWrong selection. Exit program.\n");
		exit(0);

	}
}	

/*2) ------------------------------------------------------------------
Use a hand calculator to verify that the output of the marathon program is correct.
Create another version of the program by changing the floating constant 1760.0 to
an integer constant 1760. Compile and execute the program and notice that the out-
put is not the same as before. This is because integer division discards any frac-
tional part.*/

void ex2(){
	printf("\n\nUse a hand calculator to verify that the output of the\n"
	"marathon program is correct. Create another version of the program\n"
	"by changing the floating constant 1760.0 to an integer constant 1760.\n"
	"Compile and execute the program and notice that the out-put is not the\n!"
	"same as before. This is because integer division discards any\n"
	"fractional part.\n\n");
	int miles, yards;
	float kilometers;
	miles = 26;
	yards = 385;
	kilometers = 1.609 * (miles + yards / 1760);	/*1760 from float to int*/
	printf("\n# A marathon is %f kilometers.\n", kilometers);
	printf("# With 1760.0, the result was 42.185970.\n"
		"# The integer division discards any fractional part.\n\n");
}

/* 3) ---------------------------------------------------------------------

Write a version of the marathon program in Section 1.3, "Variables, Expressions,
and Assignment," on page 11, in which all constants and variables are of type dou-
ble. Is the output of the program exactly the same as that of the original 
program?*/

void ex3(){
        double miles, yards;
        double kilometers;
        miles = 26.;
        yards = 385.;
        kilometers = 1.609 * (miles + yards / 1760.);    /*1760 from float to int*/
        printf("\nA marathon is %lf kilometers.\n", kilometers);
        printf("With float and int, the result was 42.185970.\n\n");
}


/* 4) --------------------------------------------------------------------

Take one of your working programs and alter it by deleting the keyword void in the
line

	int main(void)

When you compile your program, does your compiler complain? Probably not. (See
Section 5.3, "Function Prototypes," on page 202, for further discussion.) .Next,
remove the keyword vo; d and remove the following line from the body of main():

	return 0;

When you compile the program, does your compiler complain? This time it should.
If your compiler does not complain, learn how to set a higher warnin~ level for 
yur compiler. Generally speaking, programmers should always use the highest warn:ng
level possible. One of the principal rules of programming is keep your complIer
happy, but not at the expense of turning off all the warnings. Programmers should
rework their code repeatedly until all the warnings have vauished.		*/

void ex4(){
	printf("Currently, I do not have a program with void parameter\n"
		"to test the suggestion of the excercise.\n"
		"I removed the ruturn 0; from the main program\n"
		"I created to run these excercises. Surprisingly,\n"
		"nothing happened. Let's try to make the warning level\n"
		"of the compiler higher.\n\n");
}

/* 5) --------------------------------------------------------------------
The following program may have a run-time error in it:

	#include <stdio.h>
	int main(void)
	{
	int x, y = 0;
	x = 1 / y;
	printf("x = %d\n", x);
	return 0;
	}

Check to see that the program compiles without any error messages. Run the pro-
gram to see the effect of integer division by zero. On most systems this program
will exhibit a run-time error. If this happens on your system, try to rewrite the pro-
gram without the variable y, but keep the error in the program. That is, divide by
zero directly. Now what happens? */

void ex5(void){
	printf("The adapted version of the program, that is:\n\n"
		"\tvoid main(void){\n"
		"\t\tint x, y = 0;\n"
	        "\t\tx = 1 / y;\n"
        	"\t\tprintf(\"x = %%d\\n\", x);\n"
		"\t}\n\n"
		"did not return errors during compilation.\n"
		"I got an \"Floating point exception (core dumped)\"\n" 
		"error when I run the ex5() excercise from the main.\n\n");

	printf("With the second version of the program:\n\n"
		"\tvoid main(void){\n"
		"\t\tint x = 0;\n"
		"\t\tx = 1 / 0;\n"
		"\t\tprintf(\"x = %%d\\n\", x);\n"	/*Execute calculation??*/
		"\t}\n\n"
		"the compiler only returned two warnings:\n"
		"\t\"warning: format ‘%d’ expects a matching ‘int’ argument\"\n"
		"\t\"warning: division by zero\"\n"
		"One the program run, it returs the same error of the\n"
		"previous version.\n\n");
}

/* 6) --------------------------------------------------------------------
Most C systems provide for logically infinite floating values. Modify the program
given in the previous by changing i int to double and, in the printf() 
statement, %d to %f. Does the program still exhibit a run-time error? On most 
systems the answer is no. What happens on your system?
*/
void ex6(void){
        double x, y = 0;
        x = 1 / y;
        printf("x = %f\n", x);
	printf("\nIn this case, there is not type mysmatch between the declared\n"
		"variable x and the print function. Hence, no errors.\n\n");
}
/* 7) --------------------------------------------------------------------
Any #include lines in a program normally occur at the top of the file. But do they
have to be at the top? Rewrite the pacific_sea program in Section 1.4, "The Use of
#define and #include," on page 15, so that the #include line is not at the top of
the file. For example, try*/

void ex7aux(void){
	printf("\tint main(void){\n"
		"\t\t#include pacific_sea.h\n"
		"\t\t...........\n\n");
	return ;
}

void ex7(void){}
		
/*8) --------------------------------------------------------------------*/

void ex8aux(void){
	printf("8)\t Take one of your files containing a working program, say\n"
		"sea.c, and rename the file as sea. Now try to compile it.\n"
		"Some C compilers will complain; others will not. On UNIX\n"
		"systems, the complaint may be quite cryptic, with words such\n"
		"as bad magic number or unable to process using elf libraries.\n!"
		"What happens on your system?\n\n");
	return;
}

void ex8(void){
	ex8aux();
	printf("The system returns these errors:\n"
		"\t* file format not recognized; treating as linker script\n!"
		"\t* syntax error\n"
		"\t* collect2: error: ld returned 1 exit status\n\n"




/*Main progran ------------------------------------------------------------*/
int main(int argc, char *argv[]){
	int ex;
	printf("\n>This script will try to reproduce the excercises from\n"
		">the first chapter. Enjoy and comment!\n\n");
	do{
		printf(">Select the excercise you do want to run:\n"
		">\t1\tExercise 1\n"
                ">\t2\tExercise 2\n"
		">\t3\tExercise 3\n"
		">\t4\tExercise 4\n"
		">\t5\tExercise 5\n"
		">\t6\tExercise 6\n"
		">\t7\tExercise 7\n"
		">\t8\tExercise 8\n");
		scanf("%d", &ex);
		if(ex == 1)
			ex1();
		else if(ex == 2)
			ex2();
		else if(ex == 3)
			ex3();
		else if(ex == 4)
			ex4();
		else if(ex == 5)
			ex5();
		else if(ex == 6)
                        ex6();
		else if(ex == 7)
                        ex7();
                else if(ex == 8)
                        ex8();
	}while(ex > 0 && ex < 9);
	return 0;
}
