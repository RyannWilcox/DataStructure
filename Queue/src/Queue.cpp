//
//  Queue.cpp
//  Queue
//
//  Created by Ryan Wilcox on 2/21/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#include "Queue.h"
#include "Node.h"
#include <iostream>
#include <string>
using namespace std;


template<typename Type>
Queue<Type>::Queue(){
	head = nullptr;
	tail = nullptr;
	size = 0;
}

template<typename Type>
Queue<Type>::~Queue(){}

template<typename Type>
void Queue<Type>::enQueue(Type data){
	Node<Type> *newNode = new Node<Type>;
	newNode->setItem(data);
	newNode->setNext(nullptr);
	
	// If this is the first item added we set tail and head
	if(head == nullptr && tail == nullptr){
		head = newNode;
		tail = newNode;
	}
	else{
		tail->setNext(newNode);
		tail = newNode;
	}
	size++;
}

template<typename Type>
Type Queue<Type>::deQueue(){
	Node<Type> *temp = head;
	
	if(head == nullptr){
		return temp->getItem();
	}
	if(head == tail){
		head = tail = nullptr;
		return head->getItem();
	}
	else{
		size--;
		head = head ->getNext();
		delete temp;
		return temp->getItem();
	}
}

template<typename Type>
int Queue<Type>::getLength(){
	return size;
}
template<typename Type>
bool Queue<Type>::isEmpty(){
	return size == 0;
}


/*
 * These will make it so the template can be
 * in a cpp and h file. Now the Queue template
 * can be whatever type is listed below.
 * If didnt do this then the implementation would
 * have to be in the h file
 */
template class Queue<int>;
template class Queue<double>;
template class Queue<float>;
template class Queue<long>;
template class Queue<char>;