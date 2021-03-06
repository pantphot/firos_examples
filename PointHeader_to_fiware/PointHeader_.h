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
 * @file PointHeader_.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _NETTOOLS_MSGS_MSG_DDS__POINTHEADER__H_
#define _NETTOOLS_MSGS_MSG_DDS__POINTHEADER__H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(PointHeader__SOURCE)
#define PointHeader__DllAPI __declspec( dllexport )
#else
#define PointHeader__DllAPI __declspec( dllimport )
#endif // PointHeader__SOURCE
#else
#define PointHeader__DllAPI
#endif
#else
#define PointHeader__DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

namespace nettools_msgs
{
    namespace msg
    {
        namespace dds_
        {
            /*!
             * @brief This class represents the structure PointHeader_ defined by the user in the IDL file.
             * @ingroup POINTHEADER_
             */
            class PointHeader_
            {
            public:

                /*!
                 * @brief Default constructor.
                 */
                eProsima_user_DllExport PointHeader_();

                /*!
                 * @brief Default destructor.
                 */
                eProsima_user_DllExport ~PointHeader_();

                /*!
                 * @brief Copy constructor.
                 * @param x Reference to the object nettools_msgs::msg::dds_::PointHeader_ that will be copied.
                 */
                eProsima_user_DllExport PointHeader_(const PointHeader_ &x);

                /*!
                 * @brief Move constructor.
                 * @param x Reference to the object nettools_msgs::msg::dds_::PointHeader_ that will be copied.
                 */
                eProsima_user_DllExport PointHeader_(PointHeader_ &&x);

                /*!
                 * @brief Copy assignment.
                 * @param x Reference to the object nettools_msgs::msg::dds_::PointHeader_ that will be copied.
                 */
                eProsima_user_DllExport PointHeader_& operator=(const PointHeader_ &x);

                /*!
                 * @brief Move assignment.
                 * @param x Reference to the object nettools_msgs::msg::dds_::PointHeader_ that will be copied.
                 */
                eProsima_user_DllExport PointHeader_& operator=(PointHeader_ &&x);

                /*!
                 * @brief This function sets a value in member stamp_
                 * @param _stamp_ New value for member stamp_
                 */
                inline eProsima_user_DllExport void stamp_(double _stamp_)
                {
                    m_stamp_ = _stamp_;
                }

                /*!
                 * @brief This function returns the value of member stamp_
                 * @return Value of member stamp_
                 */
                inline eProsima_user_DllExport double stamp_() const
                {
                    return m_stamp_;
                }

                /*!
                 * @brief This function returns a reference to member stamp_
                 * @return Reference to member stamp_
                 */
                inline eProsima_user_DllExport double& stamp_()
                {
                    return m_stamp_;
                }
                /*!
                 * @brief This function copies the value in member frame_id_
                 * @param _frame_id_ New value to be copied in member frame_id_
                 */
                inline eProsima_user_DllExport void frame_id_(const std::string &_frame_id_)
                {
                    m_frame_id_ = _frame_id_;
                }

                /*!
                 * @brief This function moves the value in member frame_id_
                 * @param _frame_id_ New value to be moved in member frame_id_
                 */
                inline eProsima_user_DllExport void frame_id_(std::string &&_frame_id_)
                {
                    m_frame_id_ = std::move(_frame_id_);
                }

                /*!
                 * @brief This function returns a constant reference to member frame_id_
                 * @return Constant reference to member frame_id_
                 */
                inline eProsima_user_DllExport const std::string& frame_id_() const
                {
                    return m_frame_id_;
                }

                /*!
                 * @brief This function returns a reference to member frame_id_
                 * @return Reference to member frame_id_
                 */
                inline eProsima_user_DllExport std::string& frame_id_()
                {
                    return m_frame_id_;
                }
                /*!
                 * @brief This function sets a value in member x_
                 * @param _x_ New value for member x_
                 */
                inline eProsima_user_DllExport void x_(double _x_)
                {
                    m_x_ = _x_;
                }

                /*!
                 * @brief This function returns the value of member x_
                 * @return Value of member x_
                 */
                inline eProsima_user_DllExport double x_() const
                {
                    return m_x_;
                }

                /*!
                 * @brief This function returns a reference to member x_
                 * @return Reference to member x_
                 */
                inline eProsima_user_DllExport double& x_()
                {
                    return m_x_;
                }
                /*!
                 * @brief This function sets a value in member y_
                 * @param _y_ New value for member y_
                 */
                inline eProsima_user_DllExport void y_(double _y_)
                {
                    m_y_ = _y_;
                }

                /*!
                 * @brief This function returns the value of member y_
                 * @return Value of member y_
                 */
                inline eProsima_user_DllExport double y_() const
                {
                    return m_y_;
                }

                /*!
                 * @brief This function returns a reference to member y_
                 * @return Reference to member y_
                 */
                inline eProsima_user_DllExport double& y_()
                {
                    return m_y_;
                }
                /*!
                 * @brief This function sets a value in member z_
                 * @param _z_ New value for member z_
                 */
                inline eProsima_user_DllExport void z_(double _z_)
                {
                    m_z_ = _z_;
                }

                /*!
                 * @brief This function returns the value of member z_
                 * @return Value of member z_
                 */
                inline eProsima_user_DllExport double z_() const
                {
                    return m_z_;
                }

                /*!
                 * @brief This function returns a reference to member z_
                 * @return Reference to member z_
                 */
                inline eProsima_user_DllExport double& z_()
                {
                    return m_z_;
                }

                /*!
                 * @brief This function returns the maximum serialized size of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

                /*!
                 * @brief This function returns the serialized size of a data depending on the buffer alignment.
                 * @param data Data which is calculated its serialized size.
                 * @param current_alignment Buffer alignment.
                 * @return Serialized size.
                 */
                eProsima_user_DllExport static size_t getCdrSerializedSize(const nettools_msgs::msg::dds_::PointHeader_& data, size_t current_alignment = 0);


                /*!
                 * @brief This function serializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

                /*!
                 * @brief This function deserializes an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



                /*!
                 * @brief This function returns the maximum serialized size of the Key of an object
                 * depending on the buffer alignment.
                 * @param current_alignment Buffer alignment.
                 * @return Maximum serialized size.
                 */
                eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

                /*!
                 * @brief This function tells you if the Key has been defined for this type
                 */
                eProsima_user_DllExport static bool isKeyDefined();

                /*!
                 * @brief This function serializes the key members of an object using CDR serialization.
                 * @param cdr CDR serialization object.
                 */
                eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

            private:
                double m_stamp_;
                std::string m_frame_id_;
                double m_x_;
                double m_y_;
                double m_z_;
            };
        }
    }
}

#endif // _NETTOOLS_MSGS_MSG_DDS__POINTHEADER__H_