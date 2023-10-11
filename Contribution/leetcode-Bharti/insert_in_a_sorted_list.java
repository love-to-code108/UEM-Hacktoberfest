import java.util.*;
class Node
    {
        int data;
        Node next;
        Node(int d) {data = d; next = null; }
    }
public class insert_in_a_sorted_list {
    public static void main(String[] args) {
        Node head1 = new Node(1);
        head1.next = new Node(3);
        head1.next.next = new Node(4);
        head1.next.next.next = new Node(5);
        head1.next.next.next.next = new Node(6);
        head1.next.next.next.next.next = new Node(8);
        head1.next.next.next.next.next.next = new Node(9);
        head1.next.next.next.next.next.next.next = new Node(10);
        head1.next.next.next.next.next.next.next.next = new Node(11);
        head1.next.next.next.next.next.next.next.next.next = new Node(12);
        head1.next.next.next.next.next.next.next.next.next.next = new Node(13);
       Node ans = sortedInsert(head1, 7);
         while(ans!=null){
              System.out.print(ans.data+" ");
              ans=ans.next;
         }
    }
    static Node sortedInsert(Node head1, int key) {
        if(key<=head1.data){
            Node newNode=new Node(key);
            newNode.next=head1;
            head1=newNode;
            return head1;
        }
        Node temp=head1;
        while(temp.next!=null&&key>=temp.next.data)temp=temp.next;
        Node newNode=new Node(key);
        newNode.next=temp.next;
        temp.next=newNode;
        
        return head1;
    }
}
