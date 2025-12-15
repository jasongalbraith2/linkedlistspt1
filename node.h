#ifndef NODE_H
#define NODE_H

#include "student.h"

class Node {
private:
	Node* next;
	Student* data;
public:
	Node(Student* student);
	~Node();

	Node* getNext();
	Student* getStudent();
	void setNext(Node* node);
};

#endif
