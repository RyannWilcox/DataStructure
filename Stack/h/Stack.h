//
//  Stack.h
//  Stack
//
//  Created by Ryan Wilcox on 8/2/12.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#ifndef __Stack__Stack__
#define __Stack__Stack__

#include <iostream>
#include "Node.h"

class Stack{
private:
    Node* top;
    
public:
    /**
     *Simple Constructor
     */
    Stack();
    
    /**
     *Simple Destructor
     */
    ~Stack();
    
    /**
     *push      inserts an element into the stack
     */
    void push();
    
    /**
     *pop       removes and element from the stack
     */
    int pop();
    
    /**
     *showStack     prints the contents of the stack to the command line
     */
    void showStack();
    
};

#endif /* defined(__Stack__Stack__) */
