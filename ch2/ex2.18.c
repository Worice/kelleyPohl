/* Exercise 2.18
 *
 * A good programming style includes a good layout style, and a good layout style is
 * crucial to the human reader, even though the compiler sees only a stream of charac-
 * ters. Consider the following program:
 *
 * int main(void
 * ){float qx,
 * zz,
 * tt;printf("gimme 3"
 * );scanf
 * ("%f%f
 * %f" ,&qx,&zz
 * ,&tt);printf("averageis=%f",
 * (qx+tt+zz)/3.0);return
 * o
 * ; }
 *
 * Although the code is not very readable, it should compile and execute. Test it to 
 * see if that is true. Then completely rewrite the program. Use white space and 
 * comments to make it more readable and well documented. Hint: Include a header 
 * file and choose new identifiers to replace qx, ZZ, and tt.
 *
 */


#include<stdio.h>

int main(void){
printf("\nfloat qx,\n"
	"zz,\n"
	"tt;printf(\"gimme 3\"\n"
 	")	;scanf\n"
	"(\"\%f\%f		\%f\" ,&qx,&zz\n"
	",&tt);printf(\"averageis=\%f\",\n"
	"(	qx+tt+zz)/3.0);return\n"
	"0 \n"
	";\n\n"); 
	printf("\nThis disaster actually really works. Now, I would like to\n"
		"make it more readable.\n\n");
	float x, y, z;
	printf("\nPlease type 3 floats:\n");
	scanf("%f%f%f", &x, &y, &z);
	printf("\nAverage = %\.2f.\n\n", (x  + y + z) / 3.0);
       	return 0;
}	
