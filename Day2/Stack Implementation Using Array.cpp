#include <bits/stdc++.h> 
// Stack class.
class Stack {
 private:
    int* data;
    int Top;
    int capacity;
       
public:

    
    Stack(int capacity) {
        data = new int[capacity];
        Top =-1;
        this->capacity = capacity;
    }

    void push(int num) {
        if(Top == capacity){
            return;
        }
        Top++;
        data[Top] = num;
    }

    int pop() {
        if(Top == -1)
        return -1;
        int temp = data[Top];
        Top--;
        return temp;
    }
    
    int top() {
        if(Top ==-1)
        return -1;
        return data[Top];
        
    }
    
    int isEmpty() {

        return Top ==-1;
        // Write your code here.
    }
    
    int isFull() {
        if(Top == capacity) return 1;
        else return 0;
    }
    
};
