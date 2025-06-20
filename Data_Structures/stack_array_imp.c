#include<stdio.h>
# define N 5
int Stack[N];
int top = -1;

void push(int data);
void pop();
void showtop();
void isEmpty();
void isFull();

int main()
{
    push(10); //top = 0;
    showtop();
    push(5); //top = 1
    showtop();
    push(20);//top = 2;
    showtop();
    pop();//top = 1;
    showtop();
    isEmpty();
    isFull();

    return 0;
}

void push(int data){
    if(top < N-1) { //-1,0,1,2,3,4
        top++;
        Stack[top] = data;
    }
    else 
        printf("Stack Overflow.\nCan not Push further.\n");
}

void pop(){
    if(top == -1){
        printf("Stack Underflow.\nNothing to pop.\n");
    }
    else
    printf("%d is Popped.\n",Stack[top]);
    top--;
}

void showtop(){
    if(top == -1)
    printf("Stack is empty, nothing on top.\n");
    else
    printf("top data: %d\n",Stack[top]);
}

void isEmpty(){
    if(top == -1)
    printf("Stack is Empty\n");
    else
    printf("Stack is Not Empty\n");
}

void isFull(){
    if(top==N-1)
    printf("Stack is Full\n");
    else
    printf("Stack is Not Full\n");
}