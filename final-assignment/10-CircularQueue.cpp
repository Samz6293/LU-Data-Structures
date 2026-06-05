#include <iostream>
using namespace std;

// Max size of out circular queue
#define MAX 5

// Prototypes
void dequeue(int queue[], int &front, int &rear);
void enqueue(int queue[], int &front, int &rear, int item);
void display(int queue[], int front, int rear);
int main()
{
    int front = -1;
    int rear = -1;
    int queue[MAX];

    dequeue(queue, front, rear);
    display(queue, front, rear);
    enqueue(queue, front, rear, 10);
    display(queue, front, rear);
    dequeue(queue, front, rear);
    enqueue(queue, front, rear, 10);
    enqueue(queue, front, rear, 20);
    enqueue(queue, front, rear, 30);
    enqueue(queue, front, rear, 40);
    enqueue(queue, front, rear, 50);
    display(queue, front, rear);
    enqueue(queue, front, rear, 60);
    dequeue(queue, front, rear);
    dequeue(queue, front, rear);
    enqueue(queue, front, rear, 60);
    enqueue(queue, front, rear, 70);
    display(queue, front, rear);
}

void dequeue(int queue[], int &front, int &rear)
{

    cout << "Operation -> Dequeue" << endl;

    if (front == -1)
    {
        cout << "Underflow\n"
             << endl;
    }
    else if (front == rear)
    {
        int item = queue[front];
        front = -1;
        rear = -1;
        cout << "Last item " << item << " was removed from queue\n"
             << endl;
    }
    else
    {
        int item = queue[front];
        front = (front + 1) % MAX;
        cout << "Item " << item << " was removed from queue\n"
             << endl;
    }
}

void enqueue(int queue[], int &front, int &rear, int item)
{

    cout << "Operation -> Enqueue" << endl;

    if ((rear + 1) % MAX == front)
    {
        cout << "Overflow\n"
             << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = item;
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = item;
    }
}

void display(int queue[], int front, int rear)
{

    cout << "Operation -> Display" << endl;

    if (front == -1)
    {
        cout << "Queue Empty\n" << endl;
        return;
    }

    cout << "Front: " << front << " Rear: " << rear << endl;
    cout << "Items in the queue: ";
    
    int i = front;
    while (i != rear) {
        cout << queue[i] << " ";
        i = (i + 1) % MAX;
    }
    cout << queue[rear] << "\n" << endl;
}