/* Exercise 4.27
 *
 * Extend the program that you wrote in the previous exercise so that it deals with
 * both braces and parentheses simultaneously.
 *
 */

#include<stdio.h>

int main(void){
        int c;
        int rx_brack = 0, lx_brack = 0;
	int rx_par = 0, lx_par = 0;

        while((c = getchar()) != EOF){
                if(c == '{'){
                        ++lx_brack;
                        putchar(c);
                }
		else if(c == '('){
                        ++lx_par;
                        putchar(c);
                }

                else if(c == '}'){
                        ++rx_brack;
                        if(rx_brack > lx_brack){
 				putchar('?'); 
				putchar('?');
			}
			else
				putchar(c);
		
                }
                else if(c == ')'){
                        ++rx_par;
                        if(rx_par > lx_par){
                                putchar('!');
				putchar('!');
			}
			else
				putchar(c);
                }	
		else
                        putchar(c);
        }

        if(rx_brack < lx_brack){
                printf("\n\nERROR: Missing right braces: ");
                while(rx_brack - lx_brack != 0){
                        putchar('}');
                        ++rx_brack;
                }
        }

        if(rx_par < lx_par){
                printf("\n\nERROR: Missing right parenthesis: ");
                while(rx_par - lx_par != 0){
                        putchar(')');
                        ++rx_par;
                }
        }
        return 0;
}
