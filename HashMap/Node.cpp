#include "Node.h"


Node::Node(){}

Node::Node(int k,int v){
	key = k;
	value = v;
}

/*
 * Destructor	
 */
Node::~Node(){}

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