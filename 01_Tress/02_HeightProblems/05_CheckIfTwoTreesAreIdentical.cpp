#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;

	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};

bool CheckIfTwoTreesAreIdentical(Node *root1, Node *root2) {
	if (root1 == nullptr || root2 == nullptr) return root1 == root2;

	return (root1->data == root2->data) &&
	       CheckIfTwoTreesAreIdentical(root1->left, root2->left) &&
	       CheckIfTwoTreesAreIdentical(root2->right, root2->right);
}

void ganesha() {
	Node *root1 = new Node(1);
	root1->left = new Node(2);
	root1->right = new Node(3);
	root1->left->left = new Node(4);
	root1->right->right = new Node(5);

	Node *root2 = new Node(1);
	root2->left = new Node(2);
	root2->right = new Node(3);
	root2->left->left = new Node(4);
	root2->right->right = new Node(5);

	cout << CheckIfTwoTreesAreIdentical(root1, root2) << endl;
}















void execution() {

#ifndef ONLINE_JUDGE
	freopen("../../radhaKrishna.txt", "r", stdin);
	freopen("../../satyaNarayanaSwamy.txt", "w", stdout);
#endif

}

int main() {

	execution();

	ganesha();

	return 0;

}