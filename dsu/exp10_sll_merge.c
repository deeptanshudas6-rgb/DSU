// Experiment 10: Merge Two Sorted Singly Linked Lists
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* create()
{
    struct Node *head=NULL,*temp=NULL,*newnode;
    int n,i;

    printf("Enter number of nodes: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d",&newnode->data);

        newnode->next=NULL;

        if(head==NULL)
            head=newnode;
        else
            temp->next=newnode;

        temp=newnode;
    }

    return head;
}

void display(struct Node *head)
{
    struct Node *temp=head;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

void search(struct Node *head)
{
    struct Node *temp=head;
    int key,flag=0;

    printf("Enter key: ");
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

int count(struct Node *head)
{
    int c=0;

    while(head!=NULL)
    {
        c++;
        head=head->next;
    }

    return c;
}

struct Node* merge(struct Node *a, struct Node *b)
{
    if(a==NULL)
        return b;

    if(b==NULL)
        return a;

    if(a->data<=b->data)
    {
        a->next=merge(a->next,b);
        return a;
    }
    else
    {
        b->next=merge(a,b->next);
        return b;
    }
}

int main()
{
    struct Node *list1,*list2,*list3;

    printf("Enter first sorted list\n");
    list1=create();

    printf("Enter second sorted list\n");
    list2=create();

    printf("First List: ");
    display(list1);

    printf("Second List: ");
    display(list2);

    printf("Searching in first list\n");
    search(list1);

    printf("Number of nodes in first list: %d\n",count(list1));

    list3=merge(list1,list2);

    printf("Merged Sorted List: ");
    display(list3);

    return 0;
}
