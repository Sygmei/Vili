//Author : Sygmei
//Key : 976938ef7d46c286a2027d73f3a99467bcfa8ff0c1e10bd0016139744ef5404f4eb4d069709f9831f6de74a094944bf0f1c5bf89109e9855290336a66420376f

#pragma once

#include "vili/ViliParser.hpp"
#include "vili/LinkNode.hpp"

#include "ErrorHandler.hpp"
#include "Functions.hpp"

/**
 * \brief A nice and readable data format language !
 */
namespace vili
{
    /**
     * \brief Loads all Aube Errors located in the given path
     * \param errorFile File where to load Aube Errors
     */
    void LoadErrors(const std::string& errorFile);
}
