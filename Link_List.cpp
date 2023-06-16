#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *head = NULL;
    Node d1;
    d1.data = 10;
    head = &d1;
    cout << head->data;

    Node d2;
    d2.data = 20;
    d1.next = &d2;

    Node d3;
    d3.data = 23;
    d3.next = &d1;
    head = &d3;
    cout << head->data;
}
