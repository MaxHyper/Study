/*
 ============================================================================
 Name        : Ab.c
 Author      : Max Margolin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Llib.h"

int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue
	struct List* list = init();
	push(list,11); Print(list);
	push(list,22); Print(list);
	push(list,33); Print(list);
	pop(getFirst(list));  Print(list);
	push(list,45); Print(list);
	printf("avg %f",getAverage(list));

	printf("\n latest %d \n length %d\n",getData(getLatest(list)),getLength(list));

}
