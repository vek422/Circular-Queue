//programm to implement circular que

#include<stdio.h>

int Q[5] , front = -1 , rear = -1,max =5;

int isFull()
{
    if( (rear+1)%max == front)
    {
        return 1;
    }
    return 0;
}

int isEmpty()
{
    if(front == -1)
    {
        return 1;
    }
    return 0;
}

void enQueue()
{
    if(isFull())
    {
        printf("\nQueue is Full "); 
    }
    else
    {
        if(front == -1)
        {
            front =0;
            // printf("\nEnter the Number you want to insert : ");
            // scanf("%d",&Q[front]);
        }
        // else
        // {
        rear = (rear+1)%max ;
        printf("\nEnter The Number You Want to insert : ");
        scanf("%d",&Q[rear]);
        printf("Inserted %d",Q[rear]);
        // }
    }
}

int deQueue()
{
    if(isEmpty())
    {
        printf("\nQueue is Empty !!!");
    }
    else
    {
        int elem;
        if(front  == rear)
        {
            elem = Q[front];
            front = -1;
            rear =-1; //ressseting queue
            return elem;
        }
        else
        {
            elem = Q[front];
            front = (front+1)%max;
            printf("\n%d removed ",elem);
            return elem;

        }
    }
    return 0;
    
}

void display()
{
    int i;
    if(isEmpty())
    {
        printf("\nThe Queue is Empty (");
    }
    else
    {
        // int temp = front,temp2=rear;
        // if(front == -1)
        // {
        //     temp =0;
        // }
        // if(temp2 == temp)
        // {
        //     temp2++;
        // }
        // printf("%d front \n %d rear \n",temp ,temp2);
        printf("\n The Queue is : ");
        // for(i=front;i!=rear;i=(i+1)%max)
        // {
        //     printf("%d ",Q[i]);
        // }
        if(front == rear)
        {
            printf("\n%d ",Q[front]);
        }
        else
        {
        i = front;
        printf("%d ",Q[i]);
        while(true)
        {
            i = (i+1)%max;//increament

            printf("%d ",Q[i]);//print

            if(i == rear)
            {
                break;
            }  
        }
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
// printf("front : %d\n rear : %d",front,rear);
printf("\n*********************************************");
}while(ch!=6);


}