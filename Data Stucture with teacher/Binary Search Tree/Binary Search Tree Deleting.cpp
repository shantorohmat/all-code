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
    else if(key > p ->data) {
        p ->rchild = Rinsert(p ->rchild,key);

    }
    return p;
}


int Height(Node *root)
{
    int x ,y = 0;

    if(root == 0)
       return 0;
    x = Height(root ->lchild);
    y = Height(root ->rchild);

    if(x < y)
    {
        return x+ 1;
    }
    else return y + 1;
}

Node *Inpre(Node *p)
{
    while(p && p ->rchild != NULL)
    {
        p = p ->rchild;

    }
    return p;
}

Node *Insucc(Node *p)
{
    while(p && p ->lchild != NULL)
    {
        p = p ->lchild;
    }
    return p;
}

Node *Delete(Node *p,int key)
{
    Node *q ;

    if(p == NULL)
        return NULL;

    if(p ->lchild == NULL && p ->rchild == NULL)
    {
        if(p == root)
            root = NULL;
        delete p;
        return NULL;

    }
    if(key < p ->data)
    {
        p ->lchild = Delete(p ->lchild,key);

    }
    else if(key > p ->data)
    {
        p ->rchild = Delete(p ->rchild,key);
    }

    else {
        if(Height(p ->lchild) > Height(p ->rchild))
        {
            q = Inpre(p ->lchild);
            p ->data = q ->data;
            p ->lchild = Delete(p ->lchild,q ->data);
        }
        else{
            q = Insucc(p ->rchild);
            p ->data = q ->data;
            p ->rchild = Delete(p ->rchild,q ->data);
        }
    }
    return p;
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
    Delete(root,20);

    Node *x = Search(20);
    cout << endl;

    if(x)
    {
        cout << "Element " << x ->data << " is found" << endl;
    }
    else{
        cout << "Element " << " is not found" << endl;
    }

}
