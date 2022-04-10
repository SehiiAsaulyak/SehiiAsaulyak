#include <iostream>
#include<fstream>
#include <string>
#include<windows.h>
#include<memory>
using namespace std;     	

struct Node {
	int data;
	Node* next;
};
class List
{
private:
	Node* m_head;
	int count = 0;
public:
	List() {
		m_head = nullptr;
	};
	void push_back(int newdata) {
		Node* elem = new Node();
		elem->data = newdata;
		elem->next = nullptr;
		if (m_head == nullptr) {
			m_head = elem;
		}
		else {
			Node* temp = m_head;
			while (temp->next!=nullptr) {
				temp = temp->next;
			}
			temp->next = elem;
		}
		count++;
}
	void push_front(int newdata) {
		Node* elem = new Node();
		elem->data = newdata;
		elem->next = m_head;
		m_head = elem;
		count++;
	}
	int push_at(int index,int newdata) {
		
		Node* previous = m_head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->next;
		}
		Node* elem = new Node();
		Node* temp = previous->next;
		previous->next = elem;
		elem->next = temp;
		elem->data = newdata;
		return temp->data;
	}
	void pop_back() {
		remove_at(count - 1);
	}
	void remove_at(int index) {
		if (index == 0) {
			pop_front();
		}
		else {
			Node* previous = m_head;
			for (int i = 0; i < index - 1; i++)
			{
				previous = previous->next;
			}
			Node* temp = previous->next;
			previous->next = temp->next;
			delete temp;
			count--;
		}
		
	}
	void pop_front() {
		Node* temp = m_head;
		m_head = m_head->next;
		delete temp;
		count--;
	}
	void clear() {
		while (count) {
			pop_front();
		}
	}
	void print_list() {
		Node* temp = m_head;
		while (temp != nullptr) {
			cout << temp->data<<" ";
			temp = temp->next;
		}
		cout << endl;
	}
	int get_count() {
		return count;
	}
	int get_index_data(int index) {
		int counter=0;
		Node *temp = m_head;
		while (temp != nullptr) {
			if (counter == index) {
				cout<< "Number with index " << index << " is: ";
				return temp->data;
			}
			temp = temp->next;
			counter++;
		}
	}
	~List() {
		clear();
	};
};


int main()
{
	List lst;
	lst.push_back(5);
	lst.push_back(1);
	lst.push_back(7);
	lst.push_back(8);
	lst.print_list();
	lst.push_at(3,20);
	lst.print_list();

	/*lst.pop_back();
	lst.print_list();*/
	/*lst.pop_front();
	lst.print_list();
	cout<<lst.get_count();
	lst.clear();
	lst.print_list();*/
	/*cout << lst.get_count()<<endl;
	cout << lst.get_index_data(1);*/
}