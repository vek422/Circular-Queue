/*Programm To Implement The Simple Queue*/
#include<stdio.h>

/* 
Operations
1.inQueue()
2.deQueue()
3.isFull()
4.isEmpty()
*/
int Q[5] , front = -1 , rear = -1;

int isFull()
{
    if(rear == 4)
    {
        return 1;
    }

    return 0;
}

int isEmpty()
{
    if(rear == front )
    {
        return 1;
    }
    return 0;
}


void enQueue()
{
    if(isFull())
    {
        printf("\nQueue is Full !!");
    }
    else 
    {    
        rear++;
        printf("\nEnter Number You Want To Enter : ");
        scanf("%d",&Q[rear]);
        printf("\n%d Insered ",Q[rear]);
    }
}

int deQueue()
{
    int elem =0;
    if(isEmpty())
    {
        printf("\nQueue is Empty !!");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
            elem = Q[front];
            front++;
            printf("\n%d removed",elem);
            return elem;
            
        }
        else
        {
            elem = Q[front];
            front++;
            printf("\n%d removed",elem);
            return elem;
        }
        
        
    }
    return 0;

}

void display()
{
    int i ;
    
    
    if(isEmpty())
    {
        printf("\nQueue is Empty ");
    }
    else
    {
        if(front== -1)
        {
            front = 0;
        }
        printf("\nThe Queue is : \n");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",Q[i]);
        }
    }
}



int main()
{

int ch ;
do{
printf("\nMenu");
printf("\n1.Insert Elemets \t 2.Delete Elements\n");
printf("3.isFull \t\t 4.isEmpty");
printf("\n5.Display \t\t 6.Exit");
printf("\nEnter Your Choice : ");
scanf("%d",&ch);

switch(ch)
{
    case 1 :
    enQueue();
    break;
    case 2 :
    deQueue();
    break;
    case 3 :
    if(isFull())
    {
        printf("\nQueue is Full ");
    }
    else
    {
        printf("\nQueue is Not full ");
    }
    break;
    case 4 :
    if(isEmpty())
    {
        printf("\nQueue is Empty ");
    }
    else
    {
        printf("\nQueue is Not Empty");
    }
    case 5 :
    display();
    break;
}
printf("\n*********************************************");
}while(ch!=6);

}