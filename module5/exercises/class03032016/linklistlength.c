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
int lengthR(node* list);


int main()
{
    node* head = malloc(sizeof(node));
    head -> num = 2;
    head -> next = NULL;
    append(9, head);
    

    lengthR(head);
    
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
    //int counter = 0;
    if (list == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        node* crawler = list;
        while(crawler != NULL)
        {
            //counter++;
            printf("%i", crawler -> num);
            crawler = crawler->next;
        }  // know we're at the end
    }
    //printf("There is/are currently %i item(s) in this list.\n",counter);
}


int lengthR(node* list)
{
    if(list == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + lengthR(list -> next);
    }
}