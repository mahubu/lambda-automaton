#pragma once

#include <functional>
#include <stack>

namespace automaton
{
	/**
	* A pushdown automaton.
	*/
	class Machine
	{
	public:
		/**
		* Update the automaton, given its current states.
		*/
		void update();

		/**
		* Push a state into the automaton.
		*
		* @param state the pushed state.
		*/
		void push(const std::function<void(Machine&)>& state);

	private:
		std::function<void(Machine&)> pop();
		std::stack<std::function<void(Machine&)>> states_;

	};
}