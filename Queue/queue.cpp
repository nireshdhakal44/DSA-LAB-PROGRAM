// Online C compiler to run C program online
#define MAX 5
#include <stdio.h>
struct stack{
    int item[MAX];
    int top;
};
typedef struct stack st;
st s1;
void push()
{
    int x;
    if(s1.top==MAX-1)
    {
        printf("Stack is full. Items cannot be inserted: \n");
    }
    else
    {
        printf("Enter the item to be PUSHED: \n");
          scanf("%d",&x);
          s1.top=s1.top+1;
          s1.item[s1.top]=x;
    }
 
}
void pop()
{
    if(s1.top==-1)
    {
        printf("Stack is empty. Nothing to delete: \n");
    }
    else
    {
        printf("The POPPED item is: %d \n",s1.item[s1.top]);
        s1.top=s1.top-1;
            }
}
void display()
{
    if(s1.top==-1)
    {
        printf("Stack is empty. Nothing to display: \n");
    }
    else
    {
        int i=s1.top;
        printf("Items in the stack are: \n");
        for(i=s1.top;i>=0;i--)
        {
            printf("%d\n", s1.item[i]);
        }
    }
}  
 
int main() 
{
    int choice;
    s1.top=-1;
    while(choice!=4)
    {
    printf("***** Enter the Choice ******\n 1. To enqueue \n 2. To Dequeue\n 3. To display items\n 4. To exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: display();
        break;
        default: printf("Enter the valid choice \n");
        break;
    }
    }

    return 0;
}