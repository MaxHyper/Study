/*
 * QLib.c
 *
 *  Created on: Mar 12, 2017
 *      Author: MAX
 */
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};
struct Queue {
	struct Node* front;
	struct Node* rear;
	int qLength;
};

//initialize
struct Queue* init(){

	struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
	q->front = NULL;
	q->rear = NULL;
	q->qLength=0;
	return q;
}
// To Enqueue an integer
void push(struct Queue* q,int x) {
	struct Node* temp =
		(struct Node*)malloc(sizeof(struct Node));
	q->qLength++;
	temp->data =x;
	temp->next = NULL;
	if(q->front == NULL && q->rear == NULL){
		q->front = q->rear = temp;
		return;
	}
	q->rear->next = temp;
	q->rear = temp;
}

// To Dequeue an integer.
void pop(struct Queue* q) {
	struct Node* temp = q->front;
	if(q->front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	q->qLength--;
	if(q->front == q->rear) {
		q->front = NULL;
		q->rear = NULL;
	}
	else {
		q->front = q->front->next;
	}
	free(temp);
}

int getFront(struct Queue* q) {
	if(q->front == NULL) {
		printf("Queue is empty\n");
		return -999;
	}
	return q->front->data;
}

int getLength(struct Queue* q) {
	return q->qLength;
}

void destroy(struct Queue* q) {
	struct Node* temp1=q->front;
	struct Node* temp2=q->front->next;
	while(temp1 != NULL) {
		free(temp1);
		temp1 = temp2;
		temp2=temp2->next;
	}
	printf("\n");

}
//for testing
void Print(struct Queue* q) {
	struct Node* temp = q->front;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
