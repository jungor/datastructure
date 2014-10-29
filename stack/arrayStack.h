//In file arratStack.h
//Created by Junjie Li, 2014-10-29;
//E-mail: 287150625@qq.com


#ifndef STACK_H
#define STACK_H

typedef int entry_type;
enum ERROR {SUCCESS, OVERFLOW, UNDERFLOW};
const int MAXLEN = 5;

class Stack {
    public:
    Stack();
    ~Stack(){}
    ERROR push(const entry_type& item);
    ERROR pop();
    entry_type top() const;
    bool empty();
    private:
    entry_type _elems[MAXLEN];
    int _top;
};

#endif
