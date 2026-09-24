// Experiment 9: Singly Linked List Delete Operations
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head=NULL;

void display()
{
    struct Node *temp=head;

    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

void insert()
{
    struct Node *newnode,*temp;

    newnode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    if(head==NULL)
        head=newnode;
    else
    {
        temp=head;

        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newnode;
    }
}

void deleteBeg()
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("List empty\n");
        return;
    }

    temp=head;
    head=head->next;
    free(temp);
}

void deleteEnd()
{
    struct Node *temp,*prev;

    if(head==NULL)
    {
        printf("List empty\n");
        return;
    }

    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        return;
    }

    temp=head;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }

    prev->next=NULL;
    free(temp);
}

void deleteKey()
{
    struct Node *temp=head,*prev=NULL;
    int key;

    printf("Enter key to delete: ");
    scanf("%d",&key);

    while(temp!=NULL && temp->data!=key)
    {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
    {
        printf("Node not found\n");
        return;
    }

    if(prev==NULL)
        head=temp->next;
    else
        prev->next=temp->next;

    free(temp);
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert");
        printf("\n2.Delete Beginning");
        printf("\n3.Delete End");
        printf("\n4.Delete Key");
        printf("\n5.Display");
        printf("\n6.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert(); break;
            case 2: deleteBeg(); break;
            case 3: deleteEnd(); break;
            case 4: deleteKey(); break;
            case 5: display(); break;
            case 6: exit(0);
            default: printf("Invalid choice");
        }
    }

    return 0;
}
