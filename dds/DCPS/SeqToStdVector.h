/*
Issue: Provide conversion template method for sequence of basic types to vector #3001
Conversion Template to convert sequence to a vector
*/

#ifndef OPENDDS_DCPS_Seq_to_Vec
#define OPENDDS_DCPS_Seq_to_Vec

#include <dds/DdsDcpsCoreC.h>

namespace OpenDDS {
namespace DCPS {

template <typename T> class to_std_vector{
    std::vector<T> return_vector;

    to_std_vector(DDS:sequence<T> input_sequence){
        for(uint32_t x = 0; x < input_sequencee.size(); x++){
            return_vector.push_back(input_sequence.at(x));
        }
        return return_vector;
    }

}; // namespace to_std_vector
} // namespace DCPS
} // namespace OpenDDS

#endif /* OPENDDS_DCPS_Seq_to_Vec */
