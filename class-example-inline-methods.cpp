#include <iostream>
using namespace std;

const int STACK_SIZE = 100;

class stack {
    private:
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


int main() 
{
    stack a_stack;

    a_stack.push(10);
    a_stack.push(45);
    a_stack.push(23);

    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";

    return 0;
}