//
//  Queue.h
//  Queue
//
//  Created by Ryan Wilcox on 2/21/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#ifndef __Queue__Queue__
#define __Queue__Queue__
#include <iostream>
#include "Node.h"
using namespace std;

template <typename Type> class Queue{
private:
	Node<Type> *head;
	Node<Type> *tail;
	int size;
	
public:
	Queue();
	~Queue();
	
	void enQueue(Type data);
	Type deQueue();
	bool isEmpty();
	int getLength();
	
};

/*
 * Implementation goes under header stuff
 * for templates
 */
#endif /* defined(__Queue__Queue__) */
