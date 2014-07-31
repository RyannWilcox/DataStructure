//
//  HashMap.h
//  HashMap
//
//  Created by Ryan Wilcox on 7/22/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#ifndef __HashMap__HashMap__
#define __HashMap__HashMap__

#include <iostream>
#include "Node.h"

const int TABLE_SIZE = 128;

class HashMap{
private:
	Node map[TABLE_SIZE];
	
public:
	HashMap();
	
	/*
	 * returns the value of contained in the
	 * node by using the key
	 */
	int get(int key);
	
	/*
	 * Puts a value and key into a node in the map
	 */
	void put(int key,int value);
	
	/*
	 * Creates a hash value for locating the
	 * position in the hashMap
	 */
	int hashFunction(int key);
};

#endif /* defined(__HashMap__HashMap__) */