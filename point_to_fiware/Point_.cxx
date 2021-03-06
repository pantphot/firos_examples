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
 * @file Point_.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace { char dummy; }
#endif

#include "Point_.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>

geometry_msgs::msg::dds_::Point_::Point_()
{
    m_x_ = 0.0;

    m_y_ = 0.0;

    m_z_ = 0.0;


}

geometry_msgs::msg::dds_::Point_::~Point_()
{
}

geometry_msgs::msg::dds_::Point_::Point_(const Point_ &x)
{
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
}

geometry_msgs::msg::dds_::Point_::Point_(Point_ &&x)
{
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;
}

geometry_msgs::msg::dds_::Point_& geometry_msgs::msg::dds_::Point_::operator=(const Point_ &x)
{
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;

    return *this;
}

geometry_msgs::msg::dds_::Point_& geometry_msgs::msg::dds_::Point_::operator=(Point_ &&x)
{
    m_x_ = x.m_x_;
    m_y_ = x.m_y_;
    m_z_ = x.m_z_;

    return *this;
}

size_t geometry_msgs::msg::dds_::Point_::getMaxCdrSerializedSize(size_t current_alignment)
{
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

size_t geometry_msgs::msg::dds_::Point_::getCdrSerializedSize(const geometry_msgs::msg::dds_::Point_& data, size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;

    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);



    return current_alignment - initial_alignment;
}

void geometry_msgs::msg::dds_::Point_::serialize(eprosima::fastcdr::Cdr &scdr) const
{
    scdr << m_x_;
    scdr << m_y_;
    scdr << m_z_;
}

void geometry_msgs::msg::dds_::Point_::deserialize(eprosima::fastcdr::Cdr &dcdr)
{
    dcdr >> m_x_;
    dcdr >> m_y_;
    dcdr >> m_z_;
}

size_t geometry_msgs::msg::dds_::Point_::getKeyMaxCdrSerializedSize(size_t current_alignment)
{
	size_t current_align = current_alignment;
            




    return current_align;
}

bool geometry_msgs::msg::dds_::Point_::isKeyDefined()
{
    return false;
}

void geometry_msgs::msg::dds_::Point_::serializeKey(eprosima::fastcdr::Cdr &scdr) const
{
	(void) scdr;
	 
	 
	 
}


