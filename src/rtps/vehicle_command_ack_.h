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
 * @file vehicle_command_ack_.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _vehicle_command_ack__H_
#define _vehicle_command_ack__H_

// TODO Poner en el contexto.

#include <stdint.h>
#include <array>
#include <string>
#include <vector>

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
#if defined(vehicle_command_ack__SOURCE)
#define vehicle_command_ack__DllAPI __declspec( dllexport )
#else
#define vehicle_command_ack__DllAPI __declspec( dllimport )
#endif // vehicle_command_ack__SOURCE
#else
#define vehicle_command_ack__DllAPI
#endif
#else
#define vehicle_command_ack__DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}

/*!
 * @brief This class represents the structure vehicle_command_ack_ defined by the user in the IDL file.
 * @ingroup VEHICLE_COMMAND_ACK_
 */
class vehicle_command_ack_
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport vehicle_command_ack_();
    
    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~vehicle_command_ack_();
    
    /*!
     * @brief Copy constructor.
     * @param x Reference to the object vehicle_command_ack_ that will be copied.
     */
    eProsima_user_DllExport vehicle_command_ack_(const vehicle_command_ack_ &x);
    
    /*!
     * @brief Move constructor.
     * @param x Reference to the object vehicle_command_ack_ that will be copied.
     */
    eProsima_user_DllExport vehicle_command_ack_(vehicle_command_ack_ &&x);
    
    /*!
     * @brief Copy assignment.
     * @param x Reference to the object vehicle_command_ack_ that will be copied.
     */
    eProsima_user_DllExport vehicle_command_ack_& operator=(const vehicle_command_ack_ &x);
    
    /*!
     * @brief Move assignment.
     * @param x Reference to the object vehicle_command_ack_ that will be copied.
     */
    eProsima_user_DllExport vehicle_command_ack_& operator=(vehicle_command_ack_ &&x);
    
    /*!
     * @brief This function sets a value in member timestamp
     * @param _timestamp New value for member timestamp
     */
    inline eProsima_user_DllExport void timestamp(uint64_t _timestamp)
    {
        m_timestamp = _timestamp;
    }

    /*!
     * @brief This function returns the value of member timestamp
     * @return Value of member timestamp
     */
    inline eProsima_user_DllExport uint64_t timestamp() const
    {
        return m_timestamp;
    }

    /*!
     * @brief This function returns a reference to member timestamp
     * @return Reference to member timestamp
     */
    inline eProsima_user_DllExport uint64_t& timestamp()
    {
        return m_timestamp;
    }
    /*!
     * @brief This function sets a value in member result_param2
     * @param _result_param2 New value for member result_param2
     */
    inline eProsima_user_DllExport void result_param2(int32_t _result_param2)
    {
        m_result_param2 = _result_param2;
    }

    /*!
     * @brief This function returns the value of member result_param2
     * @return Value of member result_param2
     */
    inline eProsima_user_DllExport int32_t result_param2() const
    {
        return m_result_param2;
    }

    /*!
     * @brief This function returns a reference to member result_param2
     * @return Reference to member result_param2
     */
    inline eProsima_user_DllExport int32_t& result_param2()
    {
        return m_result_param2;
    }
    /*!
     * @brief This function sets a value in member command
     * @param _command New value for member command
     */
    inline eProsima_user_DllExport void command(uint16_t _command)
    {
        m_command = _command;
    }

    /*!
     * @brief This function returns the value of member command
     * @return Value of member command
     */
    inline eProsima_user_DllExport uint16_t command() const
    {
        return m_command;
    }

    /*!
     * @brief This function returns a reference to member command
     * @return Reference to member command
     */
    inline eProsima_user_DllExport uint16_t& command()
    {
        return m_command;
    }
    /*!
     * @brief This function sets a value in member result
     * @param _result New value for member result
     */
    inline eProsima_user_DllExport void result(uint8_t _result)
    {
        m_result = _result;
    }

    /*!
     * @brief This function returns the value of member result
     * @return Value of member result
     */
    inline eProsima_user_DllExport uint8_t result() const
    {
        return m_result;
    }

    /*!
     * @brief This function returns a reference to member result
     * @return Reference to member result
     */
    inline eProsima_user_DllExport uint8_t& result()
    {
        return m_result;
    }
    /*!
     * @brief This function sets a value in member from_external
     * @param _from_external New value for member from_external
     */
    inline eProsima_user_DllExport void from_external(bool _from_external)
    {
        m_from_external = _from_external;
    }

    /*!
     * @brief This function returns the value of member from_external
     * @return Value of member from_external
     */
    inline eProsima_user_DllExport bool from_external() const
    {
        return m_from_external;
    }

    /*!
     * @brief This function returns a reference to member from_external
     * @return Reference to member from_external
     */
    inline eProsima_user_DllExport bool& from_external()
    {
        return m_from_external;
    }
    /*!
     * @brief This function sets a value in member result_param1
     * @param _result_param1 New value for member result_param1
     */
    inline eProsima_user_DllExport void result_param1(uint8_t _result_param1)
    {
        m_result_param1 = _result_param1;
    }

    /*!
     * @brief This function returns the value of member result_param1
     * @return Value of member result_param1
     */
    inline eProsima_user_DllExport uint8_t result_param1() const
    {
        return m_result_param1;
    }

    /*!
     * @brief This function returns a reference to member result_param1
     * @return Reference to member result_param1
     */
    inline eProsima_user_DllExport uint8_t& result_param1()
    {
        return m_result_param1;
    }
    /*!
     * @brief This function sets a value in member target_system
     * @param _target_system New value for member target_system
     */
    inline eProsima_user_DllExport void target_system(uint8_t _target_system)
    {
        m_target_system = _target_system;
    }

    /*!
     * @brief This function returns the value of member target_system
     * @return Value of member target_system
     */
    inline eProsima_user_DllExport uint8_t target_system() const
    {
        return m_target_system;
    }

    /*!
     * @brief This function returns a reference to member target_system
     * @return Reference to member target_system
     */
    inline eProsima_user_DllExport uint8_t& target_system()
    {
        return m_target_system;
    }
    /*!
     * @brief This function sets a value in member target_component
     * @param _target_component New value for member target_component
     */
    inline eProsima_user_DllExport void target_component(uint8_t _target_component)
    {
        m_target_component = _target_component;
    }

    /*!
     * @brief This function returns the value of member target_component
     * @return Value of member target_component
     */
    inline eProsima_user_DllExport uint8_t target_component() const
    {
        return m_target_component;
    }

    /*!
     * @brief This function returns a reference to member target_component
     * @return Reference to member target_component
     */
    inline eProsima_user_DllExport uint8_t& target_component()
    {
        return m_target_component;
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
    eProsima_user_DllExport static size_t getCdrSerializedSize(const vehicle_command_ack_& data, size_t current_alignment = 0);


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
    uint64_t m_timestamp;
    int32_t m_result_param2;
    uint16_t m_command;
    uint8_t m_result;
    bool m_from_external;
    uint8_t m_result_param1;
    uint8_t m_target_system;
    uint8_t m_target_component;
};

#endif // _vehicle_command_ack__H_