#include "node.h"

#include <iostream>
#include <cstring>

/*
Code by Michael Yan
3/7/2020
This code runs a Binary Search Tree algorithm. The user is able to add via console or file, add additional values,
search, or delete.
*/

using namespace std;

int main(){
	
	Node* head = new Node(); //test nodes
	head->setData(100);
	cout << head->getData();
	
	char* method = new char[100];
	cout << "Would you like to add numbers manually in the console or via .txt file? Type 'manual' or 'file': ";
	cin.getline(method, 100);
	
	int index = 0;
	int *stor = new int[1000];
	
	if(strcmp(method, "manual") == 0){ //if user wants to enter in the console
		cout << "Type in a number/series of numbers that you would like to add to the tree, separated by spaces:" << endl;
		char* input2  = new char[100];		
		cin.getline(input2, 100);
		char* token = strtok(input2, " ");
		
		while(token != NULL){
			//changes it to int and puts it in the array starting from 1
			stor[index] = atoi(token);
			//deletes token
			token = strtok(NULL, ", ");
			index++;
		}
		
	}
	
	
	for(int i = 0; i < index; i++){
		//add node recursively, basically fill the tree with the input
	}	
	
	while(true){ //give user action command options
		cout << "\nEnter a command. Type 'add', 'print', 'delete', or 'quit': ";
		
		char* command = new char[10];
		cin.getline(command, 10);
		int number = 0;
		
		if(strcmp(command, "add") == 0){
			cout << "Enter the number you want to add: " <<endl;
			cin >> number;
			cin.get();
			// addNode function
		}
		
		else if(strcmp(command, "print") == 0){
			//print - use a similar side ways tree algorithm as heap
		}
		
		else if(strcmp(command, "delete") == 0){
			//delete function
        }
		else if(strcmp(command, "quit") == 0){
			return false; //quit program
		}
	
	}	

}
