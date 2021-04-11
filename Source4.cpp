#include<iostream>
using namespace std;

class Node {
public:
	char data;
	Node* next;
};

int main() {
	Node* first = new Node();
	first->data = 'A';
}
