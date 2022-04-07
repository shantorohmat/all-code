#include <iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
}*first;

void Display(Node *p)
{
	while(p != NULL)
	{
		cout << p ->data << " ";
		p = p ->next;
	}
}

void Create(int A[],int n)
{
	first  = new Node;
	first ->data = A[0];
	first ->next = NULL;

	Node *last = new Node;

	last = first;

	for(int i =  1;i < n;i++)
	{
		Node *t = new Node;

		t ->data = A[i];
		t ->next = NULL;

		last ->next = t;
		last = t;
	}
}

void Remove(Node *p)
{
	Node *q;

	q = p ->next;
    while(q != NULL){
	if(p ->data != q ->data)
	{
		p = q;
		q = q ->next;
	}
	else{
		p ->next = q -> next;
		delete q;
		q = p->next;

	}
    }

}

int main()
{
	cout << "How many number's do you want to as input : " ;

    int n; cin >> n;

    cout << "Enter " << n << " number's : ";
    int *A = new int [n];

    for(int i = 0 ;i < n;i++)cin >> A[i];

    Create(A,n);

    Remove(first);

    Display(first);

}
