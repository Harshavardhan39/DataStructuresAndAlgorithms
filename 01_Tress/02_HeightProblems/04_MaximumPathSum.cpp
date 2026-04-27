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

int PathSum(Node *root, int &maximumSum) {
	if (root == nullptr) return 0;

	int leftSum = PathSum(root->left, maximumSum);
	int rightSum = PathSum(root->right, maximumSum);

	maximumSum = max(maximumSum, leftSum + rightSum + root->data);

	return root->data + max(leftSum, rightSum);
}

int MaximumPathSum(Node *root) {
	int maximumSum = 0;
	PathSum(root, maximumSum);
	return maximumSum;
}

void ganesha() {
	Node *root = new Node(-10);
	root->left = new Node(9);
	root->right = new Node(20);
	root->right->left = new Node(15);
	root->right->right = new Node(7);

	cout << MaximumPathSum(root) << endl;
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