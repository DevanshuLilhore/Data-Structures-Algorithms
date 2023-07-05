#include <iostream>

using namespace std;
class Array
{
    public:
        int size=0;
        int a[10];
        void insert(int index,int value)    //Insert element
        {
            a[index]=value;
            size++;
        }
        int get(int index)
        {
            return a[index];
        }
        int getSize()
        {
            return size;
        }
        int search(int value)   //Search element
        {
            for(int i=0;i<size;i++)
            {
                if(a[i]==value)
                  return i;
            }
            return -1;
        }
        void delet(int index)      //Delete element
        {
            for(int i=index; i<size-1;i++)
            {
                a[i]=a[i+1];
            }
            a[size-1]=0;
            size--;
        }
        void printArray()   //Print array
        {
            for(int i=0;i<size;i++)
            {
               cout<<a[i]<<" ";
            }
        }
};
int main()
{
    int x,n,i,value;
    Array a;            //Creat array class object
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Enter "<<n<<" elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.insert(i,x);
    }
    for(int i=0;i<a.getSize();i++)
    {
        cout<<a.get(i)<<" ";
    }
    cout<<endl<<"Enter element you want to search ";
    cin>>value;
    int index =a.search(value);
    if(index !=-1)
    {
        cout<<"Element found at index : "<<index;
    }
    else
    {
        cout<<"Element Not found "<<endl;
    }
    cout<<endl<<"Which index oyu want to delete ";
    cin>>index;
    a.delet(index);
    a.printArray();

    return 0;
}
