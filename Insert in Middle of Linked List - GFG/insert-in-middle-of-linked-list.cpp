// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}
// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
Node* insertInMiddle(Node* head, int x)
{
	int count=1;
	Node* ptr=head;
	Node* temp=new Node(x);
	while(ptr->next!=NULL)
	{
	    ptr=ptr->next;
	    count++;
	}
	
	if(count%2==0)
	{
	    count=(count/2);
	}
	else
	{
	    count=(count/2)+1;
	}
	ptr=head;
	for(int i=1;i<count;i++)
	{
	    ptr=ptr->next;
	}
	Node* ptr2=ptr->next;
	temp->next=ptr2;
	ptr->next=temp;
	return head;
}



