/*
 ============================================================================
 Name        : Aa.c
 Author      : max
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

/*Queue - Linked List implementation*/
#include<stdio.h>
#include<stdlib.h>
#include "QLib.h"

int main(){
	/* test queues */
	struct Queue* q  = init();
	push(q,2); Print(q);
	push(q,4); Print(q);
	push(q,7); Print(q);
	pop(q);  Print(q);
	push(q,8); Print(q);
	printf("front: %d \nlength: %d",getFront(q),getLength(q));
}
