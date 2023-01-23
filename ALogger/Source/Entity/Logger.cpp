#include "Logger.hpp"

#include "Properties.hpp"
#include "Settings.hpp"
//#include "Config.hpp"

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
		//lastMessage(Config("", outputStream, true, logLevel::nill, entityClass::entity))
	{
		return;
	}

	Logger::~Logger()
	{
		return;
	}

	void Logger::log(std::string message)
	{
		if (this->entitySets.refreshStream)
		{
			if (this->entitySets.useClassStream)
			{
				this->entityProps.setOutputStream(std::shared_ptr<std::ostream>(& std::cout));
			}
			else
			{
				this->entityProps.setOutputStream();
			}
		}

		std::ostream& outStream = *(this->entityProps.getOutputStream());

		if (this->entitySets.showName)
		{
			outStream << this->entityProps.getName()<< ": ";
		}

		outStream << message << std::endl;
	}

	/*void Logger::info(std::string message)
	{

	}*/

}