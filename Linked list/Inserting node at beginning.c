#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;//global variable 

void insert(int x)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp -> data=x;
    temp -> next= head;
    head=temp;
    
}

void print()
{
    struct Node* temp;
    printf("The list is\n");
    while(temp!=NULL){
        printf("%d\t",temp -> data);
        temp=temp -> next;
    }
    
    
}

int main()
{
    head=NULL; /*Empty head node*/
    printf("How many numbers\n");
    int n,i,x;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the number\n");
        scanf("%d",&x);
        insert(x);
        print();
    }
    
    

    return 0;
}
