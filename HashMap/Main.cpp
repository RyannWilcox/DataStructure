#include <iostream>
#include "HashMap.h"

int main (int argc, char const *argv[]){
	HashMap test;
	test.put(3,34);
	int val = test.get(3);
	std::cout<<"The value retrieved is: " << val << std::endl;
	return 0;
}