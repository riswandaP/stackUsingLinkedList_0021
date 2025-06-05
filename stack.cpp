#include <iostream>
using namespace std;

//Node class representing a single node in the linked list
class Node
{
    public:
        int data;
        Node *next;

        Node()
        {
            next = NULL;
        }
};

class Stack
{
    private:
        Node *top; //Pointer to the top node of the stack
    
    public:
        Stack()
        {
            top = NULL; //Initialize the stack with a null top pointer
        }

    //Push operation : Insert an element into the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); //1. Allocate memory for the new node
        newNode->data = value; //2. Assign value
        newNode->next = top; //3. Set the next pointer od the new node to the current top
        top = newNode; //4. Update the top pointer to the new node
        cout << "Push value: " << value << endl;
        return value;
    } 
    //IsEmpty operation : check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; //Return true uf the top pointer is NULL, indicating an empty st
    }
    
    //Pop operation : Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Popped value: " << top->data << endl;
        top = top->next; //Update the top pointer to the next node
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
        } //Return the value of the top node
    }
};

int main()
{
    Stack stack;

    int choice =  0;
    int value;

    while (choice != 4)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: 
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value);
            break;
            case 2: 
            stack.pop();
            break;

}