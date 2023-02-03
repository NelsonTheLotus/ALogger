#pragma once

#include <fstream>
#include <memory>

#include "Clearance.hpp"

#include "../Entity/Properties.hpp"
#include "../Entity/Settings.hpp"


namespace alog
{

	class Authority //abstract
	{
	public:
		//clearStream - static
		//clearFrame - static

	public:

		static std::unique_ptr<Authority> getClassEntity(clearance entClear);

		virtual void setSharedStream(std::shared_ptr<std::ostream> newStream) = 0;
		virtual void logMessage(std::string message, Properties* entProps, Settings* entSets) = 0;

	};

}