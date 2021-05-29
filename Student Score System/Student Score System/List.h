#pragma once

// Linked List Node
template <typename Elem>
ref class Link {
public:
	Elem^ element; // Value for this node
	Link^ next; // Pointer to next node
	Link() {
		next = nullptr;
	}
	Link(Link^ nextval) {
		next = nextval;
	}
	Link(Elem^ elemval) {
		element = elemval;
		next = nullptr;
	}
	Link(Elem^ elemval, Link^ nextval) {
		element = elemval;
		next = nextval;
	}
};

// Linked List
template <typename Elem>
ref class LList {
private:
	Link<Elem>^ head; //Point to list header
	Link<Elem>^ tail; //Pointer to last Elem
	Link<Elem>^ fence; //Last element on left
	int leftcnt; //Size of left
	int rightcnt; //Size of right

public:
	LList() {
		init();
	}

	//Initialization routine
	void init() {
		fence = tail = head = gcnew Link<Elem>;
		leftcnt = rightcnt = 0;
	}

	//Remove link nodes to free store
	void removeall() {
		while (head != nullptr) {
			fence = head;
			head = head->next;
			delete fence;
		}
	}

	// Insert at front of right partition
	bool insert(Elem^ item) {
		fence->next = gcnew Link<Elem>(item, fence->next);
		if (tail == fence)
			tail = fence->next;
		rightcnt++;
		return true;
	}

	// Append Elem to end of the list
	bool append(Elem^ item) {
		tail = tail->next = gcnew Link<Elem>(item, nullptr);
		rightcnt++;
		return true;
	}

	// Remove and return first Elem in right partition
	bool remove(Elem^& it) {
		if (fence->next == nullptr) return false;
		it = fence->next->element; // Remember val
		Link<Elem>^ ltemp = fence->next; // Remember link node
		fence->next = ltemp->next; // Remove
		if (tail == ltemp) // Reset tail
			tail = fence;
		delete ltemp; // Reclaim space
		rightcnt--;
		return true;
	}

	// the size of the list after and including the current
	int rightLength() { return rightcnt; }

	// the size of the list before the current
	int leftLength() { return leftcnt; }

	// the total size
	int length() { return leftcnt + rightcnt; }

	// set current to the beginning
	void setStart() {
		fence = head;
		rightcnt += leftcnt;
		leftcnt = 0;
	}

	// set current to the last
	void setEnd() {
		fence = tail;
		leftcnt += rightcnt;
		rightcnt = 0;
	}

	// set current to the previous item
	void prev() {
		Link<Elem>^ temp = head;
		if (fence == head) return; // No prev Elem
		while (temp->next != fence)
			temp = temp->next;
		fence = temp;
		leftcnt--;
		rightcnt++;
	}

	// set current to the next item
	void next() {
		if (fence == tail) return; // No next Elem
		fence = fence->next;
		leftcnt++;
		rightcnt--;
	}

	// Set the size of left partition to pos
	bool setPos(int pos) {
		if ((pos < 0) || (pos > rightcnt + leftcnt))
			return false;
		fence = head;
		for (int i = 0; i < pos; i++)
			fence = fence->next;
		rightcnt = rightcnt + leftcnt - pos;
		leftcnt = pos;
		return true;
	}

	bool getValue(Elem^% it) {
		if (rightLength() == 0)
			return false;
		it = fence->next->element;
		return true;
	}

	void print() {
		/*Link<Elem>* temp = head;
		cout << "< ";
		while (temp != fence) {
			cout << temp->next->element << " ";
			temp = temp->next;
		}
		cout << "| ";
		while (temp->next != NULL) {
			cout << temp->next->element << " ";
			temp = temp->next;
		}
		cout << ">\n";*/
	}
};