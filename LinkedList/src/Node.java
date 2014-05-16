
public class Node {
	private int value = 0;
	private Node next;
	
	public Node(){
		value = 0;
		next = null;
	}
	
	public int getValue(){
		return value;
	}
	public Node getNext(){
		return next;
	}
	public void setValue(int val){
		value = val;
	}
	public void setNext(Node nextNode){
		next = nextNode;
	}
}
