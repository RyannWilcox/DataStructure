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
}

Node HashMap::get(int key){
	Node test;
	return test;
}

void HashMap::put(int key,int value){
	std::cout<<"put";
}

int HashMap::hashFunction(int key){
	return key;
}