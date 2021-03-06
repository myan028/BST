#ifndef NODE_H
#define NODE_H

class Node{
	public:
		Node();
		Node* getRight();
		Node* getLeft();
		Node* getParent();
		int getData();
		void setData(int);
		void setLeft(Node*);
		void setRight(Node*);
		void setParent(Node*);
		~Node();
	private:
		Node* left;
		Node* right;
		Node* parent;
		int data;
};
#endif
