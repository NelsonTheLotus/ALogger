#include "Properties.hpp"

namespace alog
{
	Properties::Properties
	(
		std::shared_ptr<std::ostream> stream,
		std::string name,
		clearance clear
	):
		entityStream(stream), entityName(name), entityClear(clear)
	{
		return;
	}

	Properties::~Properties()
	{
		return;
	}

	void Properties::setEntityStream(std::shared_ptr<std::ostream> newStream)
	{
		this->entityStream = newStream;
		return;
	}

	/*void Properties::setOutputStream()
	{
		this->setOutputStream(this->entityStream);
		return;
	}

	void Properties::setOutputStream(std::shared_ptr<std::ostream> outStream)
	{
		this->outputStream = outStream;
		return;
	}

	std::shared_ptr<std::ostream> Properties::getOutputStream()
	{
		return this->outputStream;
	}*/

	void Properties::setName(std::string newName)
	{
		this->entityName = newName;
		return;
	}

	std::string Properties::getName()
	{
		return this->entityName;
	}

	void Properties::setClear(clearance newCred)
	{
		this->entityClear = newCred;
		return;
	}
	clearance Properties::getClear()
	{
		return clearance(this->entityClear);
	}
}