#pragma once
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include<fstream>
#include<string>
#include<iomanip>

using namespace std;

class List//declaration of list
{
public:
	typedef int Item;//what the list holds
	struct Node
	{
		Item data;
		Node* next;

	};
	Node* first;

	//constructors
	List() { first = NULL; }
	List(const List&);

	//destructor
	~List();

	//modification member functions
	void insert(const Item&);
	void insert( );
	void merge(List&, List&);
	std::size_t length()const;
	

	//constant membeer functions
	bool found(size_t);
	void make_empty();

	//friend function
	friend std::ostream& operator<<(std::ostream& out_s, const List& L);


	//private functions and variables
private:
	Node* get_node(const Item&, Node*);
	ofstream file;
	string output = "output.txt";

};

#endif