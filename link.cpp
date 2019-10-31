#include "link.h"
#include<iostream>
using namespace std;

link::link()
{
	head = NULL;
	tail = NULL;
}
void link::create_node(double data) {
	node* temp = new node;
	temp->value = data;
	temp->next = NULL;
	if (head == NULL) {
		head = temp;
		tail = head;
		temp=NULL;
}
	else {
		tail->next = temp;
		tail = temp;
	}
}
void link::display() {
	node* ptr;	
	ptr = head;
	while (ptr != NULL) {
		cout << "           ";
		cout << ptr->value;
		ptr = ptr->next;
		
	}
}
void link::add_first(double data) {
	node* ptr = new node;
	ptr->value = data;
	ptr->next = head;
	head = ptr;
	ptr = NULL;
}
void link::insert_last(double data) {
	node* ptr;
	ptr = head;
	while (ptr->next != NULL)
	{
		ptr=ptr->next;
	}
	node* temp = new node;
	temp->value = data;
	temp->next = NULL;
	ptr->next = temp;
	tail = temp;
	temp = NULL;

}
void link::delete_start() {

	node* ptr;
	ptr = head;
	head = ptr->next;
	ptr = NULL;
}
void link::delete_last()
{
	
	node* pre=NULL;
	node* temp;
	temp = head;
	while (temp->next != NULL)
	{
		pre = temp;
		temp = temp->next;

	}	

	tail = pre;
	pre->next = NULL;
	pre = NULL;
	temp = NULL;

}
void link::delete_add(int pos,double data) {
	pos--;
	node* pre = NULL;
	node* temp;
	temp = head;
	for (int i=1; i<=pos;i++)
	{
		if (i == 3) {
		
			node* ptr = new node;
			ptr->value = data;
			pre->next = NULL;
			pre->next = ptr;
			ptr->next = temp;

	}
		pre = temp;
		temp = temp->next;

	}

	pre->next = NULL;
	
	pre->next= temp->next;
	temp->next = NULL;
	temp = NULL;
	pre = NULL;


}