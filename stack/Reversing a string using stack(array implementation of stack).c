#include <stdio.h>
#include<string.h>
#define MAXSIZE 101
char A[MAXSIZE];
int top=-1;

void push(char x)
{
    if(top==MAXSIZE-1)
    {
       printf("Stack Overflow\n");
       return;
    }
    A[++top]=x;
}

char pop()
{
    if(top==-1)
    {
       return printf("Stack empty\n");
       
    }
    return A[top--];
}
char reverse(char word[],int n)
{
    int i=0;
    for (i=0;i<n;i++)
    {
        push(word[i]);
    }
    for (i=0;i<n;i++)
    {
        word[i]=pop();
    }
    return word;
    
    
}

int main(void) {
    char word[MAXSIZE];
    printf("Please enter your string to reverse\n");
    gets(word);
    reverse(word,strlen(word));
    printf("Reversed string is %s",word);
	
	return 0;
}

