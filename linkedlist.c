#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int calSize(struct Node *node)
{
    int size = 0;
    while (node != NULL)
    {
        node = node->next;
        size++;
    }
    return size;
}

void inserPosition(int pos, int data, struct Node **head)
{

    int size = calSize(*head);

    if (pos < 1 || pos > size)
    {
        printf("Can't insert, %d is not a valid position\n", pos);
    }
    else
    {

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        struct Node *temp = *head;
        newNode->data = data;
        newNode->next = NULL;

        while (--pos)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insertStart(struct Node **head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
}

void insertLast(struct Node **head, int data)
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    struct Node *temp = *head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteStart(struct Node **head)
{
    struct Node *temp = *head;

    if (*head == NULL) // If the linkedlist is empty;
    {
        printf("Linked List Empty, nothing to delete\n");
        return;
    }

    *head = (*head)->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

void deleteEnd(struct Node **head)
{
    struct Node *temp = *head;
    struct Node *previous;

    if (*head == NULL) // If the linkedlist is empty;
    {
        printf("Linked List Empty, nothing to delete\n");
        return;
    }

    if (temp->next == NULL) // If the linkedlist have only one node
    {
        printf("Deleted: %d\n", (*head)->data);
        *head = NULL;
        return;
    }

    while (temp->next != NULL)
    {
        previous = temp;
        temp = temp->next;
    }

    previous->next = NULL;
    printf("Deleted: %d\n", temp->next);
    free(temp);
}

void deletePosition(struct Node **head, int pos)
{

    struct Node *temp = *head;
    struct Node *previous;

    int size = calSize(*head);

    if (pos < 1 || pos > size)
    {
        printf("Enter valid position\n");
        return;
    }

    if (pos == 1)
    {
        printf("Deleted: %d\n", temp->data);
        *head = (*head)->next;
        free(temp);
        return;
    }

    while (--pos)
    {
        previous = temp;
        temp = temp->next;
    }

    previous->next = temp->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

int main()
{

    struct Node *head = NULL;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    traversal(head);

    insertStart(&head, 10);
    insertStart(&head, 30);
    insertStart(&head, 70);

    printf("NewLIST\n");
    traversal(head);

    insertLast(&head, 1);
    insertLast(&head, 2);
    insertLast(&head, 3);
    insertLast(&head, 4);

    printf("NewLIST\n");
    traversal(head);

    return 0;
}