//
//  Stack.cpp
//  Stack
//
//  Created by Ryan Wilcox on 8/2/12.
//  Copyright (c) 2014 Ryan Wilcox. All rights reserved.
//

#include "Stack.h"
using namespace std;


Stack::Stack()
{ top = NULL;  }

Stack::~Stack()
{       }

void Stack::push()
{
    int value;
    Node* ptr;
    
    cout<<"\nPUSH Operation\n";
    cout<<"Enter a number to insert: ";
    cin>>value;
    
    ptr = new Node;
    ptr->setListItem(value);
    ptr->setNext(NULL);
    
    if(top != NULL)
        ptr->setNext(top);
        top = ptr;
    
    cout<<"\nNew item is inserted to the stack";
}


int Stack::pop()
{
    Node* temp;
    
    if(top == NULL)
    {
        cout<<"\n The stack is empty";
        return - 1;
    }
    temp = top;
    top = top->getNext();
    cout<<"\nPOP Operation........\nPopped value is "<<temp->getListItem();
    return temp->getListItem();

    delete temp;
}



void Stack::showStack()
{
    Node* ptr1 = top;
    cout<<"\nThe stack is\n";
    
    while(ptr1!=NULL)
    {
        cout<<ptr1->getListItem()<<" ->";
        ptr1 = ptr1->getNext();
    }
    cout<<"NULL\n";
}











