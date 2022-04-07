#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*front ,*rear;

void enqueue(int x)
{
    Node *t = new Node;

    if(t == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else {
        t ->data = x;
        t ->next = NULL;

        if(front == NULL)
        {
            front = rear =  t;
        }
        else{
            rear ->next = t;
            rear = t;
        }
    }
}

int  dequeue()
{
    Node *p = new Node;

    int x = -1;

    if(front == rear)
    {
        cout << "queue is empty" << endl;
    }
    else{
        p = front;
        front = front ->next;
        x = p ->data ;

        delete p;
    }
    return x;
}

void Display()
{
    Node *p = new Node;

    p = front ;

    while(p)
    {
        cout << p ->data << " ";
        p = p ->next;
    }
    cout << endl;
}


int main()
{


    cout << " How many numbers do you want to input : ";

    int n,a; cin >> n;



    cout << "Input " << n << " Number's : ";

    for(int i= 0;i < n;i++)
    {

        cin >> a;

        enqueue(a);
    }

    Display();

    cout << "How many number's do you want to delete : ";

    int m ; cin >> m;

    for(int i= 0;i < m;i++)
    {
        dequeue();
    }

    Display();


}
