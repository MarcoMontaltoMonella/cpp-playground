#include <iostream>
using namespace std;

const int STACK_SIZE = 10;

template<class kind>
class stack {
    protected:
        int count;
    
    private:
        kind data[STACK_SIZE];
    
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

        kind pop(void)
        {
            --count;
            return (data[count]);
        }
};