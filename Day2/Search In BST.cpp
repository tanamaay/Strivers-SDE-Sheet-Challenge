#include <bits/stdc++.h> 


bool searchInBST(BinaryTreeNode<int> *root, int x) {
   if(root==NULL){
       return NULL;
   }

   if(root->data == x)
   {
       return root;
   }

   if(x<root->data){
       return searchInBST(root->left,x);
   }
   return searchInBST(root->right,x);

}
