#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head;

createNode(int info){
  struct node *newnode;
  newnode = (struct node)malloc(sizeof(struct node));
  newnode->data=info;
  newnode->next=NULL:
  if(head==NULL){
    head=newnode;
  }
}
