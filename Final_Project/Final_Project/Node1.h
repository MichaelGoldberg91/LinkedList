#ifndef NODE_TYPE_H
#define NODE_TYPE_H
template <class  Type>
struct Node1 { // for use in linked list implementation of Stack<Type>
	Type data;
	Node1<Type> *next;
};

#endif