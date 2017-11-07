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
 * @file sensor_combined_PubSubMain.cpp
 * This file acts as a main entry point to the application.
 *
 * This file was generated by the tool fastcdrgen.
 */


#include "sensor_combined_Subscriber.h"

#include <fastrtps/Domain.h>

using namespace std;
using namespace eprosima;
using namespace eprosima::fastrtps;

int main(int argc, char** argv)
{
    sensor_combined_Subscriber mysub;
    if (mysub.init()) {
        mysub.run();
    }

    return 0;
}