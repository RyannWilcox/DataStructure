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
	//initializes all the node objects in the array
	for(int i = 0;i< TABLE_SIZE;i++){
		map[i] = Node();
	}
}

/**
 * Uses the provided key to find the value in the HashMap
 */
int HashMap::get(int key){
	int hashValue = hashFunction(key);
	if(map[hashValue].getKey() != key && map[hashValue].getValue() == NULL){
		std::cout<<"Could Not find the (key,value) pair" << std::endl;
		return -1;
	}
	else{
		int result = map[hashValue].getValue();
		return result;
	}
}

/**
 * Adds a (key,value) set to the map
 */
void HashMap::put(int key,int value){
	int hashValue = hashFunction(key);
	std::cout<< "Hash Value: " << hashValue <<std::endl;
	// If the Node is empty then we will add our key and value to that node
	if(map[hashValue].getKey() == NULL && map[hashValue].getValue() == NULL){
		map[hashValue].setKey(key);
		map[hashValue].setValue(value);
	}
	// If it is not empty we will replace that value with the new one
	else{
		map[hashValue].setValue(value);
	}
}

/*
 * Tries to find the entry with the provided key.  If found
 * that entry will be removed
 */
void HashMap::remove(int key){
	int hashValue = hashFunction(key);
	
	if(map[hashValue].getKey() == key){
		map[hashValue].setKey(NULL);
		map[hashValue].setValue(NULL);
	}
	else{
		std::cout << "Could not find a matching key in the hash map" << std::endl;
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