//To create a Linear Queue and perform  using Linear Linked List and perform insertion and  deletion  and display Queue data.

import java.util.*;

class Qnode {
    int info;
    Qnode next;

    Qnode(int key) {
        this.info = key;
        this.next = null;
    }
}

class Queue {
    Qnode front,rear;
    public Queue() {
        this.front = this.rear = null;
    }
    void enQueue(int key) {
        Qnode q =new Qnode(key);
        if(this.rear == null) {
            this.front = this.rear = q;
        }
        else {
            this.rear.next = q;
            this.rear = q;
        }

    }

    Qnode deQueue() {
        if(this.front == null ) {
            System.out.println("Queue Empty");
            return null;
        }
        else {
            Qnode temp = this.front;
            this.front = this.front.next;

            if(this.front == null) {
                this.rear = null;
            }
           return temp;
        }
    }

    void show(Qnode q) {
         if(this.rear == q) {
            System.out.print(q.info);
            return ;
        }
        else {
            System.out.print(q.info + "->");
        }
        show(q.next);
    }
}

public class Main {
    public static void main(String[] args) {
Queue q1 = new Queue();
q1.enQueue(5);
q1.enQueue(6);
q1.enQueue(9);
q1.enQueue(2);
q1.enQueue(100);
System.out.print("The Queue is : ");
q1.show(q1.front);
for(int i=0; i < 3; i++ ) {
    System.out.print("\nThe Queue after popping " + (1+i) + " element is : ");
    q1.deQueue();
    q1.show(q1.front);
        }
    }
}
