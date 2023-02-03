#include "Authority.hpp"

#include <iostream>
#include <memory>

#include "Clearance.hpp"
#include "LoggerClass.hpp"

namespace alog
{

    std::unique_ptr<Authority> Authority::getClassEntity(clearance entClear)
    {
        switch (entClear)
        {
        case clearance::system: return std::unique_ptr<Authority>(new LoggerClass<System>());
        case clearance::application: return std::unique_ptr<Authority>(new LoggerClass<Application>());
        case clearance::debug: return std::unique_ptr<Authority>(new LoggerClass<Debug>());
        case clearance::user: return std::unique_ptr<Authority>(new LoggerClass<User>());
        default: return std::unique_ptr<Authority>(new LoggerClass<DefEnt>());
        }
    }

}