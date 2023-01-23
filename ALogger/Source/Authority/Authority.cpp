#include "Authority.hpp"

#include <memory>

#include "LoggerClass.hpp"

namespace alog
{

    std::unique_ptr<Authority> Authority::getClearEntity(typename clearance entClear)
    {
        switch (entClear)
        {
        case clearance::entity: return std::unique_ptr<Authority>(new LoggerClass<DefEnt>(NULL));
        case clearance::system: return std::unique_ptr<Authority>(new LoggerClass<System>(NULL));
        case clearance::application: return std::unique_ptr<Authority>(new LoggerClass<Application>(NULL));
        case clearance::debug: return std::unique_ptr<Authority>(new LoggerClass<Debug>(NULL));
        case clearance::user: return std::unique_ptr<Authority>(new LoggerClass<User>(NULL));
        default: return std::unique_ptr<Authority>(new LoggerClass<DefEnt>(NULL));
        }
    }

}