#include <stdio.h>
#include<stdlib.h>
struct Node /*create a data type struct Node with two fields*/
{
    int data;  /*Denote the data part in the node of a linked list*/
    struct Node* next; /*Denote the address field in node*/
};

struct Node* top=NULL; //Top of this stack implementation is basically head node of a linked list
void Push(int x)//Pushing data at top of stack
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=top;
    top=temp;
    
    
}
void pop() //deleting data at top of stack
{
    struct Node* temp;
    if(top==NULL) return;
    temp=top;
    top=top->next;
    free(temp);
}
void print(){ //printing the stack
   struct Node* temp=top;
    printf("\nThe stack is\n");
    while(temp!=NULL){
        printf("%d\t",temp -> data);
        temp=temp -> next;
}
}
void Top(){ //printing the value at top of stack
    struct Node*temp=top;
    return printf("The top element is\t%d\n",temp->data);
}
void Isempty() //Checking if stack is empty
{
    if(top==NULL)
    {
        return printf("\nStack is empty");
    }
}

int main(void) {
	// your code goes here
	Push(2);
	Push(3);
	Push(78);
	Push(890);
	print();
	pop();
	print();
	Top();
	pop();
	pop();
	pop();
	Isempty();
	
	return 0;
}

