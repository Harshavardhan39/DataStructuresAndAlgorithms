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

void IterativePostorder(Node *root) {
	if (root == nullptr) return;

	stack<Node*> st;
	Node *curr = root;
	while (!st.empty() || curr != nullptr) {
		if (curr != nullptr) {
			st.push(curr);
			curr = curr->left;
		} else {
			Node *temp = st.top()->right;

			if (temp == nullptr) {
				temp = st.top();
				st.pop();
				cout << temp->data << " ";
				while (!st.empty() && temp == st.top()->right) {
					temp = st.top();
					st.pop();
					cout << temp->data << " ";
				}
			} else {
				curr = temp;
			}
		}
	}
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);

	IterativePostorder(root);
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