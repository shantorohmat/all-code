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
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last = new Node;

    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;

        t ->data = A[i];
        t ->next = NULL;

        last ->next = t;
        last = t;

    }
}

bool Issorted()
{
    int x = -2147483648;
    Node *p = new Node;
    p = first;

    while(p != NULL)
    {
        if(p ->data < x)
            return false;

        x = p ->data;
        p = p ->next;

    }
    return true;
}

int main(){
    cout << "How many number's do you want to as input : " ;

    int n; cin >> n;

    cout << "Enter " << n << " number's : ";
    int *A = new int [n];

    for(int i = 0 ;i < n;i++)cin >> A[i];

    Create(A,n);

    Display(first);
    cout << endl;

    if(Issorted())
    {
        cout << " Sorted Linked List" << endl;
    }
    else cout << " Linked List isn't sorted" << endl;
}
