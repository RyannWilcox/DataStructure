//
//  Node.h
//  Queue
//
//  Created by Ryan Wilcox on 2/21/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#ifndef __Queue__Node__
#define __Queue__Node__

#include <iostream>

template <typename Type> class Node{
private:
	Node<Type> *next;
	Type item;
		
public:
	//two constructors
	Node();
	Node(Type &item , Node *nextNode);
	~Node();
		
	Node<Type> *getNext();
	void setNext(Node *nextNode);
	
	Type getItem();
	void setItem(Type &theitem);
};
#endif /* defined(__Queue__Node__) */