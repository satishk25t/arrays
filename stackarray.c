#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int st[MAX],top = -1;
int option ,data, value;
void push(int data);
int pop();
int peek();
void display();

int main()
{
    do
    {
        printf("\n 1. PUSH ");
        printf("\n 2. POP ");
        printf("\n 3. PEEk ");
        printf("\n 4. DISPLAY ");
        printf("\n 5.EXIT ");
        printf("ENTER YOUR CHOICE");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("enter the data to be pushed");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            value = pop();
            printf("The deleted element is %d", value);
            break;

        case 3:
            value=peek();
            printf("The element stored at peek is %d", value);
            break;
        case 4:
            display();
            break;
        }
    } while (option != 5);
    return 0;
}
    void push(int data)
    {
        if (top == MAX-1)
            printf("The stack is overflow");
        else
            top++;
            st[top] = data;
    }

    int pop()
    {
          if (top ==-1)
            printf("The stack is underflow");
        else
            value = st[top];
        top--;
        return value;
    }
    void display()
    {
         int i;
         if (top==-1)
           printf("\n stack is already empty");
         else
            {
                for(i=top;i>=0;i--)
                printf("\n%d",st[i]);

            }
              
    }
    int peek()
    {
         if (top ==-1)
            printf("The stack is underflow");
         else
         return(st[top]);   
    }
    

