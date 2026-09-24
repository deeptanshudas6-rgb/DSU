// Experiment 8: Singly Linked List Insertion Operations
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

void insertBeg()
{
    struct Node *newnode;

    newnode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=head;
    head=newnode;
}

void insertEnd()
{
    struct Node *newnode,*temp;

    newnode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;

        while(temp->next!=NULL)
            temp=temp->next;

        temp->next=newnode;
    }
}

void insertAfter()
{
    struct Node *temp=head,*newnode;
    int key;

    printf("Enter node after which to insert: ");
    scanf("%d",&key);

    while(temp!=NULL && temp->data!=key)
        temp=temp->next;

    if(temp==NULL)
    {
        printf("Node not found\n");
        return;
    }

    newnode=(struct Node*)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d",&newnode->data);

    newnode->next=temp->next;
    temp->next=newnode;
}

void search()
{
    struct Node *temp=head;
    int key,flag=0;

    printf("Enter key to search: ");
    scanf("%d",&key);

    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            flag=1;
            break;
        }

        temp=temp->next;
    }

    if(flag)
        printf("Element found\n");
    else
        printf("Element not found\n");
}

int main()
{
    int ch;

    while(1)
    {
        printf("\n1.Insert Beginning");
        printf("\n2.Insert End");
        printf("\n3.Insert After Node");
        printf("\n4.Search");
        printf("\n5.Display");
        printf("\n6.Exit");

        printf("\nEnter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insertBeg(); break;
            case 2: insertEnd(); break;
            case 3: insertAfter(); break;
            case 4: search(); break;
            case 5: display(); break;
            case 6: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}
