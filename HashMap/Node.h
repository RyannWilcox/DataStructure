//
//  Node.h
//  HashMap
//
//  Created by Ryan Wilcox on 7/22/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#ifndef __HashMap__Node__
#define __HashMap__Node__

#include <iostream>

class Node{
private:
	int key;
	int value;
	
public:
	Node();
	Node(int key,int value);
	
	/* Get the key*/
	int getKey();
	
	/* Get value stored in the Node*/
	int getValue();
	
	/* Set a new Key in the Node*/
	void setKey(int newKey);
	
	/* set new value in the Node*/
	void setValue(int newValue);
};

#endif /* defined(__HashMap__Node__) */