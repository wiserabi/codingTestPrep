#include <bits/stdc++.h>

using namespace std;

vector<int> adj[6];
bool visited[6];

void postorder(int i) {
	if (!visited[i]) {
		if (adj[i].size() == 1) {
			postorder(adj[i][0]);
		}
		if (adj[i].size() == 2) {
			postorder(adj[i][0]);
			postorder(adj[i][1]);
		}
		cout << i << "\n";
		visited[i] = true;
	}
}

void preorder(int i) {
	if (!visited[i]) {
		cout << i << "\n";
		visited[i] = true;
		if (adj[i].size() == 1) {
			preorder(adj[i][0]);
		}
		if (adj[i].size() == 2) {
			preorder(adj[i][0]);
			preorder(adj[i][1]);
		}
	}
}

void inorder(int i) {
	if (!visited[i]) {
		if (adj[i].size() == 1) {
			inorder(adj[i][0]);
		}
		if (adj[i].size() == 2) {
			inorder(adj[i][0]);
			cout << i << "\n";
			visited[i] = true;
			inorder(adj[i][1]);
			return;
		}
		cout << i << "\n";
		visited[i] = true;
	}
}
int main() {
	adj[1].push_back(2);
	adj[1].push_back(3);

	adj[2].push_back(4);
	adj[2].push_back(5);
	int root = 1;
	cout << "Ʈ����ȸ: postOrder\n";
	postorder(root);
	memset(visited, 0, sizeof(visited));

	cout << "Ʈ����ȸ: preorder\n";
	preorder(root);
	memset(visited, 0, sizeof(visited));

	cout << "Ʈ����ȸ: inorder\n";
	inorder(root);
	memset(visited, 0, sizeof(visited));
}