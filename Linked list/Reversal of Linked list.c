#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* head;

void insert(int x,int n){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp -> data = x;
  temp -> next = NULL;
  if(n ==1){
    temp -> next= head;
    head= temp;
    return;
  }
  struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
  temp1=head;
  int i;
  for(i=0;i<n-2;i++){
    temp1=temp1 -> next;
  }
  temp -> next= temp1 -> next;
  temp1 -> next=temp;
  return;
  
}
void print(){
   struct Node* temp=head;
    printf("The list is\n");
    while(temp!=NULL){
        printf("%d\t",temp -> data);
        temp=temp -> next;
}
}
struct Node*  reverse(struct Node* head){
    struct Node *current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
    
    


int main()
{
    printf ("Ssup niggga\n");
    head=NULL;
    insert(2,1); //2
    insert(3,2); // 2 3
    insert(4,1); // 4 2 3
    insert(5,3); // 4 2 5 3
    print();
    head=reverse(head);
    print();
    
    return 0;
    
};