#pragma once

#include <iostream>
#include <string>

namespace alog
{

	enum clearance : int
	{
		entity = 0,
		system = 1,
		application = 2,
		debug = 3,
		user = 4
	};

	class ClassEnt
	{
	private:
		std::shared_ptr<std::ostream> classStream;
		//Frame*
		std::string className;
	public:
	};

	ClassEnt DefEnt (& std::cout, "defualt" ); //defualt entity: no ouput
	class System {};
	class Application {};
	class Debug {};
	class User {};

}