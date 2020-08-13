
class StackOfIntegers
{
private:
    int elements[100];
    int size{0};

public:
    StackOfIntegers();
    ~StackOfIntegers();
    bool empty();
    int getSize();
    int peek();
    int pop();
    int push(int value);

};
