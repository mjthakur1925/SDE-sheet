#include <iostream>
using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *arr;
    int count;

public:
    Queue()
    {
        size = 5;
        front = 0;
        rear = 0;
        arr = new int[size];
        count = 0;
    }

    void push(int x)
    {
        if (count == size)
        {
            cout << "Queue is full! " << endl;
            return;
        }

        arr[rear % size] = x;
        cout << x << " successfully pushed! " << endl;
        count++;
        rear++;
    }

    int pop()
    {
        if (count == 0)
        {
            cout << "Cannot pop !" << endl
                 << "Queue is empty! " << endl;
            return -1;
        }
        int x = arr[front % size];
        cout << x << " popped from the queue! " << endl;
        count--;
        front++;
    }
    void display()
    {
        int f = front;
        for (int i = 0; i < count; i++)
        {
            cout << arr[f] << " ";
            f = (f + 1) % size;
        }
        cout << endl;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    q.display();
    q.pop();
    q.display();
    return 0;
}