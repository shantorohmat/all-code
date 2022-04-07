#include <iostream>
using namespace std;

struct Node{
    int data ;
    Node *next,*prev;
}*first;

void Display(Node *p)
{
    while(p != NULL)
    {
        cout << p ->data << " ";
        p = p -> next;
    }
}

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->prev = first ->next = NULL;

    Node *last = new Node;

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

void Deleting(int pos)
{
    Node *p = new Node ;
    p = first;

    if(pos == 1)
    {
        first = first ->next;
        if(first) first ->prev = NULL;
         delete p;


    }
    else {
        for(int i = 0;i < pos -1;i++)
        {
            p = p ->next;
        }
        p -> prev -> next = p ->next;
        if(p ->next)  p ->next ->prev = p ->prev;
         delete p;


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

	Deleting(1);

	Display(first);


}

