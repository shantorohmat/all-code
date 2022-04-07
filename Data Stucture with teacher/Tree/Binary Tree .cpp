

#include <iostream>
using namespace std;

struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
};


struct Queue
{
 int size;
 int front;
 int rear;
 struct Node **Q;
};


void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q= new Node *[q ->size];
}
void enqueue(struct Queue *q,struct Node *x)
{
    if((q->rear+1)%q->size==q->front)
    cout << "Queue is Full" << endl;
    else
    {
    q->rear=(q->rear+1)%q->size;
    q->Q[q->rear]=x;
    }
}

struct Node * dequeue(struct Queue *q)
{
    struct Node* x=NULL;

    if(q->front==q->rear)
        cout << "Queue is Empty\n" << endl;
    else
    {
    q->front=(q->front+1)%q->size;
    x=q->Q[q->front];
    }
    return x;
}
int isEmpty(struct Queue q)
{
    return q.front==q.rear;
}

struct Node *root=NULL;

void Treecreate()
{
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q,100);

    cout << "Enter root value : " ;
    cin >> x;
    root = new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {

    p=dequeue(&q);
    cout << "enter left child of %d " <<  p->data << " : ";
    cin >> x;
    if(x!=-1)
    {
    t=new Node;
    t->data=x;
    t->lchild=t->rchild=NULL;
    p->lchild=t;
    enqueue(&q,t);
    }
    cout << "enter right child of %d " << p->data << " : ";
    cin >> x;
    if(x!=-1)
    {
    t=new Node;
    t->data=x;
    t->lchild=t->rchild=NULL;
    p->rchild=t;
    enqueue(&q,t);
    }
    }
}


void Preorder(struct Node *p)
{
    if(p)
    {
    cout << p->data << " ";
    Preorder(p->lchild);
    Preorder(p->rchild);
    }
}

void Inorder(struct Node *p)
{
    if(p)
    {
    Inorder(p->lchild);
    cout << p->data << " ";
    Inorder(p->rchild);
    }
}

void Postorder(struct Node *p)
{
    if(p)
    {
    Postorder(p->lchild);
    Postorder(p->rchild);
    cout << p->data << " ";
    }
}
int main()
{
    Treecreate();

    cout << "pre Order : " << endl ;
    Preorder(root);

    cout << endl << "Post Order : " << endl ;
    Postorder(root);

    cout  << endl << "Inorder Order : " << endl ;
    Inorder(root);

    return 0;
}

