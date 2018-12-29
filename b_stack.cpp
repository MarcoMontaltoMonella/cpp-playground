#include <iostream>
using namespace std;
#include "stack.cpp"

class b_stack: public stack {
    public:
        void push(const int item)
        {
            if(count >= STACK_SIZE){
                cerr << "Error: Push overflows stack\n";
                exit(8);
            }
            stack::push(item);
        }

        int pop(void)
        {
            if(count <= 0){
                cerr << "Error: Pop causes stack underflow\n";
                exit(9);
            }
            return stack::pop();
        }
};


int main() 
{
    b_stack a_stack;

    a_stack.push(10);
    a_stack.push(43);
    a_stack.push(24);
    a_stack.push(15);
    a_stack.push(46);
    a_stack.push(27);
    a_stack.push(18);
    a_stack.push(49);
    a_stack.push(20);
    a_stack.push(21);
    
    // 11th push() causes overflow
    // a_stack.push(57);

    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";
    cout << a_stack.pop() << "\n";

    // 11th pop() causes underflow
    // cout << a_stack.pop() << "\n";

    return 0;
}