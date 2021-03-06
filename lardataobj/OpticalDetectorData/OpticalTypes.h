// OpticalDetectorData/OpticalTypes.h
// William Seligman <seligman@nevis.columbia.edu>

// Define some common types using by the OpticalDetector classes.

#ifndef OpticalDetectorData_OpticalTypes_h
#define OpticalDetectorData_OpticalTypes_h

#include <stdint.h>
#include <vector>

namespace optdata {

  // Assuming that we're using 12-bit ADCs, define a type that's
  // guaranteed to hold that full range of bits.
  typedef uint16_t ADC_Count_t;

  // Other types, in case something changes later on:
  typedef unsigned int Channel_t;
  typedef unsigned int TimeSlice_t;
  typedef unsigned int Frame_t;

  // Use an enum for categories of ADC channels, triggers, etc.
  typedef enum _optical_category_t {
    kUndefined,
    kHighGain,
    kLowGain,
    kLogicPulse,
    kFEMCosmicHighGain,
    kFEMCosmicLowGain,
    kFEMCosmicLogicPulse,
    kFEMBeamHighGain,
    kFEMBeamLowGain,
    kFEMBeamLogicPulse,
    kBeamPMTTrigger,
    kCosmicPMTTrigger,
  } Optical_Category_t;

} // namespace optdata

#endif // OpticalDetectorData_OpticalTypes_h
