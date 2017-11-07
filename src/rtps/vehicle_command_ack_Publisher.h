/****************************************************************************
 *
 * Copyright 2017 Proyectos y Sistemas de Mantenimiento SL (eProsima).
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/*! 
 * @file vehicle_command_ack_Publisher.h
 * This header file contains the declaration of the publisher functions.
 *
 * This file was generated by the tool fastcdrgen.
 */


#ifndef _vehicle_command_ack__PUBLISHER_H_
#define _vehicle_command_ack__PUBLISHER_H_

#include <fastrtps/fastrtps_fwd.h>
#include <fastrtps/publisher/PublisherListener.h>

#include "vehicle_command_ack_PubSubTypes.h"

using namespace eprosima::fastrtps;

class vehicle_command_ack_Publisher 
{
public:
    vehicle_command_ack_Publisher();
    virtual ~vehicle_command_ack_Publisher();
    bool init();
    void run();
    void publish(vehicle_command_ack_* st);
private:
    Participant *mp_participant;
    Publisher *mp_publisher;
    
    class PubListener : public PublisherListener
    {
    public:
        PubListener() : n_matched(0){};
        ~PubListener(){};
        void onPublicationMatched(Publisher* pub,MatchingInfo& info);
        int n_matched;
    } m_listener;
    vehicle_command_ack_PubSubType myType;
};

#endif // _vehicle_command_ack__PUBLISHER_H_