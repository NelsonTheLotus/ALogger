#include "Properties.hpp"

namespace alog
{
	Properties::Properties(std::shared_ptr<std::ostream> stream, std::string name):
		entityStream(stream), outputStream(stream), entityName(name)
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

	void Properties::setOutputStream()
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
	}

	void Properties::setName(std::string newName)
	{
		this->entityName = newName;
		return;
	}

	std::string Properties::getName()
	{
		return this->entityName;
	}
}