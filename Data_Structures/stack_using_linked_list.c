#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *link;
};

struct node *top = NULL;

void push(int x);
void pop();
void display();
void peek();

int main(){
    for(int i=1; i<=10; i++){
        push(i);
    }
    peek();
    pop();
    display();
    peek();
    
    return 0;

}

void push(int x){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void pop(){
    if(top == NULL)
    printf("Stack is empty. Nothing to pop.\n");
    else{
    printf("%d is popped.\n",top->data);
    top = top->link;
    }
}

void display(){
    if(top==NULL)
    printf("Stack is empty, nothing to display.\n");
    else {
        struct node *temp = top;
        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->link;
        }
    }
}

void peek(){
    if(top==NULL)
    printf("Stack is empty. Nothing to peek\n");
    else
    printf("Top most data: %d\n",top->data);
}