//In file arratStack.cpp
//Created by Junjie Li, 2014-10-29;
//E-mial: 287150625@qq.com


#include "arrayStack.h"

Stack::Stack() {
    for (int i = 0; i < MAXLEN; i++) {
        _elems[i] = 0;
    }
    _top = -1;
}

ERROR Stack::push(const entry_type& item) {
    ERROR rtn;
    if (_top == MAXLEN-1) {
        rtn = OVERFLOW;
    } else {
        _top++;
        _elems[_top] = item;
        rtn = SUCCESS;
    }
    return rtn;
}

ERROR Stack::pop() {
    ERROR rtn;
    if (_top == -1) {
        rtn = UNDERFLOW;
    } else {
        _top--;
        rtn = SUCCESS;
    }
    return rtn;
}
entry_type Stack::top() const {
    if (_top != -1) {
        return _elems[_top];
    }
}
bool Stack::empty() {
    return _top == -1;
}

