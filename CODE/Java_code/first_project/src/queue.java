public class queue {
     private int[] que;
     que =new int[100];
     private int front=99,rear=99;
     void push(int data){
        if(rear==-1) System.out.println("Queue is full");
         else que[rear]=data;
         rear--;
     }
     void pop(){
        if(front==-1) System.out.println("Queue is empty");
        else front--;
    }

     
}
