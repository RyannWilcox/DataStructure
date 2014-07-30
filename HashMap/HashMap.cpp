//
//  HashMap.cpp
//  HashMap
//
//  Created by Ryan Wilcox on 7/22/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#include "HashMap.h"
#include <iostream>


HashMap::HashMap(){
	std::cout<< "HashMap created" << std::endl;
	for(int i = 0;i< TABLE_SIZE;i++){
		map[i] = Node();
	}
}

Node HashMap::get(int key){
	int hashValue = hashFunction(key);
	Node test;
	return test;
}

/**
 * Adds a (key,value) set to the map
 */
void HashMap::put(int key,int value){
	int hashValue = hashFunction(key);
	std::cout<< "Hash Value: " << hashValue <<std::endl;
	if(map[hashValue].getKey() == NULL && map[hashValue].getValue() == NULL){
		map[hashValue].setKey(key);
		map[hashValue].setValue(value);
	}
	else{
		map[hashValue].setValue(value);
	}
}

 /*
 * Creates number that shows where
 * the value is in the HashMap
 */
int HashMap::hashFunction(int key){
	int hashValue = 0;
	hashValue = key % TABLE_SIZE;
	return hashValue;
}