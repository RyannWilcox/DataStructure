//
//  Node.cpp
//  HashMap
//
//  Created by Ryan Wilcox on 7/22/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#include "../header/Node.h"

Node::Node():key(0),value(0)
{		}

Node::Node(int k,int v){
	key = k;
	value = v;
}

//returns key stored in Node
int Node::getKey(){
	return key;
}
//returns value stored in Node
int Node::getValue(){
	return value;
}
//sets new Key value
void Node::setKey(int newKey){
	key = newKey;
}

//sets new value
void Node::setValue(int newValue){
	value = newValue;
}