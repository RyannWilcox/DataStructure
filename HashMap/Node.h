class Node{
	private:
		int key;
		int value;

	public:
		Node();
		Node(int key,int value);
		~Node();
		
		/* Get the key*/
		getKey();
		
		/* Get value stored in the Node*/
		getValue();
		
		/* Set a new Key in the Node*/
		setKey(int newKey);
		
		/* set new value in the Node*/
		setValue(int newValue);
};