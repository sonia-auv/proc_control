//
// Created by olavoie on 12/11/18.
//

#include <fstream>
#include <control_library/ControlType.h>
#include "BboxParameters.h"
#include "proc_control/property.h"

namespace proc_control
{
    BboxParameters::BboxParameters(std::string name, std::shared_ptr<std::vector<double>> &bboxParameters):
        ParamManagerIF(name),
        bboxParameters_{bboxParameters}
    {
        file_path_ = kConfigPath + "BoundingBox" + kConfigExt;
        Init();
    }

    void BboxParameters::OnDynamicReconfigureChange(const BboxConfig &config )
    {
        (*bboxParameters_)[0] = config.x;
        (*bboxParameters_)[1] = config.y;
        (*bboxParameters_)[2] = config.z;
        (*bboxParameters_)[3] = config.roll;
        (*bboxParameters_)[4] = config.pitch;
        (*bboxParameters_)[5] = config.yaw;
    }

//-----------------------------------------------------------------------------
//

    void BboxParameters::WriteConfigFile(const BboxConfig &config )
    {

        YAML::Emitter out;

        out << YAML::BeginMap;
        out << YAML::Key << "x";
        out << YAML::Value << (*bboxParameters_)[0];
        out << YAML::Key << "y";
        out << YAML::Value << (*bboxParameters_)[1];
        out << YAML::Key << "z";
        out << YAML::Value << (*bboxParameters_)[2];
        out << YAML::Key << "roll";
        out << YAML::Value << (*bboxParameters_)[3];
        out << YAML::Key << "pitch";
        out << YAML::Value << (*bboxParameters_)[4];
        out << YAML::Key << "yaw";
        out << YAML::Value << (*bboxParameters_)[5];

        std::ofstream fout(file_path_);
        fout << out.c_str();

    }

//-----------------------------------------------------------------------------
//

    void BboxParameters::ReadConfigFile(BboxConfig &config )
    {
        YAML::Node node = YAML::LoadFile(file_path_);

        if (node["x"])
            (*bboxParameters_)[0] = node["x"].as<double>();

        if (node["y"])
            (*bboxParameters_)[1] = node["y"].as<double>();

        if (node["z"])
            (*bboxParameters_)[2] = node["z"].as<double>();

        if (node["roll"])
            (*bboxParameters_)[3] = node["roll"].as<double>();

        if (node["pitch"])
            (*bboxParameters_)[4] = node["pitch"].as<double>();

        if (node["yaw"])
            (*bboxParameters_)[5] = node["yaw"].as<double>();

        config.x     = (*bboxParameters_)[0];
        config.y     = (*bboxParameters_)[1];
        config.z     = (*bboxParameters_)[2];
        config.roll  = (*bboxParameters_)[3];
        config.pitch = (*bboxParameters_)[4];
        config.yaw   = (*bboxParameters_)[5];
    }
}
