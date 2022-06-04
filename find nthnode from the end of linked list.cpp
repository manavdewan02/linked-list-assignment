// Simple C++ program to find n'th node from end
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
void printNthFromLast(struct Node* head, int n)
{
	int len = 0, i;
	struct Node* temp = head;
	while (temp != NULL) {
		temp = temp->next;
		len++;
	}
	if (len < n)
		return;

	temp = head;
	for (i = 1; i < len - n + 1; i++)
		temp = temp->next;

	cout << temp->data;

	return;
}

void push(struct Node** headnew, int new_data)
{
	struct Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*headnew);
	(*headnew) = new_node;
}

// Driver Code
int main()
{
	struct Node* head = NULL;
	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 35);
    printNthFromLast(head, 4);
	return 0;
}
