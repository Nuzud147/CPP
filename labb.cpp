#include <bits/stdc++.h>
using namespace std;
int MAX = 8;
int stk[8];
int top = -1;
int isEmpty()
{
if (top == -1)
{
return 1;
}
else
{
return 0;
}
}
int isFull()
{
if (top == MAX - 1)
{
return 1;
}
else
{
return 0;
}
}

void push(int data)
{
 if (!isFull())
 {
   top = top + 1;
   stk[top] = data;
 }
   else

 {
    cout << "Could not insert " << data << ", Stack is full" << endl;
 }
}
void pop()
{
     if (!isEmpty())
    {
     top = top - 1;
    }
     else
    {
     cout << "Could not retrive data, Stack is empty" << endl;
    }
}
int peek()
{
    return stk[top];
}
int main()
{
push(5);
push(10);
push(15);
cout << peek() << endl;
pop();
cout << peek() << endl;
cout << (isEmpty() ? "True" : "False") << endl;
cout << peek() << endl;
pop();
cout << peek() << endl;
pop();
cout << (isEmpty() ? "True" : "False") << endl;
return 0;
}
