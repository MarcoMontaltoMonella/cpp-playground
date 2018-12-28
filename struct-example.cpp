#include <iostream>
using namespace std;

const int STACK_SIZE = 100;

struct stack {
    int count;
    int data[STACK_SIZE];
};

inline void stack_push(struct stack &the_stack, const int item)
{
    the_stack.data[the_stack.count] = item;
    ++the_stack.count;
}

inline int stack_pop(struct stack &the_stack)
{
    --the_stack.count;
    return (the_stack.data[the_stack.count]);
}

inline void stack_init(struct stack &the_stack)
{
    the_stack.count = 0;
}

struct person {
    char name[100];
    char surname[100];
    int age;
};

int main() 
{
    stack s;
    stack_init(s);
    stack_push(s, 14);
    stack_push(s, 47);
    stack_push(s, 31);
    cout << stack_pop(s) << "\n";
    cout << stack_pop(s) << "\n";
    cout << stack_pop(s) << "\n";

    person p = {"Marco", "Montalto Monella", 25};
    cout << "Hello, " << p.name << " " << p.surname << "!\n";
    return 0;
}