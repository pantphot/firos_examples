// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file PointHeader_.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "PointHeader_.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

nettools_msgs::msg::dds_::PointHeader_::PointHeader_()
{
    m_stamp_ = 0.0;


    m_x_ = 0.0;

    m_y_ = 0.0;

    m_z_ = 0.0;


}

nettools_msgs::msg::dds_::PointHeader_::~PointHeader_()
{
}

nettools_msgs::msg::dds_::PointHeader_::PointHeader_(const PointHeader_ &x)
{
    m_stamp_ = x.m_stamp_;
    m_frame_id_ = x.m_frame_id_;
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
}

nettools_msgs::msg::dds_::PointHeader_::PointHeader_(PointHeader_ &&x)
{
    m_stamp_ = x.m_stamp_;
    m_frame_id_ = std::move(x.m_frame_id_);
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
}

nettools_msgs::msg::dds_::PointHeader_& nettools_msgs::msg::dds_::PointHeader_::operator=(const PointHeader_ &x)
{
    m_stamp_ = x.m_stamp_;
    m_frame_id_ = x.m_frame_id_;
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;

    return *this;
}

nettools_msgs::msg::dds_::PointHeader_& nettools_msgs::msg::dds_::PointHeader_::operator=(PointHeader_ &&x)
{
    m_stamp_ = x.m_stamp_;
    m_frame_id_ = std::move(x.m_frame_id_);
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;

    return *this;
}

size_t nettools_msgs::msg::dds_::PointHeader_::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + 255 + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t nettools_msgs::msg::dds_::PointHeader_::getCdrSerializedSize(const nettools_msgs::msg::dds_::PointHeader_& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4) + data.frame_id_().size() + 1;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void nettools_msgs::msg::dds_::PointHeader_::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_stamp_;
    scdr << m_frame_id_;
    scdr << m_x_;
    scdr << m_y_;
    scdr << m_z_;
}

void nettools_msgs::msg::dds_::PointHeader_::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_stamp_;
    dcdr >> m_frame_id_;
    dcdr >> m_x_;
    dcdr >> m_y_;
    dcdr >> m_z_;
}

size_t nettools_msgs::msg::dds_::PointHeader_::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            






    return current_align;
}

bool nettools_msgs::msg::dds_::PointHeader_::isKeyDefined()
{
    return false;
}

void nettools_msgs::msg::dds_::PointHeader_::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	(void) scdr;
	 
	 
	 
	 
	 
}


