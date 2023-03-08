/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int add(int n1){
	return n1++;
}

int add2(char n1, int n2){
	return n1+n2;
}

int main(void) {
	int a[10];
	printf("%d", sizeof(a));
	printf("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	char *buff = malloc(10);
	scanf("%[^\n]", buff);
	printf("%s", buff);
	printf("%d", add(1));
	printf("%d", add2(1,2));
	return EXIT_SUCCESS;
}
