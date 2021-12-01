#include <stdio.h> 
#define MAXSIZE 101 /*Defining macro for Array size to be used*/
int A[MAXSIZE]; /*Array of MAXSIZE*/
int top=-1;

void Push(int x) /*Function to push an element on top of stack*/
{
    if(top==MAXSIZE-1){ /*If stack has reached its maxsize then return Stack Overflow*/
        printf("Stack Overflow\n");
        return;
    }
    A[++top]=x; /*If stack has not reached its maxsize then push element x on array position denoted by ++top*/
}

void Pop() /*To remove element which is at top of stack*/
{
    if(top==-1){ /*if top is equal to -1 then there is no element in stack*/
        printf("No element to Pop");
        return;
    }
    top--; /*reduce value of top variable by one*/
} 

int print() /*Print the stack*/
{
    int i=0;
    for(i=0;i<=top;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int Top(){ /*Return the value which is at top of stack*/
    return printf("%d\n",A[top]);
}

int main(void) {
	
	Push(2);
	Push(4);
	Push(5);
	Push(6);
	Pop();
	print();
	Top();
	
	return 0;
}

