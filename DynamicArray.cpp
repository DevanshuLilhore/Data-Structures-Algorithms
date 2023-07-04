#include <iostream>

using namespace std;
class DynamicArray
{
        int *array;
        int size;
        int capacity;
        public:
        int getSize()
        {
            return size;
        }
        int getCapacity()
        {
            return capacity;
        }
        DynamicArray()
        {
            array=new int[1];
            size=0;
            capacity=1;
            
        }
        ~DynamicArray()
        {
            delete []array;
            size=0;
            capacity=0;
        }
        void insert(int index,int value)
        {
            if(size==capacity)
            {
                resize();
            }
            if(index > capacity)
            {
                cout<<"Memory does not exist";
            }
            array[index]=value;
            size++;
        }
        void resize()
        {
            int *temp=new int[2*capacity];
            for(int i=0;i<size;i++)
            {
                temp[i]=array[i];
            }
            delete []array;
            array=temp;
            capacity=2*capacity;
            
        }
        void printArray()
        {
            for(int i=0;i<size;i++)
            {
               cout<<array[i]<<" ";
            }
            cout<<endl;
        }
};
int main()
{
    DynamicArray a;
    cout<<"Size ="<<a.getSize()<<" Capacity ="<<a.getCapacity()<<endl;
    return 0;
}
