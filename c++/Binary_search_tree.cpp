#include <iostream>
#include <queue>
using namespace std;

class Node{
    
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

void Levelordertraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void Inorder(Node* root){
    if(root == NULL){
        return ;
    }

    Inorder(root -> left);
    cout<<root->data<<" ";
    Inorder(root -> right);
}
void preOrdertravesal(Node *root) // NLR
{
    if(root == NULL){
        return ;
    }

   cout<<root->data<<" ";
   preOrdertravesal(root -> left);
   preOrdertravesal(root -> right);
}
void PostOrderTravesal(Node* root){ // LRN
    if(root == NULL){
        return ;
    }

   PostOrderTravesal(root->left);
   PostOrderTravesal(root->right);
   cout<<root->data<<" ";
}

int Minvalue(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }

    while(temp ->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
int Maxvalue(Node* root){
    Node* temp = root;
    if(temp == NULL){
        return -1;
    }

    while(temp ->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}
Node* deletion(Node* root, int x){
    if(root == NULL){
      return root;
    }
    else if(root->data == x){
        // 0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // 1 child

        // left child
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        else{
            int mini = Minvalue(root->right);
            root->data = mini;
            root->right = deletion(root->right, mini);
            return root;
        }
    }
    else if(root->data > x){
        root->left = deletion(root->left, x);
        return root;
    }
    else{
        root -> right = deletion(root->right, x);
        return root;  
    }
}
Node* InsertIntoBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        // cout<<"dfv";
        return root;
    }
    // Node* node1 = new Node(d);
    if(d > root -> data){
        root -> right = InsertIntoBST(root ->right, d);
    }
    else{
        root->left = InsertIntoBST(root->left, d);
    }
    return root; 
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = InsertIntoBST(root, data);
        cin>>data;
    }
    Levelordertraversal(root);
    preOrdertravesal(root);
}
int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST: ";
    takeInput(root);
    // cout<<"printing the BST before deletion"<<endl;
    // Levelordertraversal(root);
    
    // // deleting element 
    // deletion(root, 20);

    // cout<<"printing the BST after deletion"<<endl;
    // Levelordertraversal(root);

    // cout<<"Inorder Traversal: ";
    // Inorder(root);
    // cout<<endl;
    // cout<<"Preorder Traversal: ";
    // preOrdertravesal(root);
    // cout<<endl;
    // cout<<"postorder Traversal: ";
    // PostOrderTravesal(root);
    // cout<<endl;

    // cout<<"Minimum value of BST: ";
    // cout<<Minvalue(root);
    // cout<<endl;

    // cout<<"Maximum value of BST: ";
    // cout<<Maxvalue(root);

return 0;
}