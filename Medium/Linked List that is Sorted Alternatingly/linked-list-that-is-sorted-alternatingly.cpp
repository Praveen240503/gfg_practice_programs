//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
/* Function to print linked list */


void append(struct Node** headRef, struct Node** tailRef, int newData)
{
	struct Node* new_node = new Node(newData);
	struct Node *last = *headRef;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    *tailRef = *headRef;
	    return;
	}
	
	(*tailRef) -> next = new_node;
	*tailRef = (*tailRef) -> next;
}

// A utility function to print a linked list
void printList(Node *head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}



// } Driver Code Ends

/*
struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    data =x;
	    next = NULL;
	}
};
*/
class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
        // Code here
        Node *temp = *head;
        Node *temp1 = temp;
        
        vector<int>tr;
        while(temp){
            tr.push_back(temp->data);
            temp = temp->next;
        }
        vector<int>tr1;
        int n = tr.size();
        for(int i = 0; i < n; i+=2 ) {
            tr1.push_back(tr[i]);
        }
        if(n%2==1){
            
            for(int i = n-2; i >= 0; i-=2){
                tr1.push_back(tr[i]);
            }
        }
        else{
            for(int i = n-1; i >= 0; i-=2){
                tr1.push_back(tr[i]);
            }
        }
        int i = 0;
        while(temp1 && i < n){
            temp1->data = tr1[i];
            temp1 = temp1->next;
            i++;
        }
        // temp1->data = tr1[0];
        // printList(temp1);
    }
};

//{ Driver Code Starts.
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
	    struct Node* head = NULL;
	    struct Node* tail = NULL;
	    int n, k;
	    cin>>n;
	    for(int i=0; i<n ;i++){
	        cin>>k;
	        append(&head, &tail, k);
	    }
	    Solution ob;
	    ob.sort(&head);
	    printList(head);
	}
	return 0;
}

// } Driver Code Ends