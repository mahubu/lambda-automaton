#include <automaton/States.hpp>
#include <functional>
#include <iostream>

namespace automaton
{
	namespace state
	{
		std::function<void(Machine&)> walk()
		{
			return [](Machine& machine) { std::cout << "walk->run" << std::endl; machine.push(run()); };
		}

		std::function<void(Machine&)> run()
		{
			return [](Machine& machine) { std::cout << "run->jump" << std::endl; machine.push(jump()); };
		}

		std::function<void(Machine&)> jump()
		{
			return [](Machine& machine) { std::cout << "jump->crouch" << std::endl; machine.push(crouch()); };
		}

		std::function<void(Machine&)> crouch()
		{
			return [](Machine& machine) { std::cout << "crouch->walk" << std::endl; machine.push(walk()); };
		}

		std::function<void(Machine&)> fire()
		{
			return [](Machine& machine) { std::cout << "fire!" << std::endl; };
		}
	}
}