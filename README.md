#include <iostream>

using namespace std;
class Stack
{
    int s[100];
    int top;
    public:
        Stack()
        {
            top=-1
        }
        ~Stack()
        {
            top=-1
        }
        int push(int value)
        {
            if(isStackFull())
            {
                cout<<"Stack Overflow"<<endl;
            }
            else
            {
                s[++top]=value;
            }
        }
        int isStackFull()
        {
            if(top==99)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
        int isStackEmpty()
        {
            if(top==-1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        int pop()
        {
            if(isStackEmpty())
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                return s[top--];
            }
        }
        int top()
        {
            if(isStackEmoty())
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                return s[top];
            }
        }
        int size()
        {
            return top+1;
        }
        
}
int main()
{
    int choice;
    while(choice!=5)
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Get Top"<<endl;
        cout<<"4.Get size"<<endl;
        cout<<"5.Exit"<<endl;
        
    }
    return 0;
}
