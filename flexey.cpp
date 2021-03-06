#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

using std::string;

typedef struct node{
	char data[16];
	struct node* next;
}list;

string input;
bool Exit=false;

node	first_node, *head=&first_node, *tmp=&first_node, *tail=&first_node;


const char* menu="\n\n\n\n\nFlexey, This Program Will Demonstrate To You How Linked Lists Works, Created For C And C++ Students (Data Structures And Algorithms Beginners)\n\n\n"
		"	0> Exit\n"
		"	1> Display All Nodes\n"
		"	2> Append New Node\n"
		"	3> Insert New Node\n"
		"	4> Delete A Node\n"
		"	5> Edit A Specific Node\n"
		"	6> Change A Specific Node Connection\n"
		"	7> Cut A Specific Node Connection\n"
		"	8> Save The Linked List in a File\n\n\n";



void append();
void insert(int);
void reader();
void read(int);
void freelist();
void delete(int);

int main(){
	printf("%s", menu);

	strcpy (first_node.data, "Flexey");

	while(!Exit){
		reader();
	}


	return 0;
}

void reader(){
	printf("Flexey> ");
	std::cin  >> input;

	if (!strcmp(input.c_str(), "0"))
		freelist();

}
void freelist(){
	return;
}
