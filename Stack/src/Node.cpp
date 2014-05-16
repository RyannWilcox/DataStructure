//
//  Node.cpp
//  Practice
//
//  Created by Ryan Wilcox on 7/29/12.
//  Copyright (c) 2012 Ryan Wilcox. All rights reserved.
//

#include "Node.h"

Node::Node()
    :listItem(), next(NULL)
{       }

Node::Node(int& item, Node* nextNode)
    :listItem(item),next(nextNode)
{       }

Node::~Node()
{       }

void Node::setListItem(int& item)
{ listItem = item; }

void Node::setNext(Node* nextNode)
{ next = nextNode; }

int Node::getListItem() const
{ return listItem; }

Node* Node::getNext() const
{ return next; }


