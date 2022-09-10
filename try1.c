#include <stdio.h>
#define SIZE 5
int iteam[SIZE];
int front=-1,rear=-1;
int is_full()
{
    if((rear+1)%SIZE==front)
    {
        return(1);
    }
    else{
        return(0);
    }
}
int is_empty()
{
    if(front==-1 && rear==-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
void Enqueue(int n)
{
    if(is_full())
    {
        printf("Queue overflow \n");
        
    }
    else{
        if(front==-1){
            front=0;
        }
        rear=(rear+1)%SIZE;
        iteam[rear]=n;
    }
}
void Dequeue()
{
    if(is_empty())
    {
        printf("\nQueue is empty \n");
        
    }
    else{
        front=front+1;
        
    }
}
void Display(){
    if(is_empty==0){
        printf("\nQueue is empty\n");
        return;
    }
    if(front>rear)
        {
            int ptr=front;
            while(ptr!=rear)
            {
                printf("%d ",iteam[ptr]);
                ptr=(ptr+1)%SIZE;
            } 
            printf("%d ",iteam[ptr]);
        }
        else
        {
            int ptr=front;
            while(ptr<=rear)
            {
                printf("%d ",iteam[ptr]);
                ptr=(ptr+1);
            }
            printf("\n");
        }
}
int main(){
    while(1)
    {

    printf("if u want enqueqe enter 1 \n");
    printf("if u want dequeue enetr 2 \n");
    printf("if u want to display enter 3 \n");
    printf("if u wnat to check if the queue is empty enter 4 \n");
    printf("if u wnat to check if the queue is full enter 5 \n");
    printf("if u wnat to exit enter 6 \n");
    int n,x;
    printf("Enter what you wnat to choose: \n");
    scanf("%d",&x);
   switch(x)
   {
        case 1: 
        printf("Enter the number u want to enqueue:\n");
        scanf("%d",&n);
        Enqueue(n);
        break;
        case 2: 
        Dequeue();
        break;
        case 3: 
        Display();
        break;
        case 4:
        if(is_empty)
        {
            printf("Queue is emty");
        }
        break;
        case 5:
        if(is_full)
        {
            printf("Queue overflow !!");
        }
        break;
        default: 
        break;
        break;
    }
}
    return 0;
}