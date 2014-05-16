//
//  Node.cpp
//  Queue
//
//  Created by Ryan Wilcox on 2/21/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#include "Node.h"
#include <string>
#include <iostream>
using namespace std;

template<typename Type>
Node<Type>::Node(){
	next = nullptr;
	item = NULL;
}
template<typename Type>
Node<Type>::Node(Type &theItem, Node *nextNode){
	next = nextNode;
	item = theItem;
}

template<typename Type>
Node<Type>::~Node(){}

template <typename Type>
Node<Type>* Node<Type>:: getNext(){
	return next;
}

template <typename Type>
void Node<Type>::setNext(Node<Type> *nextNode){
	next = nextNode;
}

template <typename Type>
Type Node<Type>::getItem(){
	return item;
}

template <typename Type>
void Node<Type>:: setItem(Type &theItem){
	item = theItem;
}

/*
 * These will make it so the template can be
 * in a cpp and h file. Now the Node template
 * can be whatever type is listed below.
 * If didnt do this then the implementation would
 * have to be in the h file
 */
template class Node<int>;
template class Node<double>;
template class Node<float>;
template class Node<long>;
template class Node<char>;
