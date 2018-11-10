//
// Created by olavoie on 10/27/18.
//

#ifndef PROC_CONTROL_PARAMMANAGERIF_H
#define PROC_CONTROL_PARAMMANAGERIF_H

#include <string>

#include "proc_control/config/config_manager.h"

namespace proc_control
{
    template <typename T>
    class ParamManagerIF : public ConfigManager<T>
    {
    public:
        ParamManagerIF(const std::string & paramName) : ConfigManager<T>(paramName)  {}
        virtual ~ParamManagerIF() = default;

        virtual void OnDynamicReconfigureChange(const T &config ) = 0;

        virtual void WriteConfigFile( const T &config ) = 0;

        virtual void ReadConfigFile( T &config ) = 0;
    };
}

#endif //PROC_CONTROL_PARAMMANAGERIF_H
