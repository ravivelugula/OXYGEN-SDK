// Copyright DEWETRON GmbH 2019
#pragma once

#include "odkapi_timestamp_xml.h"
#include "odkuni_defines.h"

#include <cstdint>
#include <string>
#include <vector>

namespace odk
{
    class AddAcquisitionTaskTelegram
    {
    public:
        AddAcquisitionTaskTelegram();

        bool parse(const char* xml_string);

        ODK_NODISCARD std::string generate() const;

        std::uint64_t m_id;
        std::vector<std::uint64_t> m_input_channels;
        std::vector<std::uint64_t> m_output_channels;
    };

    class AcquisitionTaskProcessTelegram
    {
    public:
        bool parse(const char* xml_string);

        ODK_NODISCARD std::string generate() const;

        odk::Timestamp m_start;
        odk::Timestamp m_end;
    };

}

