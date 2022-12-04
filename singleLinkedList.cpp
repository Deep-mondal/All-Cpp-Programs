#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        this->data = x;
        this->next = '\0';
    }
};

node *head = '\0';
void creat()
{
    if (head != '\0')
    {
        cout << "List already created" << endl;
        return;
    }
    int x;
    cout << "creat a node by putting a value" << endl;
    cin >> x;
    node *ptr = new node(x);
    head = ptr;
}
int count()
{
    node *ptr = head;
    int c = 0;
    while (ptr != '\0')
    {
        c++;
        ptr = ptr->next;
    }
    return c;
}
int search(int x)
{
    node *temp = head;
    while (temp != '\0')
    {
        if (x == temp->data)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int repeate(int x)
{
    node *temp = head;
    int c = 0;
    while (temp != '\0')
    {
        if (x == temp->data)
        {
            c++;
        }
        temp = temp->next;
    }
    return c;
}
void insertAtBeggining()
{
    if (head == '\0')
    {
        cout << "First creat a list" << endl;
        return;
    }
    int x;
    cout << "Enter an intiger value" << endl;
    cin >> x;
    node *ptr = new node(x);
    ptr->next = head;
    head = ptr;
}
void insertAtEnd()
{
    if (head == '\0')
    {
        cout << "First creat a list" << endl;
        return;
    }
    node *temp = head;
    int a = count();
    for (int i = 0; i < a; i++)
    {
        temp = temp->next;
    }
    int x;
    cout << "Enter an intiger value" << endl;
    cin >> x;
    node *ptr = new node(x);
    temp->next = ptr;
}
void menu()
{
    cout << "******************************************************" << endl;
    cout << "Welcome to the world of Single linked list using C++" << endl;

    cout << "******************************************************" << endl;
    cout << "      "
         << "1.Creat" << endl;
    cout << "      "
         << "2.Insert at Beggining" << endl;
    cout << "      "
         << "3.Insert at End" << endl;
    cout << "      "
         << "4.Search" << endl;
    cout << "      "
         << "5.Count" << endl;
    cout << "      "
         << "6.Repeate" << endl;
    cout << "      "
         << "7.Display" << endl;
    cout << "      "
         << "8.Exit" << endl;
    cout << "Enter a choice by a number" << endl;
}
void display()
{
    if (head == '\0')
    {
        cout << "First creat a list" << endl;
        return;
    }
    node *ptr = head;
    while (ptr != '\0')
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main()
{
    int ch, a, b, c;
    while (1)
    {
        menu();
        cin >> ch;
        switch (ch)
        {
        case 1:
            creat();
            break;
        case 2:
            insertAtBeggining();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            if (head == '\0')
            {
                cout << "First creat a list" << endl;
                break;
            }
            int x;
            cout << "Enter a element to be search" << endl;
            cin >> x;
            a = search(x);
            if (a != 0)
            {
                cout << "Element Found" << endl;
                break;
            }
            else
            {
                cout << "Element Not Found" << endl;
                break;
            }
        case 5:
            if (head == '\0')
            {
                cout << "First creat a list" << endl;
                break;
            }
            b = count();
            cout << "The number of node is" << b << endl;
            break;
        case 6:
            if (head == '\0')
            {
                cout << "First creat a list" << endl;
                break;
            }
            int p;
            cout << "Enter a element to be counted repetation" << endl;
            cin >> p;
            c = repeate(p);
            cout << "The number of repetation is" << c << endl;
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}