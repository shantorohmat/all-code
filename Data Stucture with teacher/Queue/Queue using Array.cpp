#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void Create(Queue *q,int size)
{
    q ->size = size;
    q ->front = q ->rear =  -1;
    q -> Q = new int [q ->size];

}

void enqueue(Queue *q,int x)
{
    if(q ->rear == q ->size -1)
    {
        cout << "Queue is full" << endl;
    }
    else {
        q ->rear ++;
        q ->Q[q ->rear] = x;
    }
}

int dequeue(Queue *q)
{
    int x = -1;

    if(q ->front == q ->rear)
    {
        cout << "Queue is full" << endl;
    }
    else {
        q ->front ++;
        x = q->Q[q ->front];
    }
    return x;
}

void Display(Queue q)
{

    for(int i = q.front +1;i <= q.rear;i++)
    {
        cout << q.Q[i] << " ";
    }
    cout << endl;
}

int main()
{
    Queue q;

    cout << " How many numbers do you want to input : ";

    int n,a; cin >> n;

    Create(&q,n);

    cout << "Input " << n << " Number's : ";

    for(int i= 0;i < n;i++)
    {

        cin >> a;

        enqueue(&q,a);
    }

    Display(q);

    cout << "How many number's do you want to delete : ";

    int m ; cin >> m;

    for(int i= 0;i < m;i++)
    {
        dequeue(&q);
    }

    Display(q);


}



