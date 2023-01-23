#pragma once

#include <fstream>
#include <memory>

#include "../Entity/Properties.hpp"
#include "../Entity/Settings.hpp"


namespace alog
{

	enum clearance : int
	{
		entity,
		system,
		application,
		debug,
		user
	};

	class DefEnt {}; //defualt entity: no ouput
	class System {};
	class Application {};
	class Debug {};
	class User {};

	class Authority //abstract
	{
	public:
		//clearStream - static
		//clearFrame - static

	public:

		static std::unique_ptr<Authority> getClearEntity(clearance entClear);

		virtual void setSharedStream(std::shared_ptr<std::ostream> newStream) = 0;
		virtual void logMessage(std::string message, Properties entProps, Settings entSets) = 0;

	};

}