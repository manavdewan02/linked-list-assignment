// C++ program to count occurrences in linked list
#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
int frequency = 0;
void push(struct Node** headnew, int new_data)
{
	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*headnew);
	(*headnew) = new_node;
}
int count(struct Node* head, int key)
{
	if (head == NULL)
		return frequency;
	if (head->data == key)
		frequency++;
	return count(head->next, key);
}
int main()
{
	struct Node* head = NULL;
	push(&head, 1);
	push(&head, 3);
	push(&head, 1);
	push(&head, 2);
	push(&head, 1);
	cout << "count of 1 is " << count(head, 1);
	return 0;
}
