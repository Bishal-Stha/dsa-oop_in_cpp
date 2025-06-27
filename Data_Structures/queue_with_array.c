#include <stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front = -1, rear = -1;

void enqueue(int x){
    if(rear < N-1){
        if(front == -1)
        front++;
        rear++;
        queue[rear] =x;
    }
    else
    printf("queue is full.\n");
}

void dequeue(){
    if(front == -1)
    printf("Nothing to dequeue\n");
    else{
        printf("dequeuing %d\n",queue[front]);
    front++;
    }
}

void peek(){
    if(front == -1)
    printf("queue is empty\n");
    else
    printf("peek: %d\n",queue[front]);
}

void display(){
    if(front == -1 || front > rear)
        printf("queue is empty\n");
    else{
        for(int i = front; i <= rear; i++){
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    enqueue(10);
    enqueue(20);
    enqueue(-4);
    dequeue();
    display();
    peek();
    dequeue();
    peek();
    display();
    
    return 0;
}