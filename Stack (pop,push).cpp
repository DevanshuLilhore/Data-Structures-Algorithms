#include <iostream>
using namespace std;
class Stack
{
    int s[100];
    int top;
    public:
        Stack()
        {
            top=-1;
        }
        ~Stack()
        {
            top=-1;
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
            if(top == -1)
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
        int Top()
        {
            if(isStackEmpty())
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                return s[top];
            }
        }
        int Size()
        {
            return top+1;
        }
        
};

int main()
{
    Stack s;
    int choice;
    while(choice!=5)
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Get Top"<<endl;
        cout<<"4.Get size"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int value;
                cout<<"Enter a number"<<endl;
                cin>>value;
                s.push(value);
                break;
            }
             case 2:
            {
                int value=s.pop();
                cout<<"Deleted value is "<<value<<endl;
                break;
            }
             case 3:
            {
                cout<<"Top of the stack is"<<s.Top()<<endl;
                break;
            }
             case 4:
            {
                
                cout<<"Size of stack is"<<s.Size();
                break;
            }
             case 5:
            {
                exit(0);
            }
        }
        
    }
    return 0;
}
