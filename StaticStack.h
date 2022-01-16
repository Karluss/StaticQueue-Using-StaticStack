//Carlos Manoel Pedrosa de Oliveira - TIA: 32068549

#ifndef STATICSTACK_H_INCLUDED
#define STATICSTACK_H_INCLUDED

namespace Stack
{
	const int STATIC_STACK_CAPACITY = 100;

	struct StaticStack
	{
		int count;
		char values[STATIC_STACK_CAPACITY];
	};

	StaticStack Create();

	bool Push(StaticStack &stack, char elem);

	char Pop(StaticStack &stack);

	char Top(const StaticStack &stack);

	int Size(const StaticStack &stack);

	int Count(const StaticStack &stack);

	bool IsEmpty(const StaticStack &stack);

	bool Clear(StaticStack &stack);

	StaticStack changeStacks(StaticStack& stack, StaticStack& stack2);

	StaticStack stacksBackToNormal(StaticStack& stack, StaticStack& stack2);
}

#endif // STATICSTACK_H_INCLUDED
