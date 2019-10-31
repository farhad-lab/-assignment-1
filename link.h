

struct node
{
	double value;
	node* next;
};
class link
{ private:
	node* head;
	node* tail;
public:
	link();
	void create_node(double);
	void display();
	void add_first(double);
	void insert_last(double);
	void delete_start();
	void delete_last();
	void delete_add(int,double );
};