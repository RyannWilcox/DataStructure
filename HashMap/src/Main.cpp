#include <iostream>
#include "../header/HashMap.h"

int main (int argc, char const *argv[]){
	bool keepLoop = true;
	int choice;
	int key;
	int value;
	HashMap map;
   while(keepLoop){
      std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
      std::cout << "\n\t\tHash Map\n\n";
      std::cout << "1:Put\n2:Get\n3.Remove\n4:Exit";
      std::cout << "\nEnter your choice(1-4): ";
      std::cin >> choice;
       switch(choice){
           case 1:
			  		std::cout << "Enter an integer value for a key: \n";
			  		std::cin >> key;
			  		std::cout << "Enter an integer value: \n";
			  		std::cin >> value;
			  		map.put(key,value);
					std::cout <<"(" <<key <<", "<< value << ") " << "Added to the Hash Map\n";
               break;
           case 2:
			  		std::cout << "Enter an integer key: \n";
					std::cin >> key; 
			  	 	std::cout << "The value found is: " << map.get(key)<<std::endl;
               break;
			  case 3:
			 	 	std::cout << "Enter an integer key: \n";
			  	 	std::cin >> key;
			  	 	map.remove(key);
					break;
           case 4:
			  		exit(0);
               break;
           default:
               std::cout<<"Please enter correct choice(1-4)";
               break;
       }
   }
	return 0;
}