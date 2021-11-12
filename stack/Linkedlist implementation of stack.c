#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* top=NULL;
void Push(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=top;
    top=temp;
    
    
}
void pop()
{
    struct Node* temp;
    if(top==NULL) return;
    temp=top;
    top=top->next;
    free(temp);
}
void print(){
   struct Node* temp=top;
    printf("\nThe stack is\n");
    while(temp!=NULL){
        printf("%d\t",temp -> data);
        temp=temp -> next;
}
}
void Top(){
    struct Node*temp=top;
    return printf("The top element is\t%d\n",temp->data);
}
void Isempty()
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

