//
//  main.cpp
//  Queue
//
//  Created by Ryan Wilcox on 2/21/14.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#include <iostream>
#include "Node.h"
#include "Queue.h"

using namespace std;

int main(int argc, const char * argv[]){
	cout << "Nodes!"<<endl;
	int test = 3;
	Queue<int> q;
	
	q.enQueue(test);
	q.enQueue(4);
	q.enQueue(2343);
	q.enQueue(55);
	q.enQueue(30303);
	
	int something = q.deQueue();
	
	cout<< something<<endl;
    return 0;
}

