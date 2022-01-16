//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#ifndef STATICQUEUE_H_INCLUDED
#define STATICQUEUE_H_INCLUDED

#include "StaticStack.h"

using namespace Stack;

namespace Queue
{
    const int STATIC_STACK_CAPACITY = 100;

    StaticStack Create();

    bool Enqueue(StaticStack& stack, char elem);

    char Dequeue(StaticStack& stack, StaticStack& stack2);

    char Front(StaticStack& stack, StaticStack& stack2);

    int Size(StaticStack& stack);

    int Count(StaticStack& stack);

    bool IsEmpty(StaticStack& stack);

    bool Clear(StaticStack& stack);
}

#endif // STATICQUEUE_H_INCLUDED
