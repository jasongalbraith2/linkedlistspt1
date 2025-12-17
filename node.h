#ifndef NODE_H
#define NODE_H

#include "student.h"

class Node {
private:
	Node* next;
	Student* data;
public:

	/* Constructor / Deconstructor */
	Node(Student* student);
	~Node();

	/* Function returns private data (node* next) to point to the next node */
	Node* getNext();

	/* Function returns private data (student* data) to point to the student value saved */
	Student* getStudent();

	/* Function takes a node pointer to point to the next in the chain of nodes */
	void setNext(Node* node);
};

#endif
