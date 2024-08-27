// //sol--bst to sorted DLL then merge two sorted DLL then DLL to Bst


// void convertToSortedDLL(treeNode* root,TreeNode* &head)
// {
//   if(root==NULL)
//   {
//     return;
//   }

//   convertToSortedDLL(root->right,head); 
//   root->right=head;
//   if(head!=NULL)
//   {
//     head->left=root;
//   }
//   head=root;
//   convertToSortedDLL(root->left,head);
// }

// TreeNode* mergeBst(TreeNode* head1,TreeNode* head2)
// {
//    TreeNode* head=NULL;
//    TreeNode* tail=NULL;

//    while(head1!=NULL && head2!=NULL)
//    {
//      if(head1->data<head2->data)
//      {
//        if(head==NULL)
//        {
//           head=head1;
//           tail=head1;
//           head1=head1->right;
//        }

//        else
//        {
//           tail->right=head1;
//           head1->left=tail;
//           tail=head1;
//           head1=head1->right;
//        }

//      }
     
//      else
//      {
//         if(head==NULL)
//        {    
//           head=head2;
//           tail=head2;
//           head2=head2->right;

//         }

//         else {
//           tail->next = head2;
//           head2->left=tail;
//           tail = head2;
//           head2 = head2->right;
//         }
//      }
//    }

//    while(head1!=NULL)
//    {
//       tail->right=head1;
//       head1->left=tail;
//       tail=head1;
//       head1=head1->right;
//    }
//    while(head2!=NULL)
//    {
//       tail->right=head2;
//       head2->left=tail;
//       tail=head2;
//       head2=head2->right;
//    }

//      return head; 
// }


// TreeNode*  convertToBst(TreeNode* &head,int n)
// {
//     if(head==NULL || n<=0)
//     {
//       return NULL;
//     }

//     TreeNode* left=convertToBst(head,n/2);

//     TreeNode* root=head;
//     root->left=left;

//     head=head->next;
//     root->right=convertToBst(head,n-n/2-1);
//     return root;
// }

// int countNodes(TreeNode* head)
// {  int count=0;
//   'while(head!=NULL)
//   {
//     count++;
//     head=head->next;
//   }
// }


// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {

//   TreeNode* head1=NULL;
//   TreeNode* head2=NULL;
//   convertToSortedDLL(root1,head1);
//   convertToSortedDLL(root2,head2);
//   head1->left=NULL;
//   head2->left=NULL;


//   TreeNode* mergedListHead= mergeBst( head1, head2);

//   int n=countNodes(mergedListHead);
//   TreeNode* newRoot=convertToBst(mergedListHead,n);
  
//   return newRoot;  
  
// }