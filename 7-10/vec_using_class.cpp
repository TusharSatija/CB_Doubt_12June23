#include<iostream>
using namespace std;
class  Vector{
    void double_the_cap()
    {
        int *old_arr=arr;
        int old_cap=cap;
        cap=cap*2;
        arr=new int[cap];
        for(int i=0;i<old_cap;i++)
        {
            arr[i]=old_arr[i];
        }
        delete []old_arr;
    }
    public:
        int total_size=0,cap;
        int *arr;
    Vector(int vcap=1)
    {
        cap=vcap;
        arr=new int[cap];
    }
    void Push_back(int data)
    {
        if(total_size==cap)
        {
            double_the_cap();
        }
        arr[total_size]=data;
        total_size++;
    }
    void Pop_back()
    {
        if(total_size>0)
        {
            total_size--;
        }
    }
    //return_type operator[]()
    int& operator[](int index)
    {
        return arr[index];
    }

    bool isEmpty()
    {
        return total_size==0?true:false;
    }
    int* begin()
    {
        return arr;
    }
    int* end()
    {
        return arr+total_size;
    }

    
};
int main()
{
    Vector V;
    V.Push_back(100);
    cout<<V.total_size<<endl;
    cout<<V.cap;
    cout<<endl;
    V.Push_back(3);
    cout<<V.total_size<<endl;
    cout<<V.cap;
     cout<<endl;
    V.Push_back(34);
    cout<<V.total_size<<endl;
    cout<<V.cap;
    cout<<endl;
   // V[2]=20;  //34=20
    cout<<V[2];
    cout<<endl;
    cout<<V.isEmpty();



    return 0;
} 
