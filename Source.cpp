#include<iostream>
#include "link.h"
using namespace std;

int main()
{
	link ob;
	cout << "the first 5 nodes are :\n";
	ob.create_node(25);
	ob.create_node(50);
	ob.create_node(90);
	ob.create_node(40);
	ob.create_node(55);
	
	ob.display();
	
	cout << endl;
	cout <<  "A new node is created in the start  :\n";
	ob.add_first(15);
	cout << endl;	
	ob.display();
	cout << endl;	cout << endl;
	
	cout  << "A new node is created in the end  :\n";
	ob.insert_last(10);
	ob.display();
	cout << endl;	cout << endl;
	
	cout  << "A first node is deleted  :\n";
	ob.delete_start();
	ob.display();
	cout << endl;	cout << endl;
	
	cout << "the last node is deleted  :\n";
	ob.delete_last();
	ob.display();
	cout << endl;	cout << endl;
	
	cout <<"the  node at 4  is deleted  and that is created at position 3 :\n";
	ob.delete_add(4,40);//it delete a node at position 4 and create a node at 3rd postion of value 40
	ob.display();
	cout << endl;	cout << endl;
	
	system("pause");
	return 0;
}