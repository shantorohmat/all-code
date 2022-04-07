#include <iostream>
using namespace std;
struct Node{
    Node *lchild;
    int data;
    Node *rchild;
}*root = NULL;

void insert(int key)
{
    Node *t = root;
    Node *p,*r;

    if(root == NULL)
    {
        p = new Node;
        p ->data = key;
        p ->lchild = p ->rchild  = NULL;
        root = p;

        return ;
    }

    while(t != NULL)
    {
        r  =  t;

        if(key < t ->data)
        {
            t = t ->lchild;
        }
        else if(key > t ->data)
        {
            t = t ->rchild;
        }
        else return;

    }
     p = new Node;
        p ->data = key;
        p ->lchild = p ->rchild  = NULL;

        if(key < r -> data)
        {
            r ->lchild = p;
        }
        else {
            r ->rchild = p ;
        }

}

void inorder(Node *p)
{
    if(p)
    {
        inorder(p ->lchild);
        cout << p ->data << " ";
        inorder(p ->rchild);

    }
}

Node *Search(int key)
{
    Node *t = root;

    while(t != NULL)
    {
        if(key == t ->data)
            return t;
        else if(key < t ->data)
        {
            t = t ->lchild;
        }
        else if(key > t ->data)
        {
            t = t ->rchild;
        }
    }
    return NULL;
}

Node *Rinsert(Node *p,int key)
{
    Node *t = NULL;

    if(p == NULL)
    {
        t = new Node;
        t ->data = key;
        t ->lchild = t ->rchild = NULL;
        return t;
    }
    if(key < p ->data)
    {
        p ->lchild = Rinsert(p ->lchild,key);
    }
    else {
        p ->rchild = Rinsert(p ->rchild,key);

    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(50);
    insert(40);
    Rinsert(root,70);
    inorder(root);

    Node *x = Search(20);
    cout << endl;

    if(x)
    {
        cout << "Element " << x ->data << " is found" << endl;
    }
    else{
        cout << "Element " << x ->data << " is not found" << endl;
    }

}
