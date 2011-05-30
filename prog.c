#include "module.h"
#include<stdio.h>

int main(void)
{
	int ch;

	printf
	    ("Dwste A gia to paragontiko , B gia ton MKD kai C gia tin dunami \n");
	printf("Dwste q an thelete na bgeite apo to programma\n");
	while ((ch = getchar()) != 'q') {
		main_interface(ch);
	}
	printf("Bye World");

	return 0;
}
