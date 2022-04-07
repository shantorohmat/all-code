
#include <iostream>
using namespace std;
struct Node{
    Node *prev;
    int data;
    Node *next;
}*first = NULL;

void Create(int A[],int n)
{
    Node *last = new Node;
    first = new Node;
    first ->data = A[0];
    first -> prev = first ->next = NULL;

    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = last ->next;

        t ->prev = last;
        last ->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    while(p)
    {
        cout << p ->data << " ";
        p = p ->next;
    }
}

void insert(int pos ,int val)
{
    Node *p = new Node;
    p = first;
    if(pos == 0)
    {
        Node *t = new Node;
        t ->data = val;
        t ->prev = NULL;
        t ->next = first;
        first ->prev = t;
        first = t;
    }
    else {
        Node *t = new Node;
        t ->data = val;

        for(int i = 0;i < pos -1;i++)
        {
            p = p ->next;
        }
        t ->next = p ->next;
        t ->prev =  p;
        if(p ->next)
            p ->next ->prev = t;
        p ->next = t;
    }
}


int main()
{
	cout << " How Many Number Do You want : " ;

	int n; cin >> n;

	int *A = new int [n];

	cout << " Enter " << n << " in Linked List : ";

	for (int i = 0 ; i < n; i++)
	{
		cin >> A[i];
	}



	Create(A, n);

	insert(0,10);

	Display(first);


}

