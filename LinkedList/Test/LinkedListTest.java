import static org.junit.Assert.*;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;


public class LinkedListTest {
	protected LinkedList testList = new LinkedList();
	protected int testNum;
	protected int testNumTwo;
	protected int testNumThree;
	
	@Before
	public void setUp() throws Exception {
		 testNum = 1;
		 testNumTwo = 2;
		 testNumThree = 3;
	}

	
	@Test
	public void testIsEmpty() {
		if(testList.getLength() == 0){
			assertTrue("Size is 0 ",testList.isEmpty());
		}
		else{
			assertFalse("Size is > 0 ",testList.isEmpty());
		}
	}

	@Test
	public void testGetLength() {
		int len = testList.getLength();
		assertEquals("length should be 0",0,len);
		
		testList.addToFront(testNum);
		testList.addToFront(testNumTwo);
		testList.addToFront(testNumThree);
		len = testList.getLength();
		assertEquals("length should be 3",3,len);
		
	}

	@Test
	public void testAddToBack() {
		testList.addToBack(testNum);
		testList.addToBack(testNumTwo);
		testList.addToBack(testNumThree);
		Node temp = testList.getHead();
		for(int i = 0;i<testList.getLength()- 1;i++){
			temp = temp.getNext();
		}
		assertEquals("The size should be 1",3,testList.getLength());
		assertEquals("The number should be 3",3,temp.getValue());
	}

	@Test
	public void testAddToFront() {
		testList.addToFront(testNumTwo);
		assertEquals("The size should be 1",1,testList.getLength());
		assertEquals("The number should be 2",2,testList.getHead().getValue());
		
		testList.addToFront(testNumThree);
		assertEquals("The size should be 2",2,testList.getLength());
		assertEquals("The number should be 3",3,testList.getHead().getValue());
	}
	
	@Test
	public void testFindAtIndex(){
		testList.addToBack(testNum);
		testList.addToBack(testNumTwo);
		testList.addToBack(testNumThree);
		int val = testList.findAtIndex(2).getValue();
		assertEquals("value should be 2",2,val);
	}
	
	@Test
	public void testDeleteAtIndex(){
		testList.addToBack(testNum);
		testList.addToBack(testNumTwo);
		testList.addToBack(testNumThree);
		testList.deleteAtIndex(1);
		assertEquals("size should be 2",2,testList.getLength());
		assertEquals("index 1 should have 2 as a value",2,testList.findAtIndex(1).getValue());
	}
	
	@Test
	public void testInsertAtIndex(){
		
	}
	
	@Test
	public void testPrintList() {
		String output = "[1] [2] [3] ";

		testList.addToBack(testNum);
		testList.addToBack(testNumTwo);
		testList.addToBack(testNumThree);
		
		assertEquals("Output should be: [1] [2] [3]",output,testList.printList());
	}
}
