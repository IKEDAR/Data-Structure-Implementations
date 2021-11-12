#include <stdio.h>
#define MAXSIZE 101
int A[MAXSIZE];
int top=-1;

void Push(int x)
{
    if(top==MAXSIZE-1){
        printf("Stack Overflow\n");
        return;
    }
    A[++top]=x;
}

void Pop()
{
    if(top==-1){
        printf("No element to Pop");
        return;
    }
    top--;
}
int print()
{
    int i=0;
    for(i=0;i<=top;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int Top(){
    return printf("%d\n",A[top]);
}

int main(void) {
	// your code goes here
	Push(2);
	Push(4);
	Push(5);
	Push(6);
	Pop();
	print();
	Top();
	
	return 0;
}

