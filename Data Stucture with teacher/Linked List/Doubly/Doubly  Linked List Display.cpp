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

	//Delete(1);

	Display(first);


}

