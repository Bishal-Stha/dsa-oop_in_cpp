#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *link;
}s1;

int main()
{
    // s1.link = &s1;
    // printf("Pointer address: %p\n",&s1);
    // printf("link address: %p\n",s1.link);
    // struct node *head = NULL;
    // printf("address of head: %p",head);

    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 50;
    head->link = NULL;

    printf("Address of head: %p\n",&head); // Some value. head = 425515 something like this.
    printf("Value of head->data pointed by head: %d\n",head->data); // head->data = 50
    printf("Address pointed by head->link: %p\n",head->link); // head->link = 000000 // It is pointing to NULL or Nowhere.
    printf("\n");

    //So now, let go further and make another node where we can put value.
    struct node *l1;
    head->link = l1;
    l1->data = 60;
    l1->link = NULL;

    printf("Address pointed by head->link: %p\n",head->link);
    printf("Value of l1->data: %d\n",l1->data);
    printf("Address pointed by l1->link: %p\n",l1->link);

    free(head);
    return 0;
}