import static org.junit.Assert.*;

import org.junit.Before;
import org.junit.Test;


public class NodeTest {
	Node testNode = new Node();	
	Node secondNode = new Node();
	
	@Before
	public void setUp(){
		testNode.setValue(234);
		testNode.setNext(secondNode);
	}
	@Test
	public void testGetValue() {
		assertEquals(234,testNode.getValue());
	}

	@Test
	public void testGetNext() {
		assertEquals(secondNode,testNode.getNext());
	}

	@Test
	public void testSetValue() {
		testNode.setValue(1);
		assertNotNull(testNode.getValue());
		assertEquals(1,testNode.getValue());
	}

	@Test
	public void testSetNext() {
		Node third = new Node();
		testNode.setNext(third);
		assertNotNull(testNode.getNext());
		assertEquals(third,testNode.getNext());
	}

}
