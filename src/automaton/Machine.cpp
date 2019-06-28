#include <automaton/Machine.hpp>
#include <automaton/States.hpp>

#include <iostream>

namespace automaton
{
	void Machine::update()
	{
		if (states_.empty())
		{
			return;
		}

		auto state = pop();
		if (state != nullptr)
		{
			state(*this);
		}
	}

	void Machine::push(const std::function<void(Machine&)>& state)
	{
		states_.push(state);
	}

	std::function<void(Machine&)> Machine::pop()
	{
		auto state = states_.top();
		states_.pop();
		return state;
	}
}