#include <iostream>
using namespace std;
struct  Node
{
	int data;
	Node *next;

}*head;
void Display(Node *p)
{
	static int flag = 0;
	if(p != head || flag == 0)
    {
        flag = 1;
        cout << p ->data << " ";
        Display(p ->next);
    }flag = 0;
}

void Create(int A[], int n)
{
	head = new Node;
	head ->data = A[0];
	head ->next = head;

	Node *last = new Node;
	last = head;

	for (int i = 1; i < n; i++)
	{
		Node *t = new Node;
		t ->data = A[i];
		t ->next = last ->next;

		last ->next = t;
		last = t ;

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

	Display(head);


}

