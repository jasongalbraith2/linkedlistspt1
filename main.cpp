#include <iostream>
#include <cstring>

#include "student.h"
#include "node.h"

int main() {
	/* Make 2 example students, then demonstrate
	 * initial functionality. */
	Student* exampleStudent = new Student;
	Student* secondExampleStudent = new Student;

	Node* headNode = new Node(exampleStudent);
	Node* secondaryNode = new Node(secondExampleStudent);

	headNode->setNext(secondaryNode);

	Node* currentNode = headNode;
	/* Actual functionality test */
	std::cout << "Print out headnode memory pointer:\t" << headNode->getStudent();
	std::cout << "Print primary node, then move to secondary node, then print secondary node\t" << headNode->getNext();	
	currentNode = headNode->getNext();
	std::cout << "\t" << currentNode->getNext() << "\n";
	std::cout << "Finally, get student of second node\t" << currentNode->getStudent();


	/* Delete all remaining data */
	delete exampleStudent;
	delete secondExampleStudent;

	delete headNode;
	delete secondaryNode;
	delete currentNode;

	return 0;
}
