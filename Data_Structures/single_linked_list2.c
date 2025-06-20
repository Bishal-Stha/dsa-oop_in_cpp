/*
We want to store the list of numbers
25,54, 78, 90
using linked list.
*/

# include<stdio.h>
# include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    //
    int size =4;
    struct node *head = NULL;
    head = (struct node *)malloc(size* sizeof(struct node));

    head[0].data = 25;
    head[0].link = &head[1];

    head[1].data = 54;
    head[1].link = &head[2];

    head[2].data = 78;
    head[2].link = &head[3];

    head[3].data = 90;
    head[3].link = NULL;

    for(int i=0; i<size; i++){
        printf("head[%d].data: %d\n",i,head[i].data);
        printf("head[%d].link is pointing to %p address\n",i,head[i].link);
        printf("\n");
    }
    free(head);

    // Above code is perfect but not that flexible.
// Lets replicate 37, 49, 53, 89

    struct node *ptr = (struct node *)malloc(sizeof(struct node));  
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    ptr->link= first;
    printf("ptr->link is pointing to %p\n",ptr->link);

    first->data = 37;
    printf("first->data: %d\n",first->data);
    first->link = second;
    printf("first->link is pointing to %p\n",first->link);

    second->data = 49;
    printf("second->data: %d\n",second->data);
    second->link = third;
    printf("second->link is pointing to %p\n",second->link);

    third->data = 53;
    printf("third->data: %d\n",third->data);
    third->link = fourth;
    printf("third->link is pointing to %p\n",third->link);

    fourth->data = 89;
    printf("fourth->data: %d\n",fourth->data);
    fourth->link = NULL;
    printf("fourth->link is pointing to %p\n",fourth->link);


free(ptr);
free(first);
free(second);
free(third);
free(fourth);

return 0;
}