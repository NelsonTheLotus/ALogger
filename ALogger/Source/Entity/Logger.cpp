#include "Logger.hpp"

#include "Properties.hpp"
#include "Settings.hpp"
#include "../Authority/Authority.hpp"

#include <iostream>
#include <string>

namespace alog
{
	Logger::Logger
	(
		std::string name,
		std::shared_ptr<std::ostream> outputStream,
		clearance entityClear,
		bool useClassStream,
		bool showName,
		bool showCred
	): 
		entityProps(Properties(outputStream, name, entityClear)),
		entitySets(Settings(useClassStream, showName, showCred))
	{
		classLogger = Authority::getClassEntity(entityClear);
		return;
	}

	Logger::~Logger()
	{
		return;
	}

	void Logger::log(std::string message)
	{
		//setLevel
		//Change settings if necessary
		classLogger->logMessage(message, &this->entityProps, &this->entitySets);
	}

	void Logger::signIn(clearance entityClear)
	{
		this->classLogger = Authority::getClassEntity(entityClear);
		return;
	}

}