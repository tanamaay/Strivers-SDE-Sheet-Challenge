#include <bits/stdc++.h> 

TreeNode<int>* solve(vector<int> &arr, int e, int s){
    if(s>e)
        return NULL;
    
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(arr[mid]);
    root->left = solve(arr, mid-1, s);
    root->right = solve(arr, e, mid+1);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    return solve(arr, n-1, 0);
}
