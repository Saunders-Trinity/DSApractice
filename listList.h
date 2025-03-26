class Node{ //this is for a single linked list
  Node *head;
  int data;
  Node* next;

//default constructor
Node(){
  data = 0;
  next = nullptr;
  //parameterized constructor
  Node(int data){
    this->data = data;
    this->next = nullptr;
}
//insert at beginning, only if head doesnt exist
void insertHead(int data){
  Node* newNode = new Node(data);
  if(head == nullptr){
      head = newNode;
      return
    }
  newNode->next = this->head;//inserts new list at head
  this->head = newNode;
//printing the list via transversing
void print(){
  Node *temp = head;
        // Check for empty list
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }
        // Traverse the list
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
}
}
}
}
