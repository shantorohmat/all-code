#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
}*first;

void Create(int A[],int n)
{
    first = new Node;
    first ->data = A[0];
    first ->next = NULL;

    Node *last =  new Node;
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


int  Search(Node *p,int k)
{
   while(p != NULL)
   {
       if(p ->data == k)
       {
           return 1;
       }
       p = p ->next;
   }
   return 0;

}

int main()
{
    int n;

    cout << "How Many Number's Do you want Enter : ";

    cin >> n;

    int *A = new int [n];

    cout << "Enter " << n << " Number's : ";

    for(int i = 0;i < n;i++)
    {
        cin >> A[i];
    }
    Create(A,n);

    cout << "Which Number You Want To Search For YOu : " ;
    int k;
    cin >> k;

    //cout <<  << endl;

    if(Search(first,k) == 1)
    {
        cout << "OWW...hw.. We found " << k << " In Our Linked List " << endl;
    }
    else cout << "Sorry We could not Find " << k << " In Our Linked List " <<  endl;

}
