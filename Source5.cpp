#include<iostream>
using namespace std;

class Node {
public:
	char data;
	Node* next;
};

void printlist(Node* n) {
	while (n != NULL){
		cout << n->data;
		n = n->next;
		}
}
int main() {
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* fourth = NULL;
	Node* fifth = NULL;

	first = new Node();
	second = new Node();
	third = new Node();
	fourth = new Node();
	fifth = new Node();

	first->data = 'A';
	first->next = second;

	second->data = 'm';
	second->next = third;

	third->data = 'i';
	third->next = fourth;

	fourth->data = 'r';
	fourth->next = fifth;

	fifth->data = 'a';
	fifth->next = NULL;

	printlist(first);

}