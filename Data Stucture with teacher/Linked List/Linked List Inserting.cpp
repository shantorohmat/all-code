#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
}*first;

void Create(int A[],int n)
{
    first = new Node;
    first ->data  = A[0];
    first ->next = NULL;

    Node *last  = new Node;
    last = first;

    for(int i = 1;i < n;i++)
    {
        Node *t = new Node;

        t  ->data = A[i];
        t  ->next = NULL;

        last -> next = t;
        last = t;
    }
}

void Insert(int pos,int val)
{
    Node *t,*p;

    if(pos == 0)
    {
        t = new Node;
        t ->data = val;
        t ->next = first;
        first = t;
    }
    else if(pos > 0)
    {
        p = first;


        for(int i = 0;i < pos -1 && p;i++)
        {
            p = p ->next;
        }
        if(p){
        t = new Node;
        t ->data = val;
        t -> next = p ->next;
        p ->next = t;
        }


    }
}

void Display(Node *p)
{
    while(p != NULL)
    {
        cout << p->data << " ";
        p  = p ->next;
    }
}
int main()
{
    cout << " How Many Number's Do You want to input : ";
    int n;
    cin >> n;

    int *p = new int[n];
    cout << " Input " << n << " Number's To Create a Linked List : ";
    for(int i = 0;i < n;i++) cin >> p[i];
    Create(p,n);
    cout << endl;
    cout << "You Want To Insert A Value in Linked List " << endl;
    cout << endl;
    cout << "Which Position Do you want Insert Value : " ;
    int pos;
    cin >> pos;
    cout << endl;
    cout << "Which Value Do you Want To Insert : ";
    int val;
    cin >> val;
    Insert(pos,val);
    cout << endl;
    Display(first);


}
