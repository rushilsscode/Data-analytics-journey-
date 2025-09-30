#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next; // next is a pointer of Node type

    //constructor
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this -> data != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

// deletion of node
void deletion(int pos, Node* &head){
    //deletion of first ans last node
    if(pos==1){
        Node*temp = head;
        head = head -> next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt < pos){
            prev=curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
// func for insersting node at the beginning
void Insertathead(Node* &head, int d){
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

// func for inserting node at the ending 
void insertattail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next =  temp;
    tail = tail -> next;
    
}

void print(Node* &head){
    Node* temp = head;

    while(temp!= NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
void Insertatmiddle (Node* &head, Node* tail,  int pos, int d){
    // insert at start
    if(pos==1){
        Insertathead(head, d);
        return;
    }

    
    Node* temp = head;
    int cnt=1;

    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }
    //insert at last
    if(temp -> next == NULL){
        insertattail(tail, d);
        return;
    }
    // creating a node for d
    Node* nodetoinsert = new Node(d);

    nodetoinsert -> next = temp ->next;
    temp -> next = nodetoinsert;
}

int main()
{
    // created a new node
    Node *Node1 = new Node(10);
    // cout << Node1->data << endl;
    // cout << Node1->next << endl;


    // **************insertion at head***************
    // head pointed to node1
    Node* head = Node1;
    print(head);
    // insertiion 
    Insertathead(head, 12);
    Insertathead(head, 15);
    Insertathead(head, 18);
    print(head);



    // **************insertion at tail**************
    // Node* tail = Node1;
    // insertattail(tail, 12);
    // // print(head);
    // insertattail(tail, 20);
    // // print(head);
    // insertattail(tail, 30);
    // // print(head);


    // ***************insertion at middle*****************
    // Insertatmiddle(head, tail,  5  , 22);
    print(head);

    // **************deletion of node*********
    // deletion(2,head);
    // print(head);


    return 0;
}

// ******************************another method***************************
// C++ program for the above approach 
#include <iostream> 
using namespace std; 

// Node class to represent 
// a node of the linked list. 
class Node { 
public: 
	int data; 
	Node* next; 

	// Default constructor 
	Node() 
	{ 
		data = 0; 
		next = NULL; 
	} 

	// Parameterised Constructor 
	Node(int data) 
	{ 
		this->data = data; 
		this->next = NULL; 
	} 
}; 

// Linked list class to 
// implement a linked list. 
class Linkedlist { 
	Node* head; 

public: 
	// Default constructor 
	Linkedlist() { head = NULL; } 

    void deleteNode(int nodeOffset){ 
	Node *temp1 = head, *temp2 = NULL; 
	int ListLen = 0; 

	if (head == NULL) { 
		cout << "List empty." << endl; 
		return; 
	} 

	// Find length of the linked-list. 
	while (temp1 != NULL) { 
		temp1 = temp1->next; 
		ListLen++; 
	} 

	// Check if the position to be 
	// deleted is greater than the length 
	// of the linked list. 
	if (ListLen < nodeOffset) { 
		cout << "Index out of range"
			<< endl; 
		return; 
	} 

	// Declare temp1 
	temp1 = head; 

	// Deleting the head. 
	if (nodeOffset == 1) { 

		// Update head 
		head = head->next; 
		delete temp1; 
		return; 
	} 

	// Traverse the list to 
	// find the node to be deleted. 
	while (nodeOffset-- > 1) { 

		// Update temp2 
		temp2 = temp1; 

		// Update temp1 
		temp1 = temp1->next; 
	} 

	// Change the next pointer 
	// of the previous node. 
	temp2->next = temp1->next; 

	// Delete the node 
	delete temp1; 
} 

// Function to insert a new node. 
void insertNode(int data) 
{ 
	// Create the new Node. 
	Node* newNode = new Node(data); 

	// Assign to head 
	if (head == NULL) { 
		head = newNode; 
		return; 
	} 

	// Traverse till end of list 
	Node* temp = head; 
	while (temp->next != NULL) { 

		// Update temp 
		temp = temp->next; 
	} 

	// Insert at the last. 
	temp->next = newNode; 
} 

// Function to print the 
// nodes of the linked list. 
void printList() 
{ 
	Node* temp = head; 

	// Check for empty list. 
	if (head == NULL) { 
		cout << "List empty" << endl; 
		return; 
	} 

	// Traverse the list. 
	while (temp != NULL) { 
		cout << temp->data << " "; 
		temp = temp->next; 
	} 
} 

	
}; 

// Function to delete the 
// node at given position 

// Driver Code 
int main() 
{ 
	Linkedlist list; 

	// Inserting nodes 
	list.insertNode(1); 
	list.insertNode(2); 
	list.insertNode(3); 
	list.insertNode(4); 

	cout << "Elements of the list are: "; 

	// Print the list 
	list.printList(); 
	cout << endl; 

	// Delete node at position 2. 
	list.deleteNode(2); 

	cout << "Elements of the list are: "; 
	list.printList(); 
	cout << endl; 
	return 0; 
}
