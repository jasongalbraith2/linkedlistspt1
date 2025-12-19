#include "node.h"
#include "student.h"

Node::Node(Student* student) {
	data = student;
	next = nullptr;
}

Node::~Node() {
	delete data;
}

Node* Node::getNext() {
	return next;
}

Student* Node::getStudent() {
	return data;
}

void Node::setNext(Node* node) {
	next = node;
}
