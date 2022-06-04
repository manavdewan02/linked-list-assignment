//function to delete all odd nodes from circular linked list
void deleteOddNodes() {
// only head
  if(head != NULL && head->next == head) {
    free(head);
    head = NULL;
  } 
  else if(head != NULL) {
//more than one element   
    Node* temp = head;
    while(temp->next != head) {
      temp = temp->next;
    }
    temp->next = head->next;
    free(head);
    head = temp->next;
    // to delete odd node
    if(head != NULL && head->next != head) {

      Node* evenNode = head;
      Node* oddNode = head->next; 
      while(true) {
        temp = evenNode;
        evenNode->next = oddNode->next;
        free(oddNode);
        evenNode = evenNode->next;
        oddNode = evenNode->next;
        if(evenNode == head || oddNode == head)
          break;
      }
    //even node reaches head
      if(evenNode == head)
        temp->next = head;
      else
        evenNode->next = head;
    }
  } 
}