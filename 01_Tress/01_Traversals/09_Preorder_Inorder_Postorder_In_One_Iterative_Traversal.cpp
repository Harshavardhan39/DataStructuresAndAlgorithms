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

void PrintAllTraversalsIterative(Node *root) {
	if (root == nullptr) return;

	vector<int> Preorder, Inorder, Postorder;

	//{Node, step}
	stack<pair<Node*, int>> st;
	st.push({root, 1});

	while (!st.empty()) {
		Node *curr = st.top().first;
		int step = st.top().second;

		st.pop();

		if (step == 1) {
			Preorder.push_back(curr->data);
			st.push({curr, step + 1});
			if (curr->left != nullptr) {
				st.push({curr->left, 1});
			}
		} else if (step == 2) {
			Inorder.push_back(curr->data);
			st.push({curr, step + 1});
			if (curr->right != nullptr) {
				st.push({curr->right, 1});
			}
		} else {
			Postorder.push_back(curr->data);
		}
	}

	cout << "Preorder -> ";
	for (auto it : Preorder) {
		cout << it << " ";
	}
	cout << endl;

	cout << "Inorder -> ";
	for (auto it : Inorder) {
		cout << it << " ";
	}
	cout << endl;

	cout << "Postorder -> ";
	for (auto it : Postorder) {
		cout << it << " ";
	}
	cout << endl;
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	PrintAllTraversalsIterative(root);
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