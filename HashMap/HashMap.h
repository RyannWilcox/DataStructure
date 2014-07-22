#include "Node.h"

class HashMap{
	private:
		const int TABLE_SIZE = 128;
		Node map[TABLE_SIZE];
		
	public:
		HashMap();
		~HashMap();
		
		/*
		 * returns the value of contained in the 
		 * node by using the key 
		 */
		get(int key);
		
		/*
		 * Puts a value and key into a node in the map
		 */
		put(int key,int value);
		
		
};