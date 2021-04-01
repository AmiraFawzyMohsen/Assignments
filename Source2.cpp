#include<iostream>
using namespace std;

#define Max 5

class Stack {
	int top;

public:
	int x[Max];

	Stack() {
		top = -1;
	}
	bool push(int a);
	int pop();
	int findMin();
};

bool Stack::push(int a) {
	if (top >= (Max - 1)) {
		cout << "stack isfull";
		return false;
	}
	else {
		x[++top] = a;
		cout << "pushed into stack";
		return true;
	}
}

int Stack::pop() {
	if (top < 0) {
		cout << "stack underflow";
		return 0;
	}
	else {
		int a = x[top--];
		return a;
	}
}


int Stack::findMin(){
	if (top < 0) {
		cout << "stack underflow";
		return 0;
	}
	else{
		int min = x[top];
		for (int i = 4; i >= 0; i--) {
			if (min > x[i])
				min = x[i];
			top--;
		}
		return min;
}
}

