class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head == NULL) return head;
     
      unordered_set<int> seen;
      
      Node * curr = head;
      Node * pre = NULL;
      
      while(curr != NULL){
          if(seen.find(curr->data) != seen.end()){
              pre->next = curr->next;
              delete(curr);
          }
          else{
              seen.insert(curr->data);
              pre = curr;
          }
          curr = pre->next;
      }
      
      return head;
    }
};