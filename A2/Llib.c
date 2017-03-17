/*
 * Llib.c
 *
 *  Created on: Mar 12, 2017
 *      Author: MAX
 */

#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
	struct Node* previous;
	struct List* list;
};
struct List {
	struct Node* latest;
	struct Node* first;
	int lLength;
	int sum;
};


struct List* init(){

	struct List* list = (struct List*)malloc(sizeof(struct List));
	list->latest = NULL;
	list->first = NULL;
	list->lLength=0;
	list->sum=0;
	return list;
}
// To EnList an integer
void push(struct List* list,int x) {
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	(list->lLength)++;
	(list->sum)+=x;
	temp->data =x;
	temp->next = NULL;
	temp->previous = list->latest;
	list->latest=temp;
	temp->list=list;
	if( list->first == NULL){
		list->first = temp;
	}
	else{
		temp->previous->next = temp;
	}
}

// To DeList
void pop(struct Node* node) {
	if(node->list->first==node)
			node->list->first=node->next;
	if(node->list->latest==node)
			node->list->latest=node->previous;
	if(node->next != NULL) {
		node->next->previous=NULL;
	}
	if(node->previous != NULL) {
			node->previous->next=NULL;
		}
	node->list->lLength--;
	node->list->sum-=node->data;
	free(node);
}

struct Node* getLatest(struct List* list) {
	if(list->latest == NULL) {
		printf("List is empty\n");
		return NULL;
	}
	return list->latest;
}
struct Node* getFirst(struct List* list) {
	if(list->first == NULL) {
		printf("List is empty\n");
		return NULL;
	}
	return list->first;
}
struct Node* getNext(struct Node* node) {
	if(node != NULL) {
		return node->next;
	}
	return NULL;
}

struct Node* getPrev(struct Node* node) {
	if(node != NULL) {
		return node->previous;
	}
	return NULL;
}

int getData(struct Node* node) {
	if(node == NULL) {
		printf("empty node");
		return -999;
	}
	return node->data;
}

int getLength(struct List* list) {
	return list->lLength;
}

float getAverage(struct List* list) {
	return (((float)list->sum) /( list->lLength));
}


void destroy(struct List* list) {
	struct Node* temp1=list->first;
	struct Node* temp2=list->first->next;
	while(temp1 != NULL) {
		free(temp1);
		temp1 = temp2;
		temp2=temp2->next;
	}

}
void Print(struct List* list) {
	struct Node* temp = list->first;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

