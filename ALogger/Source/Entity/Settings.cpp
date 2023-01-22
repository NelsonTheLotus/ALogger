#include "Settings.hpp"

namespace alog
{
	Settings::Settings(bool useClassStream, bool showName):
		useClassStream(useClassStream), showName(showName), refreshStream(false)
	{

	}

	Settings::~Settings()
	{

	}
}