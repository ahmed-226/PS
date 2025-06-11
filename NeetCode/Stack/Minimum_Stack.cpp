#include<bits/stdc++.h>
using namespace std;

class MinStack{
    stack<int> s;
    stack<int> minStack;
public:

    MinStack(){}

    void push(int val){
        s.push(val);
        val=min(val,!s.empty()?s.top():val);
        minStack.push(val);
    }
    void pop(){
        s.pop();
        minStack.pop();
    }

    int top() {
        return s.top();
    }

    int getMin(){
        return minStack.top();
    }
};

int main(){
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout<<obj->getMin()<<endl;
    obj->pop();
    cout<<obj->top()<<endl;
    cout<<obj->getMin()<<endl;
    return 0;
}