// Interface for a template Stack
// The required exceptions are in <stdexcept>, include it
// You should also enable the exceptions in your compiler if necessary
template<typename T>
class Stack {
public:
    // Adds new element to the top of the stack
    virtual void push(T x) = 0;
    // Returns the top element AND removes it from the stack
    // If the stack is empty use 'throw std::out_of_range("<human_friendly_message>");'
    virtual T pop() = 0;
    // Returns the top element but does NOT remove it from the stack
    // If the stack is empty use 'throw std::out_of_range("<human_friendly_message>");'
    virtual T top() = 0;
    // Returns the current number of elements in the stack
    virtual int getSize() = 0;
    // Returns the current capacity of the underlying data storage (array)
    virtual int getCapacity() = 0;
    // Returns true if the stack has no elements and false otherwise
    virtual bool isEmpty() = 0;
    // So we can delete objects of derived classes (implementations) just through the pointer to Stack
    virtual ~Stack(){};
};
