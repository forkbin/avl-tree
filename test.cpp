#include "avl-tree.h"
#include <iostream>
using namespace std;

int main()
{
	AVLNode *t = NULL;
	insertNode(t, 100);
	insertNode(t, 20);
	insertNode(t, 200);
	insertNode(t, 10);
	insertNode(t, 4);
    insertNode(t, 35);
    insertNode(t, 30);
    insertNode(t, 30);
    insertNode(t, 32);

    inOrderTrav(t);
    cout << endl;

    deleteNode(t, 20);
    inOrderTrav(t);
    cout << endl;
    deleteNode(t, 32);
    inOrderTrav(t);
    cout << endl;
    deleteNode(t, 200);
    inOrderTrav(t);
    cout << endl;

    if (!findNode(t, 32))
    {
        cout << "not found in avl." << endl;
    }
    else
    {
        cout << "the frequence is: " << findNode(t, 32)->freq << endl;
    }
	return 0;
}

