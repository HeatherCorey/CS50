#include <cs50.h>
#include <stdio.h>


typedef struct node
{
    int num;       //payload
    struct node* next;      //points to next number
}
node;

void append(int value, node* list);
void printList(node* list);


int main()
{
    node* head = malloc(sizeof(node));
    head -> num = 2;
    head -> next = NULL;
    append(GetInt(), head);
    

    printList(head);
    
    node* crawler = head;
    
    while(crawler != NULL)
        {
            node* temp = crawler -> next;
            free(crawler);
            crawler = temp;
        }  // know we're at the end
}

void append(int value, node* list)
{
    node* newNode = malloc(sizeof(node));
    newNode -> num = value;
    newNode -> next = NULL;
    
    if (list == NULL)
    {
        *list = *newNode;
    }
    else
    {
        node* crawler = list;
        while(crawler -> next != NULL)
        {
            crawler = crawler->next;
        }  // know we're at the end
        crawler->next = newNode;
    }
}
void printList(node* list)
{
    if (list == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        node* crawler = list;
        while(crawler != NULL)
        {
            printf("%i\n", crawler->num);
            crawler = crawler->next;
        }  // know we're at the end
    }
}