#include <iostream>
#include "../header/HashMap.h"

int main (int argc, char const *argv[]){
	
	//EXAMPLE OF HASH MAP
	HashMap test;
	test.put(3,34);
	test.put(1,555);
	test.put(20,323);
	test.put(55,23);
	test.put(120,111);
	int val1 = test.get(3);
	int val2 = test.get(1);
	int val3 = test.get(20);
	int val4 = test.get(55);
	int val5 = test.get(120);
	std::cout<<" val1 retrieved is: " << val1 << std::endl;
	std::cout<<" val2 retrieved is: " << val2 << std::endl;
	std::cout<<" val3 retrieved is: " << val3 << std::endl;
	std::cout<<" val4 retrieved is: " << val4 << std::endl;
	std::cout<<" val5 retrieved is: " << val5 << std::endl;
	
	test.remove(3);
	
	//This will fail because the key 3 and the value 34 have been removed
	std::cout<< test.get(3);
	return 0;
}