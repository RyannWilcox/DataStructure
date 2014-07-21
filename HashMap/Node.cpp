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

int Node::getKey(){
	return key; 
}

int Node::getValue(){
	return value;
}
void Node::setKey(int newKey){
	key = newKey;
}

void Node::setValue(int newValue){
	value = newValue;
}