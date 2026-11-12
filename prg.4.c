#include <studio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void addJob()
{
    int job;
    if(rear==MAX -1)
    {
        printf("Queue Overflow!Printer queue isfull.\n");
        return;
    }
    printf("Enter print job ID:");
    scanf("%d",&job);
    if(front==-1)
    {
        front=0;
    }
    rear++;
    queue[rear]=job;
    printf("Print job%d added to the queue.\n",job);
}
void processJob()
{
    if(front==-1)
    {
        printf("Queue Underflow!No print jobs to process.\n");
        return;
    }
    printf("Processin print job%d\n",queue[front]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front==;
    }
}
void displayCount()
{
    if(front==-1)
    {
        printf("Number of waiting print jobs: 0\n");
    }
    else
    {
        printf("Number of waiting print jobs:%d\n",rear-front+1);
        printf("Waiting job Ids:");
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }

        printf("\n")
    }
}
int main()
{
    int chioce;
    while(1)
    {
        printf("\n---PRINTER QUEUE MENU---\n");
        printf("1.Add a print job\n");
        printf("2.Process a print job\n");
        printf("3.Display waiting jobs\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addjob();
                break;
            case 2:
                processJob();
                break;
            case 3:
                displayCount();
                break;
            case 4:
                printf("Exiting Printer Queue.\n");
                return 0;
            default:
                printf("Invalid choice!Try again.\n");
        }
    }
    return 0;
}
