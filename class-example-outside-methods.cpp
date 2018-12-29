#include <iostream>
using namespace std;

const int STACK_SIZE = 10;

class stack {
    private:
        int count;
        int data[STACK_SIZE];
    
    public:
        void init(void);
        void push(const int item);
        int pop(void);

};

inline void stack::init(void)
{
    count = 0;
}

inline void stack::push(const int item)
{
    data[count] = item;
    ++count;
}

inline int stack::pop(void)
{
    --count;
    return (data[count]);
}

int main() 
{
    stack a_stack;
    a_stack.init();

    a_stack.push(10);
    a_stack.push(45);
    a_stack.push(23);

    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";

    return 0;
}