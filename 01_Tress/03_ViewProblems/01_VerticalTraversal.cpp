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

vector<vector<int>> VerticalTraversal(Node *root) {
	map<int, map<int, multiset<int>>> mp;

	//{node, {vertical, level}}
	queue < pair<Node*, pair<int, int>>> q;
	q.push({root, {0, 0}});

	while (!q.empty()) {
		auto it = q.front();
		Node *curr = it.first;
		int vertical = it.second.first;
		int level = it.second.second;

		q.pop();

		mp[vertical][level].insert(curr->data);

		if (curr->left != nullptr) {
			q.push({curr->left, {vertical - 1, level + 1}});
		}

		if (curr->right != nullptr) {
			q.push({curr->right, {vertical + 1, level + 1}});
		}
	}

	vector<vector<int>> result;
	for (auto it : mp) {
		vector<int> col;
		for (auto rows : it.second) {
			for (auto it : rows.second) {
				col.push_back(it);
			}
		}
		result.push_back(col);
	}
	return result;
}

void ganesha() {
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	root->left->left->left = new Node(8);
	root->left->left->right = new Node(9);
	root->left->right->left = new Node(10);
	root->left->right->right = new Node(11);
	root->right->left->left = new Node(12);
	root->right->left->right = new Node(13);
	root->right->right->left = new Node(14);
	root->right->right->right = new Node(15);

	vector<vector<int>> result = VerticalTraversal(root);
	for (int i = 0; i < result.size(); i++) {
		for (int j = 0; j < result[i].size(); j++) {
			cout << result[i][j] <<  " ";
		}
		cout << endl;
	}
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