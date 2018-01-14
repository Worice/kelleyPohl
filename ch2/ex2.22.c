/* Exercise 2.22
 * In the previous exercise, we suggested the code:
 *
 * 	int seed = time();
 * 	srand(seed); 
 *
 * In place of these lines, most programmers would write
 * srand(time(NULL));
 * Make this change to your program, and then compile and execute it to see that it
 * behaves the same as before
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char *argv[]){
        int i, n;
	srand(time(NULL));
        printf("\n%s\n%s",
                "Some randomly distributed integers will be printed.",
                "How many do you want to see? ");
        scanf("%d", &n);
        for (i = 0; i < n; ++i) {
                if (i % 10 == 0)
                        putchar ('\n');
                printf("%12d", rand());
        }
        printf("\n\nThe expression \"srand(time(NULL));\" appears to\n"
		"work the same way of \"seed = time(); srand(seed)\"\n\n");
        return 0;
}

