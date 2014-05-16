//
//  Node.h
//  Practice
//
//  Created by Ryan Wilcox on 7/29/12.
//  Copyright (c) 2012 Ryan Wilcox. All rights reserved.
//


#ifndef __Practice__Node__
#define __Practice__Node__

#ifndef NULL
#define NULL 0
#endif

#include <iostream>

/**
 *Class Node - list node implementation for nodes that hold integers
 */
class Node
{
private:
    /**
     *listItem      What the node stores
     */
    int listItem;
    
    /**
     * next         Reference to next node in list, If NULL, this is last node
     */
    Node* next;
    
public:
    /**
     * Default Constructor - item is default cavern and next is NULL
     */
    Node();
    
    /**
     * Constructor for node when item is provided. Next node reference
     * is option and NULL if not present.
     * @param 	item		cavern to store in node
     * @param	nextNode	reference to next node in list (default is NULL)
     */    Node(int& item, Node* nextNode = NULL);
    
    /**
     * Destructor
     */
    ~Node();
    
    /**
     * Simple Accessor for item
     * @return      int item stored in node
     */
    int getListItem() const;
    /**
     * Simple accessor for next
     * @return	reference to next node in chain
     */
    Node* getNext() const;
    /**
     * Simple mutator for item
     * @param	new int for node to store in item
     */
    void setListItem(int& item);
    
    /**
     * Simple mutator for next
     * @param		reference to next node in chain
     */
    void setNext(Node* nextNode);

    

};
#endif /* defined(__Practice__Node__) */
