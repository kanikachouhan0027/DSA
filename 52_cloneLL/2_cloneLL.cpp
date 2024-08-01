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
//    while(originalnode!=NULL && clonenode!=NULL)
//    {
//        Node* temp1=head;
//        int count1=0;
//        while(temp1!=NULL && temp1!=originalnode->arb)
//        {
//            temp1=temp1->next;
//            count1++;
//        }
//        if(temp1==NULL)
//        {
//            clonenode->arb=nullptr;
//        }
//       Node* temp2=cloneHead;
//       int count2=0;
//       while(count2<count1)
//       {
//           temp2=temp2->next;
//           count2++;
//       }
      
//       clonenode->arb=temp2;
//       originalnode=originalnode->next;
//       clonenode=clonenode->next;
//    }
//    return cloneHead;
// }
// };