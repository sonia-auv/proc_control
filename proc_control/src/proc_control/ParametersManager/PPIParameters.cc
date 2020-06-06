//
// Created by olavoie on 10/27/18.
//

#include <fstream>
#include "PPIParameters.h"
#include "proc_control/property.h"

namespace proc_control
{
    PPIParameters::PPIParameters(const std::string & paramName, std::shared_ptr<control::TransferFunctionCoefficient> & transferFunctionCoefficient):
        ParamManagerIF(paramName),
        transferFunctionCoefficient_(transferFunctionCoefficient),
        filePath_{ kConfigPath + "/ControllersParameters/" + "PPIParameters" + kConfigExt }
    {
        transferFunctionCoefficient_->denominatorFactor = Eigen::ArrayXXd::Zero(control::CARTESIAN_SPACE, 1);
        transferFunctionCoefficient_->numeratorFactor   = Eigen::ArrayXXd::Zero(control::CARTESIAN_SPACE, 1 + 1);
        Init();
    }

    void PPIParameters::OnDynamicReconfigureChange(const PPIControllerConfig &config)
    {
        Eigen::ArrayXXd denominatorFactor = Eigen::ArrayXXd::Zero(control::CARTESIAN_SPACE, 1);
        Eigen::ArrayXXd numeratorFactor   = Eigen::ArrayXXd::Zero(control::CARTESIAN_SPACE, 1 + 1);

        denominatorFactor.row(0) << -1;
        numeratorFactor.row(0)   << config.XQ0, config.XQ1;

        denominatorFactor.row(1) << -1;
        numeratorFactor.row(1)   << config.YQ0, config.YQ1;

        denominatorFactor.row(2) << -1;
        numeratorFactor.row(2)   << config.ZQ0, config.ZQ1;

        denominatorFactor.row(3) << -1;
        numeratorFactor.row(3)   << config.RQ0, config.RQ1;

        denominatorFactor.row(4) << -1;
        numeratorFactor.row(4)   << config.PQ0, config.PQ1;

        denominatorFactor.row(5) << -1;
        numeratorFactor.row(5)   << config.EQ0, config.EQ1;

        transferFunctionCoefficient_->denominatorFactor = denominatorFactor;
        transferFunctionCoefficient_->numeratorFactor   = numeratorFactor;
    }

    void PPIParameters::WriteConfigFile(const PPIControllerConfig &config)
    {
        YAML::Emitter out;

        out << YAML::BeginMap;
        out << YAML::Key << "XQ0";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(0)[0];
        out << YAML::Key << "XQ1";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(0)[1];

        out << YAML::Key << "YQ0";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(1)[0];
        out << YAML::Key << "YQ1";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(1)[1];

        out << YAML::Key << "ZQ0";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(2)[0];
        out << YAML::Key << "ZQ1";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(2)[1];

        out << YAML::Key << "RQ0";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(3)[0];
        out << YAML::Key << "RQ1";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(3)[1];

        out << YAML::Key << "PQ0";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(4)[0];
        out << YAML::Key << "PQ1";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(4)[1];

        out << YAML::Key << "EQ0";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(5)[0];
        out << YAML::Key << "EQ1";
        out << YAML::Value << transferFunctionCoefficient_->numeratorFactor.row(5)[1];

        std::ofstream fout(filePath_);
        fout << out.c_str();
    }

    void PPIParameters::ReadConfigFile(PPIControllerConfig &config)
    {
        YAML::Node node = YAML::LoadFile(filePath_);

        if (node["XQ0"])
            transferFunctionCoefficient_->numeratorFactor.row(0)[0] = node["XQ0"].as<double>();
        if (node["XQ1"])
            transferFunctionCoefficient_->numeratorFactor.row(0)[1] = node["XQ1"].as<double>();

        if (node["YQ0"])
            transferFunctionCoefficient_->numeratorFactor.row(1)[0] = node["YQ0"].as<double>();
        if (node["YQ1"])
            transferFunctionCoefficient_->numeratorFactor.row(1)[1] = node["YQ1"].as<double>();

        if (node["ZQ0"])
            transferFunctionCoefficient_->numeratorFactor.row(2)[0] = node["ZQ0"].as<double>();
        if (node["ZQ1"])
            transferFunctionCoefficient_->numeratorFactor.row(2)[1] = node["ZQ1"].as<double>();

        if (node["RQ0"])
            transferFunctionCoefficient_->numeratorFactor.row(3)[0] = node["RQ0"].as<double>();
        if (node["RQ1"])
            transferFunctionCoefficient_->numeratorFactor.row(3)[1] = node["RQ1"].as<double>();

        if (node["PQ0"])
            transferFunctionCoefficient_->numeratorFactor.row(4)[0] = node["PQ0"].as<double>();
        if (node["PQ1"])
            transferFunctionCoefficient_->numeratorFactor.row(4)[1] = node["PQ1"].as<double>();

        if (node["EQ0"])
            transferFunctionCoefficient_->numeratorFactor.row(5)[0] = node["EQ0"].as<double>();
        if (node["EQ1"])
            transferFunctionCoefficient_->numeratorFactor.row(5)[1] = node["EQ1"].as<double>();

        config.XQ0 = transferFunctionCoefficient_->numeratorFactor.row(0)[0];
        config.XQ1 = transferFunctionCoefficient_->numeratorFactor.row(0)[1];

        config.YQ0 = transferFunctionCoefficient_->numeratorFactor.row(1)[0];
        config.YQ1 = transferFunctionCoefficient_->numeratorFactor.row(1)[1];

        config.ZQ0 = transferFunctionCoefficient_->numeratorFactor.row(2)[0];
        config.ZQ1 = transferFunctionCoefficient_->numeratorFactor.row(2)[1];

        config.RQ0 = transferFunctionCoefficient_->numeratorFactor.row(3)[0];
        config.RQ1 = transferFunctionCoefficient_->numeratorFactor.row(3)[1];

        config.PQ0 = transferFunctionCoefficient_->numeratorFactor.row(4)[0];
        config.PQ1 = transferFunctionCoefficient_->numeratorFactor.row(4)[1];

        config.EQ0 = transferFunctionCoefficient_->numeratorFactor.row(5)[0];
        config.EQ1 = transferFunctionCoefficient_->numeratorFactor.row(5)[1];
    }
}
