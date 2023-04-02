
// test for dynamic memory allocation

package tests;

public class test_9 {
 
        // Creating object of the
        // class linked list
        LinkedList<int> ll = new LinkedList<int>();
 
        ll.add(1);
        ll.add(5);
        ll.addLast(2);
        ll.addFirst(3);
        ll.add(2, 4);
 
        ll.remove(1);
        ll.remove(3);
        ll.removeFirst();
        ll.removeLast();

    
}