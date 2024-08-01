// class Solution
// {private:
// void insertattail(Node* &head,Node* &tail,int val)
// {Node* temp=new Node(val);
//     if(head==NULL)
//     {
//         head=temp;
//         tail=temp;
//         return;
//     }
//     tail->next=temp;
//     tail=temp;
// }
//     public:
//     Node *copyList(Node *head)
//     {
//       Node* cloneHead=NULL;
//       Node* cloneTail=NULL;
//       Node* temp=head;
//       while(temp!=NULL)
//       {
//           insertattail(cloneHead,cloneTail,temp->data);
//           temp=temp->next;
//       }
    
//    Node* originalnode=head;
//    Node* clonenode=cloneHead;
//   while(originalnode!=NULL && clonenode!=NULL)
//   {
//       Node* next=originalnode->next;
//       originalnode->next=clonenode;
//       originalnode=next;
//       //
//       next=clonenode->next;
//       clonenode->next=originalnode;
//       clonenode=next;
      
//   }
// //random ptr
//  originalnode=head;
//  clonenode=cloneHead; 
 
//  while(originalnode!=NULL && clonenode!=NULL)
 
//  {   if(originalnode->arb!=NULL)
//    { clonenode->arb=originalnode->arb->next;}
//    else
//    {
//        clonenode->arb=NULL;
//    }
// originalnode=clonenode->next;
// clonenode=originalnode->next;
     
//  }
 
//  originalnode=head;
//  clonenode=cloneHead; 
 
//  while(originalnode!=NULL && clonenode!=NULL)
//  {
//      originalnode->next=clonenode->next;
//      originalnode=originalnode->next;
     
//      if(originalnode!=NULL)
//      {clonenode->next=originalnode->next;}
//      clonenode=clonenode->next;
     
//  }
//    return cloneHead;
// }
// };