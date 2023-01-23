#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <memory>

#include "Properties.hpp"
#include "Settings.hpp"
//#include "Config.hpp"
#include "../Authority/Authority.hpp"
#include "../Frame/Level.hpp"

namespace alog
{

	template<class logEnt>
	class Logger
	{
	private:
		Properties entityProps;
		Settings entitySets;
		std::unique_ptr<Authority<logEnt>> classLogger;

	public:
		Logger
		(
			std::string name							= "default", 
			std::shared_ptr<std::ostream> outputStream	= std::shared_ptr<std::ostream>(&std::cout), 
			clearance entityClear						= clearance::entity,
			bool useClassStream							= false, 
			bool showName								= true,
			bool showCred								= true
		);
		
		~Logger();

		void log(std::string message);

		//void info(std::string message);
		//void warn(std::string message);
		//void critical(std::string message);
		//void fatal(std::string message);
	};

}