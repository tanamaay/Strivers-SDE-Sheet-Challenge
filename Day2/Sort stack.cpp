#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	int n = stack.size();
	vector<int>arr;

	for(int i=0;i<n;i++){
		arr.push_back(stack.top());
		stack.pop();
	}

	sort(arr.begin(),arr.end());
	for(int i =0;i<n;i++){
		stack.push(arr[i]);
	}
	
}
