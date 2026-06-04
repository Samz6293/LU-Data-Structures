#include <iostream>
using namespace std;

// Prototypes
void dequeue(int queue[], int &front, int &rear);
void enqueue(int queue[], int &rear, int item);
void display(int queue[], int front, int rear);

// Max size of our queue
#define MAX 5

int main() {
  int queue[MAX];
  int front = 0;
  int rear = -1;

  dequeue(queue, front, rear);
  display(queue, front, rear);
  enqueue(queue, rear, 10);
  dequeue(queue, front, rear);
  enqueue(queue, rear, 10);
  enqueue(queue, rear, 20);
  enqueue(queue, rear, 30);
  enqueue(queue, rear, 40);
  display(queue, front, rear);
  enqueue(queue, rear, 50);
  dequeue(queue, front, rear);
  dequeue(queue, front, rear);
  display(queue, front, rear);
}

void dequeue(int queue[], int &front, int &rear) {

  cout << "Operation -> Dequeue" << endl;

  if (front > rear) {
    cout << "Underflow\n" << endl;
  } else {
    int item = queue[front];
    front += 1;
    cout << "Item removed from Queue: " << item << endl;
    cout << endl;
  }
}

void enqueue(int queue[], int &rear, int item) {

  cout << "Operation -> Enqueue" << endl;

  if (rear == MAX - 1) {
    cout << "Overflow\n" << endl;
  } else {
    rear += 1;
    queue[rear] = item;
  }
}

void display(int queue[], int front, int rear) {

  cout << "Operation -> Display" << endl;
  if (front > rear) {
    cout << "Queue Empty\n" << endl;
    return;
  }
  cout << "Front: " << front << " Rear: " << rear << endl;
  cout << "Items in the queue: ";
  for (int i = front; i <= rear; i++) {
    cout << queue[i] << " ";
  }
  cout << endl;
}
