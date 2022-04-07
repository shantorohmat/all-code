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
        p = p -> next;
    }

}

void Create(int A[],int n)
{
    first  = new Node;

    first -> data = A[0];
    first -> next = NULL;

    Node *last = new Node;
    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t   = new Node;

        t -> data = A[i];
        t -> next = NULL;

        last ->next = t;
        last = t;

    }
}

int  Delete(int pos)
{
    Node *p,*q = NULL;
    p = first;

    if(pos == 1)
    {


        first = first ->next;

        delete p;
    }
    else{
        for(int i = 0 ;i < pos - 1;i++)
        {
            q = p;
            p = p ->next;
        }
        q ->next = p ->next;
        delete p;
    }

}

    int main()
{
    cout << "How many Number's do you want  input : " << endl;

    int n; cin >> n;

    cout << "Enter " << n << " number's : " << endl;

    int *A = new int [n];

    for(int i = 0 ;i < n;i++)
    {
        cin >> A[i];
    }

    Create(A,n);

    cout << "Which position do you want to delete : " ;

    int x; cin >> x;

    Delete(x);

    Display(first);


}


