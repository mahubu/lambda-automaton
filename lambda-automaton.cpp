#include <automaton/Machine.hpp>
#include <automaton/States.hpp>

#include <iostream>

int main()
{
    std::cout << "Automaton." << std::endl;
	automaton::Machine machine;

	// Case 1: no state.
	machine.update();

	// Case 2: looping through states.
	machine.push(automaton::state::walk());
	machine.update();
	machine.update();
	machine.update();
	machine.update();

	// Case 3: pushing a new state in between.
	machine.push(automaton::state::fire());
	machine.update();
	machine.update();
}
