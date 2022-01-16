//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include "StaticQueue.h"
#include "StaticStack.h"

namespace Queue
{
    bool Enqueue(StaticStack& stack, char elem){
        return Stack::Push(stack, elem);
    }

    char Dequeue(StaticStack& stack, StaticStack& stack2){
        stack2 = Stack::changeStacks(stack,stack2);
        char dequeue_value = Stack::Pop(stack2);

        Stack::stacksBackToNormal(stack,stack2);
        return dequeue_value;
    }

    char Front(StaticStack& stack, StaticStack& stack2){
        char front_queue = Stack::Top(Stack::changeStacks(stack,stack2));

        Stack::stacksBackToNormal(stack,stack2);

        return front_queue;
    }

    StaticStack Create(){
        return Stack::Create();
    }

    int Size(StaticStack& stack){
        return Stack::Size(stack);
    }

    int Count(StaticStack& stack){
        return Stack::Count(stack);
    }

    bool IsEmpty(StaticStack& stack){
        return Stack::IsEmpty(stack);
    }

    bool Clear(StaticStack& stack){
        return Stack::Clear(stack);
    }
}
