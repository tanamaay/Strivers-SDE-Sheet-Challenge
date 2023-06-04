#include <bits/stdc++.h> 

bool palindrome(vector<int>ans){
    int s =0;
    int e = ans.size()-1;

    while(s<=e){
        if(ans[s]!=ans[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    vector<int>ans;
    LinkedListNode<int>*temp = head;
    while(temp!=NULL){
        ans.push_back(temp->data);
        temp = temp->next;
    }
    return palindrome(ans);

}
