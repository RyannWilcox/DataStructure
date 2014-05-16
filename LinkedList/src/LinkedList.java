
public class LinkedList {
	private Node head = null;
	private Node cur = null;
	private int size = 0;
	
	public LinkedList(){
		head = null;
		cur = null;
		size = 0;
	}
	public boolean isEmpty(){
		return size == 0;
	}
	public int getLength(){
		return size;
	}
	
	public void addToBack(int newItem){
		Node newNode = new Node();
		newNode.setValue(newItem);
		newNode.setNext(null);
		cur = head;
		if(cur == null){
			head = newNode;
		}
		else{
			for(int i=0;i<getLength() - 1;i++){
				cur = cur.getNext();
			}
				cur.setNext(newNode);
			}
		size++;
	}
	
	public void addToFront(int newItem){
		Node newNode = new Node();
		newNode.setValue(newItem);
		if(head == null){
			head = newNode;
		}
		else{
			newNode.setNext(head);
			head = newNode;
		}
		size++;
	}
	
	public void insertAtIndex(int newItem,int index){
		Node newNode = new Node();
		newNode.setValue(newItem);
		newNode.setNext(null);
		if(index > size || index < 0 ){
			System.err.println("index parameter is not within bounds");
		}
		if(head == null){
			head = newNode;
			size++;
		}
		else{
			Node temp = new Node();
			cur = head;
			for(int i = 1;i<index - 1;i++){
				cur = cur.getNext();
			}
			temp = cur;
			temp = temp.getNext();
			cur.setNext(newNode);
			newNode.setNext(temp);
			size++;
		}
	}
	
	public void deleteAtIndex(int index){
		if(index> size || index < 0){ // if index isnt within bounds
			System.err.println("index parameter is not within bounds");
		}
		if(isEmpty()){ // if empty list
			System.err.print("This is an empty list");
		}
		if(index == 1){ // to remove first Node
			head = head.getNext();
		}
		else{
			Node nodeToDelete = new Node(); // this will be the node to be deleted
			Node nodeToConnect = new Node(); //must connect cur to this after deletion
			cur = head;
			for(int i = 1;i< index - 1;i++){
				cur = cur.getNext();
			}
			nodeToDelete = cur;
			nodeToDelete = nodeToDelete.getNext();
			if(nodeToDelete.getNext() == null){ // to remove last node
				cur.setNext(null);
			}
			else{
			nodeToConnect = nodeToDelete;
			nodeToConnect = nodeToConnect.getNext();
			nodeToDelete.setNext(null);
			cur.setNext(nodeToConnect);
			}
		}
		size--;
	}
	
	public Node findAtIndex(int index){
		cur = head;
		for(int i = 1;i<index;i++){
			cur = cur.getNext();
		}
		return cur;
	}
	
	public String printList(){
		Node current = head;
		String list = "";
		while(current != null){
			System.out.print("[ "+current.getValue()+" ] ");
			list = list + "[" + current.getValue()+"] ";
			current = current.getNext();
		}
		return list;
	}
	
	public Node getHead(){
		return head;
	}
}
