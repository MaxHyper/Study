/*
 * Llib.h
 *
 *  Created on: Mar 12, 2017
 *      Author: MAX
 */

#ifndef LLIB_H_
#define LLIB_H_

struct Node;
struct List* init();
void push(struct List* q,int x);
void pop(struct Node* node);
int getLength(struct List* q);
void destroy(struct List* q);
void Print(struct List* q);
struct Node* getLatest(struct List* list);
struct Node* getFirst(struct List* list) ;
struct Node* getPrev(struct Node* node);
struct Node* getNext(struct Node* node);
int getData(struct Node* node);
float getAverage(struct List* list);

#endif /* LLIB_H_ */
