#pragma once

#include <automaton/Machine.hpp>

namespace automaton
{
	/**
	* Available states.
	* Each state owns its transition.
	*/
	namespace state
	{
		std::function<void(Machine&)> walk();
		std::function<void(Machine&)> run();
		std::function<void(Machine&)> jump();
		std::function<void(Machine&)> crouch();
		std::function<void(Machine&)> fire();
	}
}