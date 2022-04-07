#include <iostream>
using namespace std;

struct Node{

    int data;
    Node *next,*prev;

}*first;

void Display(Node *p)
{
    while(p != NULL)
    {
        cout << p ->data << " ";
        p = p ->next ;
    }

}

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

void Reverse(Node *p)
{
    Node *temp = new Node;


    while(p != NULL)

    {


        temp = p ->next;

        p ->next = p ->prev;

        p ->prev = temp;


        p = p ->prev;


        if(p ->next == NULL ) /// one condition is enough
        {
            p->next = p->prev;  /// here this one was missing

            p->prev = NULL;

            first = p;

            break;
        }
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

    Reverse(first);

	Display(first);

}
