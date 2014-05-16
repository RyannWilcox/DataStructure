//
//  main.cpp
//  Stack
//
//  Created by Ryan Wilcox on 8/2/12.
//  Copyright (c) 2012 Ryan Wilcox. All rights reserved.
//

#include <iostream>
#include "Stack.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Stack theStack;
    int choice;
    while(1)
    {
        cout<<"\n-----------------------------------------------------------";
        cout<<"\n\t\tStack using linked list\n\n";
        cout<<"1:Push\n2:Pop\n3:Display Stack\n4:Exit";
        cout<<"\nEnter your choice(1-4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                theStack.push();
                break;
            case 2:
                theStack.pop();
                break;
            case 3:
                theStack.showStack();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Please enter correct choice(1-4)!!";
          
                break;
        }
    }
 
    return 0;
}

