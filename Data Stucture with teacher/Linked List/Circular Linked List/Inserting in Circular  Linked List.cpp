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

void Insert(int pos,int val)
{
    Node *p = new Node;
    p = head;
    Node *t = new Node;


    if(pos == 0)
    {
        t ->data = val;

        if(head == NULL)
        {
            head = t;
            head ->next  = head;
        }
        else {
            while(p->next != head)
            {
                p = p ->next;

            }
            p ->next = t;
            t ->next = head;
            head = t;
        }
    }
    else {

        for(int i = 0 ;i < pos - 1;i++) p = p ->next;
        t ->data = val;
        t ->next = p ->next;
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

	Insert(2,10);

	Display(head);


}

