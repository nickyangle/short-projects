// ADD ANSWER TO THIS FILE
#pragma once

class SNode {
public:
	int elem;
	SNode *next;
};

class IntegerLinkedList {
private:
	SNode * head;
public:
	IntegerLinkedList() {
		head = nullptr;
	}

	void addFront(int x) {
		SNode *tmp = head;
		head = new SNode;
		head->next = tmp;
		head->elem = x;
	}

	void print(void) {

		SNode *tmp = head;

		while (tmp != nullptr)
		{
			std::cout << tmp->elem << " ";
			tmp = tmp->next;

		}

		std::cout << std::endl;
	}

	int getInteger(int position) { // COMPLETE THIS
	int getInteger(int position) { // COMPLETE THIS
		SNode* current = head;
		int count = 0;
		int temp = -1;
		while (current != NULL) {
			// move nodes until you reach null
			current->next;
			if (count == position) {
				// temp = element;
				

			}
			count++;
		}
		return temp;
	}
		
};
