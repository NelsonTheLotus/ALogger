#include "LoggerClass.hpp"

#include "Authority.hpp"

namespace alog
{

    template<class logClear>
    LoggerClass<logClear>::LoggerClass(std::shared_ptr<std::ostream> classStream):
        classStream(classStream)
    {
        return;
    }

    template<class logClear>
    LoggerClass<logClear>::~LoggerClass()
    {
        return;
    }

    template<class logClear>
    void LoggerClass<logClear>::setSharedStream(std::shared_ptr<std::ostream> newStream)
    {
        clearStream = newStream;
        return;
    }

    template<class logClear>
    void LoggerClass<logClear>::logMessage(std::string message, Properties entProps, Settings entSets)
    {
        //config to frame
    }

    template<>
    std::string LoggerClass<DefEnt>::getClearName()
    {
        return std::string("entity");
    }

    template<>
    std::string LoggerClass<System>::getClearName()
    {
        return std::string("system");
    }
    
    template<>
        std::string LoggerClass<Application>::getClearName()
    {
        return std::string("application");
    }

    template<>
    std::string LoggerClass<Debug>::getClearName()
    {
        return std::string("debug");
    }

    template<>
    std::string LoggerClass<User>::getClearName()
    {
        return std::string("user");
    }
}