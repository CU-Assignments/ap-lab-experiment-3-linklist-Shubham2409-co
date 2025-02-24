class Solution {
    public:
      // Function to display the elements of a linked list in same line
      void printList(Node *head) {
          // your code goes here
          Node* temp=head; // temp ptr pointing to head
          while(temp!=NULL){  //traverse till the last element
              cout<<temp->data<<" "; //print each element
              temp=temp->next; // increment temp ptr
          }
      }
  };