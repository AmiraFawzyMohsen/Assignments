#include<iostream>
#include <stack>
using namespace std;

stack<int> sortStack(stack<int>& input)
{
    stack<int> tmpStack;

    while (!input.empty()) {
        int tmp = input.top();
        input.pop();

        while (!tmpStack.empty() && tmpStack.top() > tmp) {
            input.push(tmpStack.top());
            tmpStack.pop();
        }
        tmpStack.push(tmp);
    }
    return tmpStack;
}
stack<int> sortedMerge(stack<int>& s1, stack<int>& s2, stack<int>& s3)
{
    stack<int> res;
    while (!s1.empty()) {
        res.push(s1.top());
        s1.pop();
    }
    while (!s2.empty()) {
        res.push(s2.top());
        s2.pop();
    }
    while (!s3.empty()) {
        res.push(s3.top());
        s3.pop();
    }
    return sortStack(res);