#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*head;

Display(Node *p)
{
    do{
        cout << p->data << " ";
        p = p ->next;
    }while(p != head);
}

void Create(int A[],int n)
{
    head = new Node;
    head ->data = A[0];
    head ->next = head;

    Node *last = new Node;

    last = head;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;
        t ->data = A[i];
        t ->next = last ->next ;

        last ->next = t;
        last = t;
    }
}

void Delete(int pos)
{
    Node *p = new Node ;
    p = head;
    Node *q;

    if(pos == 1)
    {
        while(p ->next != head)
        {
            p = p ->next;
        }
        p ->next =head ->next;
        delete head;
        head = p ->next;
    }
    else {
        for(int i = 0 ;i < pos - 2;i++)
        {
            p = p ->next;
        }
        q = p ->next;
        p ->next = q ->next;
        delete q;
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

	Delete(1);

	Display(head);


}


