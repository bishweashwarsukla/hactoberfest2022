public class InsertMid {  
  
    //Represent a node of the doubly linked list  
  
    class Node{  
        int data;  
        Node previous;  
        Node next;  
  
        public Node(int data) {  
            this.data = data;  
        }  
    }  
  
    public int size = 0;  
    //Represent the head and tail of the doubly linked list  
    Node head, tail = null;  
  
    //addNode() will add a node to the list  
    public void addNode(int data) {  
        //Create a new node  
        Node newNode = new Node(data);  
  
        //If list is empty  
        if(head == null) {  
            //Both head and tail will point to newNode  
            head = tail = newNode;  
            //head's previous will point to null  
            head.previous = null;  
            //tail's next will point to null, as it is the last node of the list  
            tail.next = null;  
        }  
        else {  
            //newNode will be added after tail such that tail's next will point to newNode  
            tail.next = newNode;  
            //newNode's previous will point to tail  
            newNode.previous = tail;  
            //newNode will become new tail  
            tail = newNode;  
            //As it is last node, tail's next will point to null  
            tail.next = null;  
        }  
        //Size will count the number of nodes present in the list  
        size++;  
    }  
  
    //addInMid() will add a node to the middle of the list  
    public void addInMid(int data) {  
       //Create a new node  
        Node newNode = new Node(data);  
  
        //If list is empty  
        if(head == null) {  
            //Both head and tail will point to newNode  
            head = tail = newNode;  
            //head's previous will point to null  
            head.previous = null;  
            //tail's next point to null, as it is the last node of the list  
            tail.next = null;  
        }  
        else {  
            //current will point to head  
            Node current = head, temp = null;  
  
            //Store the mid position of the list  
            int mid = (size % 2 == 0) ? (size/2) : ((size+1)/2);  
  
            //Iterate through list till current points to mid position  
            for(int i = 1; i < mid; i++){  
                current = current.next;  
            }  
  
            //Node temp will point to node next to current  
            temp = current.next;  
            temp.previous = current;  
  
            //newNode will be added between current and temp  
            current.next = newNode;  
            newNode.previous = current;  
            newNode.next = temp;  
            temp.previous = newNode;  
        }  
        size++;  
    }  
  
    //display() will print out the nodes of the list  
    public void display() {  
        //Node current will point to head  
        Node current = head;  
        if(head == null) {  
            System.out.println("List is empty");  
            return;  
        }  
        while(current != null) {  
            //Prints each node by incrementing the pointer.  
  
            System.out.print(current.data + " ");  
            current = current.next;  
        }  
        System.out.println();  
    }  
  
    public static void main(String[] args) {  
  
        InsertMid dList = new InsertMid();  
        //Add nodes to the list  
        dList.addNode(1);  
        dList.addNode(2);  
  
        System.out.println("Original list: ");  
        dList.display();  
  
        //Adding node '3' in the middle  
        dList.addInMid(3);  
        System.out.println( "Updated List: ");  
        dList.display();  
  
        //Adding node '4' in the middle  
        dList.addInMid(4);  
        System.out.println("Updated List: ");  
        dList.display();  
  
        //Adding node '5' in the middle  
        dList.addInMid(5);  
        System.out.println("Updated List: ");  
        dList.display();  
    }  
}  
