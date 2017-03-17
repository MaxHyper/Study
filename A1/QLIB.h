/*
 * QLIB.h
 *
 *  Created on: Mar 12, 2017
 *      Author: MAX
 */

#ifndef QLIB_H_
#define QLIB_H_



struct Queue* init();
void push(struct Queue* q,int x);
void pop(struct Queue* q);
int getFront(struct Queue* q);
int getLength(struct Queue* q);
void destroy(struct Queue* q);
void clean(struct Queue* q);
void Print(struct Queue* q);


#endif /* QLIB_H_ */
