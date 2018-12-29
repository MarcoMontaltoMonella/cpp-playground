#include <iostream>
using namespace std;

const int STACK_SIZE = 10;

class stack {
    protected:
        int count;
        int data[STACK_SIZE];
    
    public:
        stack(void)
        {
            count = 0;
        }

        void push(const int item)
        {
            data[count] = item;
            ++count;
        }

        int pop(void)
        {
            --count;
            return (data[count]);
        }
};