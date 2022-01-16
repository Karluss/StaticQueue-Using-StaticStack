//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#include "StaticStack.h"

using namespace std;

namespace Stack
{
	StaticStack Create()
	{
		StaticStack stack = { 0, { 0 } };
		return stack;
	}

	bool Push(StaticStack& stack, char elem)
	{

		if (stack.count == STATIC_STACK_CAPACITY)
		{
			return false;
		}

		stack.values[stack.count] = elem;
		++stack.count;

		return true;
	}
	char Pop(StaticStack& stack)
	{
		if (IsEmpty(stack))
		{
			return '\0';
		}

		char temp = stack.values[stack.count - 1];
		stack.values[stack.count - 1] = '\0';
		--stack.count;

		return temp;
	}

	char Top(const StaticStack& stack)
	{
		if (IsEmpty(stack))
		{
			return '\0';
		}

		return stack.values[stack.count - 1];
	}

	int Size(const StaticStack& stack)
	{
		return sizeof(stack.values) / sizeof(stack.values[0]);
	}

	int Count(const StaticStack& stack)
	{
		return stack.count;
	}

	bool IsEmpty(const StaticStack& stack)
	{
		return stack.count == 0;
	}

	bool Clear(StaticStack& stack)
	{
		while (!IsEmpty(stack))
		{
			Pop(stack);
		}

		return IsEmpty(stack);
	}

    StaticStack changeStacks(StaticStack& stack, StaticStack& stack2){
        int contagem_nova = Count(stack) + Count(stack2);
        for (int i=0;i<contagem_nova;i++){
            Push(stack2, Top(stack));
            Pop(stack);
        }
        return stack2;
    }

    StaticStack stacksBackToNormal(StaticStack& stack, StaticStack& stack2){
        int contagem_nova = Count(stack) + Count(stack2);
        for (int i=0;i<contagem_nova;i++){
            Push(stack, Top(stack2));
            Pop(stack2);
        }
        return stack;
    }
}
