// vector<int> Morris_Inorder(Node* root)
// { vector<int> inorder;
//     Node* curr=root;
//       while(curr!=NULL)
//  {
//     if(curr->left==NULL)
//     {
//         inorder.push_back(curr->data);
//         curr=curr->right;
//     }
//     else
//     {
//               Node* prev=curr->left;
//               while(prev->right!=NULL && prev->right!=curr)
//               { 
//                        prev=prev->right;
//               }
//                //if out of loop
//                //two reasons--either prev->right==NULL or prev->right==curr
//                //if prev->right==NULL that means first time left 
//                //hence make the link first
//                //if prev->right==curr that means came back from left therefore remove the link then 
//                //print the root and go to right
//
//               if(prev->right==NULL)
//               {
//                 prev->right=curr;
//                 curr=curr->left;
//               }
//
//               else
//               {
//                   prev->right=NULL;
//                   inorder.push_back(curr->data);
//                   curr=curr->right;
//               }
//         }
//   }

//     return inorder;

//     }



//preorder
// vector<int> Morris_Preorder(Node* root)
// { vector<int> Preorder;
//     Node* curr=root;
//     while(curr!=NULL)
//  {
//     if(curr->left==NULL)
//     {
//         Preorder.push_back(curr->data);
//         curr=curr->right;
//     }
//     else
//     {
//               Node* prev=curr->left;
//               while(prev->right!=NULL && prev->right!=curr)
//               { 
//                        prev=prev->right;
//               }
//                //if out of loop
//                //two reasons--either prev->right==NULL or prev->right==curr
//                //if prev->right==NULL that means first time left 
//                //hence make the link first
//                //if prev->right==curr that means came back from left therefore remove the link then 
//                //print the root and go to right
//
//               if(prev->right==NULL)
//               {
//                 prev->right=curr;
//                 Preorder.push_back(curr->data);
//                 curr=curr->left;
//               }
//
//               else
//               {
//                   prev->right=NULL;              
//                   curr=curr->right;
//               }
//     }
//  }

//     return Preorder;

//     }

