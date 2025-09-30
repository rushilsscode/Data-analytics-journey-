#include <iostream>
#include <queue>
#include <stack>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{ // using recursion
    int d;
    cout << "Enter the data: ";
    cin >> d;
    root = new node(d);
    // base case
    if (d == -1)
    {
        return NULL;
    }
    cout << "Enter the data for inserting in left: " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right: " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrdertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separator

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void reverseOrdertraversal(node *root)
{
    queue<node *> q;
    stack<node *> s;
    q.push(root);
    q.push(NULL); // separator

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        s.push(temp);

        if (temp == NULL)
        {
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }

    while (!s.empty())
    {
        if (s.top() == NULL)
        {
            s.pop();
            cout << endl;
        }
        else
        {
            cout << s.top()->data << " ";
            s.pop();
        }
    }
}
void inOrdertravesal(node *root) // LNR
{
    if(root == NULL){
        return ;
    }

   inOrdertravesal(root->left);
   cout<<root->data<<" ";
   inOrdertravesal(root->right);

}
void preOrdertravesal(node *root) // NLR
{
    if(root == NULL){
        return ;
    }

   cout<<root->data<<" ";
   preOrdertravesal(root -> left);
   preOrdertravesal(root -> right);
}
void PostOrderTravesal(node* root){ // LRN
    if(root == NULL){
        return ;
    }

   PostOrderTravesal(root->left);
   PostOrderTravesal(root->right);
   cout<<root->data<<" ";
}

void* buildfromlevelordertravesal(node* &root){  // building the tree without using recursion
    queue <node*> q;
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
    
        cout<<"Enter the data for left: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata != -1){
            temp -> left = new node(leftdata);
            q.push(temp -> left);
        }


        cout<<"Enter the data for right: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata != -1){
            temp -> right = new node(rightdata);
            q.push(temp -> right);
        }
    }
}
int main()
{
    node *root = NULL;
    buildfromlevelordertravesal(root);
    // printing the binary tree in level order travesal
    cout<<"printing the level order travesal "<<endl;
    levelOrdertraversal(root);
    
    /*
    root = buildTree(root);

    // 1 5 7 -1 -1 11 -1 -1 3 17 -1 -1 -1

    // cout << "printing the reverse order travesal " << endl;
    // reverseOrdertraversal(root);

    cout<<"InOrder Travesal: ";
    inOrdertravesal(root);
    cout<<endl;

    // preorder travesal 
    cout<<"preorder Travesal: ";
    preOrdertravesal(root);
    cout<<endl;

    // postorder travesal 
    cout<<"postorder Travesal: ";
    PostOrderTravesal(root);
    cout<<endl;
    */
    return 0;
}