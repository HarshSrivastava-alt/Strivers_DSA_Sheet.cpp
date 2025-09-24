void addNode(Node* head,int pos,int data){
  int cnt=0;
  Node* curr=head;
  while(cnt<pos){
      curr=curr->next;
      cnt++;
  }
Node* nxt=curr->next;
curr->next=new Node(data);
curr->next->prev=curr;
curr->next->next=nxt;
}
