#ifndef AVL_TREE_H
#define AVL_TREE_H
struct AVLNode
{
	AVLNode *left;
	AVLNode *right;
	short height;
	int freq;
	int data;
	AVLNode(int d = 0)
		:left(nullptr), right(nullptr), height(1), freq(1), data(d) {}
};

AVLNode *findNode(AVLNode *r, int val);
void insertNode(AVLNode *&r, int val);
void deleteNode(AVLNode *&r, int val);
void print(AVLNode *r);
void inOrderTrav(AVLNode *r);

#endif