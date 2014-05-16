
public class Main {

	public static void main(String[] args) {
		System.out.println("Linked List");
		
		LinkedList list = new LinkedList();
		list.addToBack(1);
		list.addToBack(2);
		list.addToBack(3);
		list.addToBack(4);
		list.addToBack(5);
		list.deleteAtIndex(3);
		list.printList();
	}

}
