/*

        A
      /   \
    B       C
  /   \       \
 D     E        F

            L 5 R
          /       \
       L 7 R     L 4 R  
      /     \        \
    X 1 X  X 8 X    X 9 X

*/
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};


int main(){
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    struct node *sixth = (struct node *)malloc(sizeof(struct node));

    head->left = first;
    first->data = 5;
    first->left = second;
    first->right = third;

    second->data = 7;
    second->left = fourth;
    second->right = fifth;

    third->data = 4;
    third->left = NULL;
    third->right = sixth;

    fourth->data = 1;
    fourth->left = NULL;
    fourth->right = NULL;

    fifth->data =8;
    fifth->left = NULL;
    fifth->right = NULL;

    sixth->data = 9;
    sixth->left = NULL;
    sixth->right = NULL;
}
