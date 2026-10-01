#include <iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *next;

    Node(int i)
    {
        info = i;
        next = NULL;
    }
};

void Push(Node *&top, int item)
{
    Node *temp = new Node(item);
    temp->next = top;
    top = temp;
    cout << item << "pushed into stack";
}

int Pop(Node *&top)
{
    if (top == NULL)
    {
        cout << "stack is empty (Underflow)" << endl;
        return -1;
    }
    else
    {
        Node *temp = top;
        int item = temp->info;
        top = top->next;
        delete temp;
        cout << item << " popped from stack" << endl;
        return item;
    }
}

int Peek(Node *top)
{
    if (top == NULL)
    {
        cout << "stack is empty" << endl;
        return -1;
    }
    else
    {
        cout << "Top element: " << top->info << endl;
        return top->info;
    }
}

void Display(Node *top)
{
    if (top == NULL)
    {
        cout << "stack is empty" << endl;
        return;
    }
    cout << "Stack elements (top to bottom): ";
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *top = NULL;
    int choice, item;

    while (true)
    {
        cout << " Stack Operations" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter item to push: ";
            cin >> item;
            Push(top, item);
            cout << endl;
            break;
        case 2:
            Pop(top);
            break;
        case 3:
            Peek(top);
            break;
        case 4:
            Display(top);
            break;
        case 5:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}