/****************************************************************************
 *                       AV4024                           
 *                                                                          
 * Title:    AV4024.h                                        
 * Purpose:  AV4024                                       
 *           instrument driver declarations.                                
 *                                                                          
 ****************************************************************************/

#ifndef __AV4024_HEADER
#define __AV4024_HEADER

#include <ivi.h>
#include <ivispecan.h>

#if defined(__cplusplus) || defined(__cplusplus__)
extern "C" {
#endif

/****************************************************************************
 *----------------- Instrument Driver Revision Information -----------------*
 ****************************************************************************/
    /*=CHANGE:===============================================================
       The major and minor version of the driver should be a number between
       0 and 255
     *============================================================END=CHANGE=*/
#define AV4024_MAJOR_VERSION                1     /* Instrument driver major version   */
#define AV4024_MINOR_VERSION                0     /* Instrument driver minor version   */
                                                                
    /*=CHANGE:===============================================================
       Enter the correct version of the class specification
     *============================================================END=CHANGE=*/
#define AV4024_CLASS_SPEC_MAJOR_VERSION     2     /* Class specification major version */
#define AV4024_CLASS_SPEC_MINOR_VERSION     0     /* Class specification minor version */


        /*=CHANGE:===============================================================
           Add supported instrument models.
           Add your company name.                                                 
           Add useful instrument driver description.                                                 
         *============================================================END=CHANGE=*/
#define AV4024_SUPPORTED_INSTRUMENT_MODELS  "MODEL1,MODEL2,MODEL3,MODEL4"
#define AV4024_DRIVER_VENDOR                "My Company & Co."
#define AV4024_DRIVER_DESCRIPTION           "Description"
                    



/**************************************************************************** 
 *------------------------------ Useful Macros -----------------------------* 
 ****************************************************************************/

        /*=CHANGE:===============================================================
           Add useful instrument macros here.                                                 
         *============================================================END=CHANGE=*/

/**************************************************************************** 
 *---------------------------- Attribute Defines ---------------------------* 
 ****************************************************************************/

    /*- IVI Inherent Instrument Attributes ---------------------------------*/    

        /* User Options */
#define AV4024_ATTR_RANGE_CHECK                   IVI_ATTR_RANGE_CHECK                    /* ViBoolean */
#define AV4024_ATTR_QUERY_INSTRUMENT_STATUS       IVI_ATTR_QUERY_INSTRUMENT_STATUS        /* ViBoolean */
#define AV4024_ATTR_CACHE                         IVI_ATTR_CACHE                          /* ViBoolean */
#define AV4024_ATTR_SIMULATE                      IVI_ATTR_SIMULATE                       /* ViBoolean */
#define AV4024_ATTR_RECORD_COERCIONS              IVI_ATTR_RECORD_COERCIONS               /* ViBoolean */
#define AV4024_ATTR_INTERCHANGE_CHECK             IVI_ATTR_INTERCHANGE_CHECK              /* ViBoolean */
        
        /* Driver Information  */
#define AV4024_ATTR_SPECIFIC_DRIVER_PREFIX        IVI_ATTR_SPECIFIC_DRIVER_PREFIX         /* ViString, read-only  */
#define AV4024_ATTR_SUPPORTED_INSTRUMENT_MODELS   IVI_ATTR_SUPPORTED_INSTRUMENT_MODELS    /* ViString, read-only  */
#define AV4024_ATTR_GROUP_CAPABILITIES            IVI_ATTR_GROUP_CAPABILITIES             /* ViString, read-only  */
#define AV4024_ATTR_INSTRUMENT_MANUFACTURER       IVI_ATTR_INSTRUMENT_MANUFACTURER        /* ViString, read-only  */
#define AV4024_ATTR_INSTRUMENT_MODEL              IVI_ATTR_INSTRUMENT_MODEL               /* ViString, read-only  */
#define AV4024_ATTR_INSTRUMENT_FIRMWARE_REVISION  IVI_ATTR_INSTRUMENT_FIRMWARE_REVISION              /* ViString, read-only  */
#define AV4024_ATTR_SPECIFIC_DRIVER_REVISION      IVI_ATTR_SPECIFIC_DRIVER_REVISION       /* ViString, read-only  */
#define AV4024_ATTR_SPECIFIC_DRIVER_VENDOR        IVI_ATTR_SPECIFIC_DRIVER_VENDOR         /* ViString, read-only  */
#define AV4024_ATTR_SPECIFIC_DRIVER_DESCRIPTION   IVI_ATTR_SPECIFIC_DRIVER_DESCRIPTION    /* ViString, read-only  */
#define AV4024_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MAJOR_VERSION /* ViInt32, read-only */
#define AV4024_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_CLASS_SPEC_MINOR_VERSION /* ViInt32, read-only */

        /* Advanced Session Information */
#define AV4024_ATTR_LOGICAL_NAME                  IVI_ATTR_LOGICAL_NAME                   /* ViString, read-only  */
#define AV4024_ATTR_IO_RESOURCE_DESCRIPTOR        IVI_ATTR_IO_RESOURCE_DESCRIPTOR         /* ViString, read-only  */
#define AV4024_ATTR_DRIVER_SETUP                  IVI_ATTR_DRIVER_SETUP                   /* ViString, read-only  */        
    /*- Instrument-Specific Attributes -------------------------------------*/

    /*- IviSpecAn Base Capability Group Attributes -------------------------*/
#define AV4024_ATTR_AMPLITUDE_UNITS                                      IVISPECAN_ATTR_AMPLITUDE_UNITS                              /* ViInt32                           */
#define AV4024_ATTR_ATTENUATION                                          IVISPECAN_ATTR_ATTENUATION                                  /* ViReal64, dB                      */
#define AV4024_ATTR_ATTENUATION_AUTO                                     IVISPECAN_ATTR_ATTENUATION_AUTO                             /* ViBoolean                         */
#define AV4024_ATTR_DETECTOR_TYPE                                        IVISPECAN_ATTR_DETECTOR_TYPE                                /* ViInt32                           */
#define AV4024_ATTR_DETECTOR_TYPE_AUTO                                   IVISPECAN_ATTR_DETECTOR_TYPE_AUTO                           /* ViBoolean                         */
#define AV4024_ATTR_FREQUENCY_START                                      IVISPECAN_ATTR_FREQUENCY_START                              /* ViReal64, hertz                   */
#define AV4024_ATTR_FREQUENCY_STOP                                       IVISPECAN_ATTR_FREQUENCY_STOP                               /* ViReal64, hertz                   */
#define AV4024_ATTR_FREQUENCY_OFFSET                                     IVISPECAN_ATTR_FREQUENCY_OFFSET                             /* ViReal64, hertz                   */
#define AV4024_ATTR_INPUT_IMPEDANCE                                      IVISPECAN_ATTR_INPUT_IMPEDANCE                              /* ViReal64, ohms                    */
#define AV4024_ATTR_NUMBER_OF_SWEEPS                                     IVISPECAN_ATTR_NUMBER_OF_SWEEPS                             /* ViInt32                           */
#define AV4024_ATTR_REFERENCE_LEVEL                                      IVISPECAN_ATTR_REFERENCE_LEVEL                              /* ViReal64                          */
#define AV4024_ATTR_REFERENCE_LEVEL_OFFSET                               IVISPECAN_ATTR_REFERENCE_LEVEL_OFFSET                       /* ViReal64, dB                      */
#define AV4024_ATTR_RESOLUTION_BANDWIDTH                                 IVISPECAN_ATTR_RESOLUTION_BANDWIDTH                         /* ViReal64, hertz                   */
#define AV4024_ATTR_RESOLUTION_BANDWIDTH_AUTO                            IVISPECAN_ATTR_RESOLUTION_BANDWIDTH_AUTO                    /* ViBoolean                         */
#define AV4024_ATTR_SWEEP_MODE_CONTINUOUS                                IVISPECAN_ATTR_SWEEP_MODE_CONTINUOUS                        /* ViBoolean                         */
#define AV4024_ATTR_SWEEP_TIME                                           IVISPECAN_ATTR_SWEEP_TIME                                   /* ViReal64, seconds                 */
#define AV4024_ATTR_SWEEP_TIME_AUTO                                      IVISPECAN_ATTR_SWEEP_TIME_AUTO                              /* ViBoolean                         */
#define AV4024_ATTR_TRACE_COUNT                                          IVISPECAN_ATTR_TRACE_COUNT                                  /* ViInt32, read-only                */
#define AV4024_ATTR_TRACE_SIZE                                           IVISPECAN_ATTR_TRACE_SIZE                                   /* ViInt32, multi-channel, read-only */
#define AV4024_ATTR_VERTICAL_SCALE                                       IVISPECAN_ATTR_VERTICAL_SCALE                               /* ViInt32                           */
#define AV4024_ATTR_VIDEO_BANDWIDTH                                      IVISPECAN_ATTR_VIDEO_BANDWIDTH                              /* ViReal64, hertz                   */
#define AV4024_ATTR_VIDEO_BANDWIDTH_AUTO                                 IVISPECAN_ATTR_VIDEO_BANDWIDTH_AUTO                         /* ViBoolean                         */
                                                                                                                                                                               
    /*- IviSpecAn Marker Extension Group Attributes ------------------------*/                                                                                                 
#define AV4024_ATTR_MARKER_AMPLITUDE                                     IVISPECAN_ATTR_MARKER_AMPLITUDE                             /* ViReal64, read-only, dB           */
#define AV4024_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED                     IVISPECAN_ATTR_MARKER_FREQUENCY_COUNTER_ENABLED             /* ViBoolean                         */
#define AV4024_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION                  IVISPECAN_ATTR_MARKER_FREQUENCY_COUNTER_RESOLUTION          /* ViReal64, hertz                   */
#define AV4024_ATTR_MARKER_POSITION                                      IVISPECAN_ATTR_MARKER_POSITION                              /* ViReal64                          */
#define AV4024_ATTR_MARKER_THRESHOLD                                     IVISPECAN_ATTR_MARKER_THRESHOLD                             /* ViReal64                          */
#define AV4024_ATTR_MARKER_TRACE                                         IVISPECAN_ATTR_MARKER_TRACE                                 /* ViString                          */
#define AV4024_ATTR_MARKER_COUNT                                         IVISPECAN_ATTR_MARKER_COUNT                                 /* ViInt32, read-only                */
#define AV4024_ATTR_PEAK_EXCURSION                                       IVISPECAN_ATTR_PEAK_EXCURSION                               /* ViReal64, dB                      */
#define AV4024_ATTR_SIGNAL_TRACK_ENABLED                                 IVISPECAN_ATTR_SIGNAL_TRACK_ENABLED                         /* ViBoolean                         */
                                                                                                                                                                                         
    /*- IviSpecAn Marker Type Extension Group Attributes -------------------*/                                                                                                           
#define AV4024_ATTR_MARKER_TYPE                                          IVISPECAN_ATTR_MARKER_TYPE                                  /* ViInt32, read-only                */
                                                                                                                                                                                         
    /*- IviSpecAn Delta Marker Extension Group Attributes ------------------*/                                                                                                           
#define AV4024_ATTR_REFERENCE_MARKER_AMPLITUDE                           IVISPECAN_ATTR_REFERENCE_MARKER_AMPLITUDE                   /* ViReal64, read-only               */
#define AV4024_ATTR_REFERENCE_MARKER_POSITION                            IVISPECAN_ATTR_REFERENCE_MARKER_POSITION                    /* ViReal64, read-only               */
                                                                                                                                                                                         
    /*- IviSpecAn Trigger Extension Group Attributes -----------------------*/                                                                                                           
#define AV4024_ATTR_TRIGGER_SOURCE                                       IVISPECAN_ATTR_TRIGGER_SOURCE                               /* ViInt32                           */
                                                                                                                                                                                         
    /*- IviSpecAn External Trigger Extension Group Attributes --------------*/                                                                                                           
#define AV4024_ATTR_EXTERNAL_TRIGGER_LEVEL                               IVISPECAN_ATTR_EXTERNAL_TRIGGER_LEVEL                       /* ViReal64, volts                   */
#define AV4024_ATTR_EXTERNAL_TRIGGER_SLOPE                               IVISPECAN_ATTR_EXTERNAL_TRIGGER_SLOPE                       /* ViInt32                           */
                                                                                                                                                                                         
    /*- IviSpecAn VideO Trigger Extension Group Attributes -----------------*/                                                                                                           
#define AV4024_ATTR_VIDEO_TRIGGER_LEVEL                                  IVISPECAN_ATTR_VIDEO_TRIGGER_LEVEL                          /* ViReal64                          */
#define AV4024_ATTR_VIDEO_TRIGGER_SLOPE                                  IVISPECAN_ATTR_VIDEO_TRIGGER_SLOPE                          /* ViInt32                           */
                                                                                                                                                                                         
    /*- IviSpecAn Display Extension Group Attributes -----------------------*/                                                                                                           
#define AV4024_ATTR_UNITS_PER_DIVISION                                   IVISPECAN_ATTR_UNITS_PER_DIVISION                           /* ViReal64                          */
                                                                                                                                                                                         
    /*- IviSpecAn External Mixing Extension Group Attributes ---------------*/                                                                                                           
#define AV4024_ATTR_EXTERNAL_MIXER_ENABLED                               IVISPECAN_ATTR_EXTERNAL_MIXER_ENABLED                       /* ViBoolean                         */
#define AV4024_ATTR_EXTERNAL_MIXER_NUMBER_OF_PORTS                       IVISPECAN_ATTR_EXTERNAL_MIXER_NUMBER_OF_PORTS               /* ViInt32                           */
#define AV4024_ATTR_EXTERNAL_MIXER_HARMONIC                              IVISPECAN_ATTR_EXTERNAL_MIXER_HARMONIC                      /* ViInt32                           */
#define AV4024_ATTR_EXTERNAL_MIXER_AVERAGE_CONVERSION_LOSS               IVISPECAN_ATTR_EXTERNAL_MIXER_AVERAGE_CONVERSION_LOSS       /* ViReal64                          */
#define AV4024_ATTR_EXTERNAL_MIXER_CONVERSION_LOSS_TABLE_ENABLED         IVISPECAN_ATTR_EXTERNAL_MIXER_CONVERSION_LOSS_TABLE_ENABLED /* ViBoolean                         */
#define AV4024_ATTR_EXTERNAL_MIXER_BIAS_ENABLED                          IVISPECAN_ATTR_EXTERNAL_MIXER_BIAS_ENABLED                  /* ViBoolean                         */
#define AV4024_ATTR_EXTERNAL_MIXER_BIAS                                  IVISPECAN_ATTR_EXTERNAL_MIXER_BIAS                          /* ViReal64, amps                    */
#define AV4024_ATTR_EXTERNAL_MIXER_BIAS_LIMIT                            IVISPECAN_ATTR_EXTERNAL_MIXER_BIAS_LIMIT                    /* ViReal64, amps                    */

    /*- AV4024-Specific Attributes -------------------------------------*/

#define AV4024_ATTR_ID_QUERY_RESPONSE      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 1L)     /* ViString (Read Only) */
#define AV4024_ATTR_FREQUENCY_CENTER        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2L)
#define AV4024_ATTR_FREQUENCY_STEP          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 3L)
#define AV4024_ATTR_FREQUENCY_STEP_AUTO (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 4L)
#define AV4024_ATTR_FREQUENCY_SPAN          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 5L)
#define AV4024_ATTR_FREQUENCY_SPAN_ALL (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 6L)
#define AV4024_ATTR_FREQUENCY_SPAN_ZERO     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 7L)
#define AV4024_ATTR_FREQUENCY_SPAN_PREVIOUS (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 8L)
#define AV4024_ATTR_FREQUENCY_SIGSTANDARD_NAME (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 9L)
#define AV4024_ATTR_FREQUENCY_SIGSTANDARD_CHANNEL (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 10L)
#define AV4024_ATTR_POWER_GAIN              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 13L)
#define AV4024_ATTR_AMPLITUDE_ATTDAC        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 14L)
#define AV4024_ATTR_AMPLITUDE_ATTDAC_STATE  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 15L)
#define AV4024_ATTR_CORRECTIONS             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 16L)
#define AV4024_ATTR_CORRECTIONS_ANTENNA_OFF (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 17L)
#define AV4024_ATTR_CORRECTIONS_ANTENNA_EDIT_ADD (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 18L)
#define AV4024_ATTR_CORRECTIONS_ANTENNA_EDIT_DEL (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 19L)
#define AV4024_ATTR_RESOLUTION_RATIO        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 20L)
#define AV4024_ATTR_VIDEO_RATIO             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 21L)
#define AV4024_ATTR_AVERAGE_COUNT           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 22L)
#define AV4024_ATTR_AVERAGE_STATE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 23L)
#define AV4024_ATTR_AVERAGE_CLEAR           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 24L)
#define AV4024_ATTR_SWEEP_POINTS            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 25L)
#define AV4024_ATTR_SWEEP_MODE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 26L)
#define AV4024_ATTR_SWEEP_TRIG              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 27L)
#define AV4024_ATTR_MEASURE_OFF             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 28L)
#define AV4024_ATTR_CHANNEL_POWER_ONOFF     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 29L)
#define AV4024_ATTR_CHANNEL_BANDWIDTH       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 30L)
#define AV4024_ATTR_CHANNEL_POWER_VALUE     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 31L)
#define AV4024_ATTR_CHANNEL_POWER_DENSITY   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 32L)
#define AV4024_ATTR_OBW_ONOFF               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 33L)
#define AV4024_ATTR_OBW_METHOD              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 34L)
#define AV4024_ATTR_OBW_PERCENT             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 35L)
#define AV4024_ATTR_OBW_XDB                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 36L)
#define AV4024_ATTR_OBW_VALUE               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 37L)
#define AV4024_ATTR_DEMOD_ONOFF             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 38L)
#define AV4024_ATTR_DEMOD_TYPE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 39L)
#define AV4024_ATTR_DEMOD_MODE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 40L)
#define AV4024_ATTR_DEMOD_TIME              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 41L)
#define AV4024_ATTR_DEMOD_VOLUME            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 42L)
#define AV4024_ATTR_DEMOD_FREQUENCY         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 43L)
#define AV4024_ATTR_ACPR_ONOFF              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 44L)
#define AV4024_ATTR_ACPR_MAINCHANNELBW      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 45L)
#define AV4024_ATTR_ACPR_ADJCHANNELBW       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 46L)
#define AV4024_ATTR_ACPR_CHANNELSPACE       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 47L)
#define AV4024_ATTR_ACPR_LIMIT_ONOFF        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 48L)
#define AV4024_ATTR_ACPR_OFFSET_LLIMIT      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 49L)
#define AV4024_ATTR_ACPR_OFFSET_ULIMIT      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 50L)
#define AV4024_ATTR_EMISSION_ONOFF          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 51L)
#define AV4024_ATTR_EMISSION_REFBW          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 52L)
#define AV4024_ATTR_EMISSION_REFPOWER_TYPE  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 53L)
#define AV4024_ATTR_EMISSION_MARKER_ONOFF   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 54L)
#define AV4024_ATTR_EMISSION_FAIL           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 55L)
#define AV4024_ATTR_CNR_ONOFF               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 56L)
#define AV4024_ATTR_CNR_CBW                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 57L)
#define AV4024_ATTR_CNR_NBW                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 58L)
#define AV4024_ATTR_CNR_CHANNELSPACE        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 59L)
#define AV4024_ATTR_CNR_RESULT              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 60L)
#define AV4024_ATTR_AFP_TYPE                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 61L)
#define AV4024_ATTR_AFP_MODE                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 62L)
#define AV4024_ATTR_AFP_AFSPAN              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 63L)
#define AV4024_ATTR_AFP_AFSCALE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 64L)
#define AV4024_ATTR_AFP_AWSPAN              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 65L)
#define AV4024_ATTR_AFP_IFBW                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 66L)
#define AV4024_ATTR_AFP_SELECT_TRACE        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 67L)
#define AV4024_ATTR_IAMEASURE_MODE          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 68L)
#define AV4024_ATTR_IAMEASURE_TRACE_SPAN    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 69L)
#define AV4024_ATTR_IAMEASURE_TRACE_AUTOSAVE (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 70L)
#define AV4024_ATTR_IAMEASURE_TRACE_CURSOR  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 71L)
#define AV4024_ATTR_INSTRUMENT_SELECT       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 72L)
#define AV4024_ATTR_INSTRUMENT_CATALOG      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 73L)
#define AV4024_ATTR_REFERENCE_POSITION      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 76L)
#define AV4024_ATTR_LOAD_ANTENNA            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 77L)
#define AV4024_ATTR_LOAD_LIMIT              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 78L)
#define AV4024_ATTR_DELETE_ANTENNA          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 79L)
#define AV4024_ATTR_STORE_ANTENNA           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 80L)
#define AV4024_ATTR_LIST_EDIT_DELETE        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 82L)
#define AV4024_ATTR_LIST_EDIT_CLEAR         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 83L)
#define AV4024_ATTR_LIMIT_BEEP              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 84L)
#define AV4024_ATTR_UPPER_LIMIT_DISPLAY     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 85L)
#define AV4024_ATTR_UPPER_LIMIT_TEST        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 86L)
#define AV4024_ATTR_UPPER_LIMIT_MARGIN      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 87L)
#define AV4024_ATTR_UPPER_LIMIT_ADD         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 88L)
#define AV4024_ATTR_UPPER_LIMIT_CLEAR       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 90L)
#define AV4024_ATTR_LOWER_LIMIT_DISPLAY     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 91L)
#define AV4024_ATTR_LOWER_LIMIT_TEST        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 92L)
#define AV4024_ATTR_LOWER_LIMIT_MARGIN      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 93L)
#define AV4024_ATTR_LOWER_LIMIT_ADD         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 94L)
#define AV4024_ATTR_LOWER_LIMIT_CLEAR       (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 96L)
#define AV4024_ATTR_MARKER_ACTIVE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 97L)
#define AV4024_ATTR_MEASURE_TYPE            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 98L)
#define AV4024_ATTR_PM_RESOLUTION           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 99L)
#define AV4024_ATTR_PM_CORRECTION           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 100L)
#define AV4024_ATTR_PM_UPPER                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 101L)
#define AV4024_ATTR_PM_LOWER                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 102L)
#define AV4024_ATTR_PM_RELATIVE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 103L)
#define AV4024_ATTR_PM_RELATIVE_ON  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 104L)
#define AV4024_ATTR_PM_CORRECTION_ON        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 105L)
#define AV4024_ATTR_PM_ZERO_STATE           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 106L)
#define AV4024_ATTR_PM_LIMIT_ON             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 107L)
#define AV4024_ATTR_PM_LIMIT_UPPER          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 108L)
#define AV4024_ATTR_PM_LIMIT_LOWER          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 109L)
#define AV4024_ATTR_IAM_INTERVAL            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 110L)
#define AV4024_ATTR_PM_MAXHOLD_ON           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 111L)
#define AV4024_ATTR_DATA_FORMAT             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 112L)
#define AV4024_ATTR_LOAD_STATE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 113L)
#define AV4024_ATTR_STORE_STATE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 114L)
#define AV4024_ATTR_DELETE_STATE            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 115L)
#define AV4024_ATTR_LOAD_DATA               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 116L)
#define AV4024_ATTR_STORE_DATA              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 117L)
#define AV4024_ATTR_STORE_SCREEN            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 118L)
#define AV4024_ATTR_STORE_LOCATION          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 119L)
#define AV4024_ATTR_GPS_ON                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 120L)
#define AV4024_ATTR_GPS_RECEIVE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 121L)
#define AV4024_ATTR_DELETE_DATA             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 122L)
#define AV4024_ATTR_GPS_STATE               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 123L)
#define AV4024_ATTR_GPS_DATA                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 124L)
#define AV4024_ATTR_ROSC_SOURCE             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 125L)
#define AV4024_ATTR_SLEEP_TIME              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 126L)
#define AV4024_ATTR_SLEEP_ON                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 127L)
#define AV4024_ATTR_SHUTDOWN_TIME           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 128L)
#define AV4024_ATTR_SHUTDOWN_ON             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 129L)
#define AV4024_ATTR_TITLE                   (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 130L)
#define AV4024_ATTR_TITLE_ON                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 131L)
#define AV4024_ATTR_SHOW_MODE               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 132L)
#define AV4024_ATTR_BRIGHT_ON               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 133L)
#define AV4024_ATTR_BRIGHT                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 134L)
#define AV4024_ATTR_TIME_FORMAT             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 135L)
#define AV4024_ATTR_TIME                    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 136L)
#define AV4024_ATTR_IQCAPTURE_ON            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 137L)
#define AV4024_ATTR_IQCAPTURE_TIME          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 138L)
#define AV4024_ATTR_IQCAPTURE_MODE          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 139L)
#define AV4024_ATTR_IQCAPTURE_SAMPLE        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 140L)
#define AV4024_ATTR_IQCAPTURE_FILENAME      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 141L)
#define AV4024_ATTR_IQCAPTURE_TRIG_MODE     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 142L)
#define AV4024_ATTR_IQCAPTURE_TRIG_SLOP     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 143L)
#define AV4024_ATTR_IQCAPTURE_TRIG_DELAY    (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 144L)
#define AV4024_ATTR_IQCAPTURE_TRIG_AMP      (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 145L)
#define AV4024_ATTR_TRIG_VIDEO_AMP          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 146L)
#define AV4024_ATTR_TRIG_EXTRA_AMP          (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 147L)
#define AV4024_ATTR_TRIG_EXTRA_SLOP (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 148L)
#define AV4024_ATTR_TRIG_EXTRA_DELAY        (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 149L)
#define AV4024_ATTR_CS_DISPLAY              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 150L)
#define AV4024_ATTR_CS_MAXHOLD              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 151L)
#define AV4024_ATTR_CS_UNIT                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 152L)
#define AV4024_ATTR_CS_POWER                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 153L)
#define AV4024_ATTR_CS_COLOUR               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 154L)
#define AV4024_ATTR_CS_ORIENTAL             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 155L)
#define AV4024_ATTR_CS_MODE                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 156L)
#define AV4024_ATTR_CS_NUM                  (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 157L)
#define AV4024_ATTR_CS_STEP                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 158L)
#define AV4024_ATTR_CS_BANDWIDTH            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 159L)
#define AV4024_ATTR_CS_STARTFREQ            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 160L)
#define AV4024_ATTR_CS_STEPFREQ             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 161L)
#define AV4024_ATTR_CS_FS_BAND              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 162L)
#define AV4024_ATTR_CS_FS_NUM               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 163L)
#define AV4024_ATTR_CS_LIST_NUM             (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 164L)
#define AV4024_ATTR_SCALE_TYPE              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 165L)
#define AV4024_ATTR_PEAK_TRACK              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 166L)
#define AV4024_ATTR_LOAD_LIST               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 167L)
#define AV4024_ATTR_STORE_LIST              (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 168L)
#define AV4024_ATTR_LOAD_SALIMIT            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 169L)
#define AV4024_ATTR_STORE_SALIMIT           (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 170L)
#define AV4024_ATTR_IFOUT_ON                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 171L)
#define AV4024_ATTR_IFOUT_SELECT            (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 172L)
#define AV4024_ATTR_ACPR_RATE_UPPER         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 173L)
#define AV4024_ATTR_ACPR_RATE_LOWER         (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 174L)
#define AV4024_ATTR_DEL_ANT                 (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 175L)
#define AV4024_ATTR_DEL_LIST                (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 176L)
#define AV4024_ATTR_DEL_LIMIT               (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 177L)
    /*=CHANGE:===============================================================*
        Add attribute definitions here.                                       
        #define AV4024_ATTR_MY_ATTRIBUTE     (IVI_SPECIFIC_PUBLIC_ATTR_BASE + 2L) 
     *============================================================END=CHANGE=*/

    /*- Obsolete Inherent Instrument Attributes ----------------------------*/
        /*=CHANGE:=============================================================*
            NOTE TO THE DEVELOPER:  These attributes are obsolete and may not be
            supported in future versions of IVI drivers.  
            
            If you DO NOT want this driver to be compliant with NI's Ivi Driver 
            Toolset 1.1, remove these attribute definitions.

            If you DO want this driver to be compliant with NI's IVI Driver Toolset
            1.1, remove the comments around these attribute definitions.

        // Driver Information 
#define AV4024_ATTR_SPECIFIC_DRIVER_MAJOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_MAJOR_VERSION  // ViInt32,  read-only  
#define AV4024_ATTR_SPECIFIC_DRIVER_MINOR_VERSION IVI_ATTR_SPECIFIC_DRIVER_MINOR_VERSION  // ViInt32,  read-only  

        // Error Info
#define AV4024_ATTR_PRIMARY_ERROR                 IVI_ATTR_PRIMARY_ERROR                  // ViInt32 
#define AV4024_ATTR_SECONDARY_ERROR               IVI_ATTR_SECONDARY_ERROR                // ViInt32
#define AV4024_ATTR_ERROR_ELABORATION             IVI_ATTR_ERROR_ELABORATION              // ViString

        // Advanced Session Information
#define AV4024_ATTR_IO_SESSION_TYPE               IVI_ATTR_IO_SESSION_TYPE                // ViString, read-only  
#define AV4024_ATTR_IO_SESSION                    IVI_ATTR_IO_SESSION                     // ViSession, read-only

     // Obsolete Attribute Identifiers for Renamed Attributes
#define AV4024_ATTR_NUM_CHANNELS             IVI_ATTR_CHANNEL_COUNT
#define AV4024_ATTR_QUERY_INSTR_STATUS       AV4024_ATTR_QUERY_INSTRUMENT_STATUS            
#define AV4024_ATTR_RESOURCE_DESCRIPTOR      AV4024_ATTR_IO_RESOURCE_DESCRIPTOR

     *==========================================================END=CHANGE=*/


/**************************************************************************** 
 *------------------------ Attribute Value Defines -------------------------* 
 ****************************************************************************/
    /*- Defined values for AV4024_ATTR_AMPLITUDE_UNITS ---------------------*/
#define AV4024_VAL_AMPLITUDE_UNITS_DBM                                   IVISPECAN_VAL_AMPLITUDE_UNITS_DBM   
#define AV4024_VAL_AMPLITUDE_UNITS_DBMV                                  IVISPECAN_VAL_AMPLITUDE_UNITS_DBMV
#define AV4024_VAL_AMPLITUDE_UNITS_DBUV                                  IVISPECAN_VAL_AMPLITUDE_UNITS_DBUV
#define AV4024_VAL_AMPLITUDE_UNITS_VOLT                                  IVISPECAN_VAL_AMPLITUDE_UNITS_VOLT
#define AV4024_VAL_AMPLITUDE_UNITS_WATT                                  IVISPECAN_VAL_AMPLITUDE_UNITS_WATT

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_AMPLITUDE_UNITS_SPECIFIC.  Example:
        
#define AV4024_VAL_AMPLITUDE_UNITS_MY_VALUE                      (IVISPECAN_VAL_AMPLITUDE_UNITS_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_DETECTOR_TYPE -----------------------*/
#define AV4024_VAL_DETECTOR_TYPE_AUTO_PEAK                               IVISPECAN_VAL_DETECTOR_TYPE_AUTO_PEAK   
#define AV4024_VAL_DETECTOR_TYPE_AVERAGE                                 IVISPECAN_VAL_DETECTOR_TYPE_AVERAGE 
#define AV4024_VAL_DETECTOR_TYPE_MAX_PEAK                                IVISPECAN_VAL_DETECTOR_TYPE_MAX_PEAK    
#define AV4024_VAL_DETECTOR_TYPE_MIN_PEAK                                IVISPECAN_VAL_DETECTOR_TYPE_MIN_PEAK    
#define AV4024_VAL_DETECTOR_TYPE_SAMPLE                                  IVISPECAN_VAL_DETECTOR_TYPE_SAMPLE  
#define AV4024_VAL_DETECTOR_TYPE_RMS                                     IVISPECAN_VAL_DETECTOR_TYPE_RMS     

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_DETECTOR_TYPE_SPECIFIC.  Example:
        
#define AV4024_VAL_DETECTOR_TYPE_MY_VALUE            (IVISPECAN_VAL_DETECTOR_TYPE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_TRACE_TYPE --------------------------*/
#define AV4024_VAL_TRACE_TYPE_CLEAR_WRITE                                IVISPECAN_VAL_TRACE_TYPE_CLEAR_WRITE    
#define AV4024_VAL_TRACE_TYPE_MAX_HOLD                                   IVISPECAN_VAL_TRACE_TYPE_MAX_HOLD       
#define AV4024_VAL_TRACE_TYPE_MIN_HOLD                                   IVISPECAN_VAL_TRACE_TYPE_MIN_HOLD       
#define AV4024_VAL_TRACE_TYPE_VIDEO_AVERAGE                              IVISPECAN_VAL_TRACE_TYPE_VIDEO_AVERAGE      
#define AV4024_VAL_TRACE_TYPE_VIEW                                       IVISPECAN_VAL_TRACE_TYPE_VIEW           
#define AV4024_VAL_TRACE_TYPE_STORE                                      IVISPECAN_VAL_TRACE_TYPE_STORE          

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_TRACE_TYPE_SPECIFIC.  Example:
        
#define AV4024_VAL_TRACE_TYPE_MY_VALUE               (IVISPECAN_VAL_TRACE_TYPE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_VERTICAL_SCALE ----------------------*/
#define AV4024_VAL_VERTICAL_SCALE_LINEAR                                 IVISPECAN_VAL_VERTICAL_SCALE_LINEAR     
#define AV4024_VAL_VERTICAL_SCALE_LOGARITHMIC                            IVISPECAN_VAL_VERTICAL_SCALE_LOGARITHMIC

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_VERTICAL_SCALE_SPECIFIC.  Example:
                                               
#define AV4024_VAL_VERTICAL_SCALE_MY_VALUE                               (IVISPECAN_VAL_VERTICAL_SCALE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_MARKER_TYPE -------------------------*/
#define AV4024_VAL_MARKER_TYPE_NORMAL                                    IVISPECAN_VAL_MARKER_TYPE_NORMAL    
#define AV4024_VAL_MARKER_TYPE_DELTA                                     IVISPECAN_VAL_MARKER_TYPE_DELTA     

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_MARKER_TYPE_SPECIFIC.  Example:
                                               
#define AV4024_VAL_MARKER_TYPE_MY_VALUE                                  (IVISPECAN_VAL_MARKER_TYPE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_TRIGGER_SOURCE ----------------------*/
#define AV4024_VAL_TRIGGER_SOURCE_EXTERNAL                               IVISPECAN_VAL_TRIGGER_SOURCE_EXTERNAL   
#define AV4024_VAL_TRIGGER_SOURCE_IMMEDIATE                              IVISPECAN_VAL_TRIGGER_SOURCE_IMMEDIATE  
#define AV4024_VAL_TRIGGER_SOURCE_SOFTWARE                               IVISPECAN_VAL_TRIGGER_SOURCE_SOFTWARE
#define AV4024_VAL_TRIGGER_SOURCE_AC_LINE                                IVISPECAN_VAL_TRIGGER_SOURCE_AC_LINE    
#define AV4024_VAL_TRIGGER_SOURCE_VIDEO                                  IVISPECAN_VAL_TRIGGER_SOURCE_VIDEO      

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_TRIGGER_SOURCE_SPECIFIC.  Example:
                                                                                      
#define AV4024_VAL_TRIGGER_SOURCE_MY_VALUE                               (IVISPECAN_VAL_TRIGGER_SOURCE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_EXTERNAL_TRIGGER_SLOPE --------------*/
#define AV4024_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE                       IVISPECAN_VAL_EXTERNAL_TRIGGER_SLOPE_POSITIVE
#define AV4024_VAL_EXTERNAL_TRIGGER_SLOPE_NEGATIVE                       IVISPECAN_VAL_EXTERNAL_TRIGGER_SLOPE_NEGATIVE

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_EXTERNAL_TRIGGER_SLOPE_SPECIFIC.  Example:
                                                                                      
#define AV4024_VAL_EXTERNAL_TRIGGER_SLOPE_MY_VALUE                       (IVISPECAN_VAL_EXTERNAL_TRIGGER_SLOPE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ATTR_VIDEO_TRIGGER_SLOPE --------------*/
#define AV4024_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE                          IVISPECAN_VAL_VIDEO_TRIGGER_SLOPE_POSITIVE
#define AV4024_VAL_VIDEO_TRIGGER_SLOPE_NEGATIVE                          IVISPECAN_VAL_VIDEO_TRIGGER_SLOPE_NEGATIVE

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_VIDEO_TRIGGER_SLOPE_SPECIFIC.  Example:
                                                                                      
#define AV4024_VAL_VIDEO_TRIGGER_SLOPE_MY_VALUE                          (IVISPECAN_VAL_VIDEO_TRIGGER_SLOPE_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_ReadXYTrace & AV4024_ReadYTrace ----------*/
#define AV4024_VAL_MAX_TIME_IMMEDIATE                                    IVISPECAN_VAL_MAX_TIME_IMMEDIATE
#define AV4024_VAL_MAX_TIME_INFINITE                                     IVISPECAN_VAL_MAX_TIME_INFINITE         

    /*- Defined values for AV4024_AcquisitionStatus ------------------------*/
#define AV4024_VAL_ACQUISITION_STATUS_COMPLETE                           IVISPECAN_VAL_ACQUISITION_STATUS_COMPLETE          
#define AV4024_VAL_ACQUISITION_STATUS_IN_PROGRESS                        IVISPECAN_VAL_ACQUISITION_STATUS_IN_PROGRESS       
#define AV4024_VAL_ACQUISITION_STATUS_UNKNOWN                            IVISPECAN_VAL_ACQUISITION_STATUS_UNKNOWN

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_ACQUISITION_STATUS_SPECIFIC.  Example:
                                                                                      
#define AV4024_VAL_ACQUISITION_MY_VALUE                                  (IVISPECAN_VAL_ACQUISITION_STATUS_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_MarkerSearch -----------------------------*/
#define AV4024_VAL_MARKER_SEARCH_HIGHEST                                 IVISPECAN_VAL_MARKER_SEARCH_HIGHEST             
#define AV4024_VAL_MARKER_SEARCH_NEXT_PEAK                               IVISPECAN_VAL_MARKER_SEARCH_NEXT_PEAK           
#define AV4024_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT                          IVISPECAN_VAL_MARKER_SEARCH_NEXT_PEAK_LEFT      
#define AV4024_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT                         IVISPECAN_VAL_MARKER_SEARCH_NEXT_PEAK_RIGHT 
#define AV4024_VAL_MARKER_SEARCH_MINIMUM                                 IVISPECAN_VAL_MARKER_SEARCH_MINIMUM                 

    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_MARKER_SEARCH_SPECIFIC.  Example:
                                                                                      
#define AV4024_VAL_MARKER_MY_VALUE                    (IVISPECAN_VAL_MARKER_SEARCH_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/

    /*- Defined values for AV4024_SetInstrumentFromMarker -----------------------*/
#define AV4024_VAL_INSTRUMENT_SETTING_FREQUENCY_START                    IVISPECAN_VAL_INSTRUMENT_SETTING_FREQUENCY_START            

#define AV4024_VAL_TRIG_FREE                                        0

#define AV4024_VAL_OBW_METHOD_PERCENT                               0
#define AV4024_VAL_OBW_METHOD_XDB                                   1

#define AV4024_VAL_AFP_TYPE_AM                                      0
#define AV4024_VAL_AFP_TYPE_FM                                      1
#define AV4024_VAL_AFP_TYPE_PM                                      2

#define AV4024_VAL_IAMEASURE_MODE_NORMAL                            0
#define AV4024_VAL_IAMEASURE_MODE_SG                                1
#define AV4024_VAL_IAMEASURE_MODE_RSSI                              2


#define AV4024_VAL_AFP_MODE_RF                                      0
#define AV4024_VAL_AFP_MODE_AF                                      1
#define AV4024_VAL_AFP_MODE_AW                                      2
#define AV4024_VAL_AFP_MODE_ALL                                     3
#define AV4024_VAL_AFP_SELECT_TRACE_RF                              0
#define AV4024_VAL_AFP_SELECT_TRACE_AF                              1
#define AV4024_VAL_AFP_SELECT_TRACE_AW                              2


#define AV4024_VAL_DEMOD_TYPE_FM                                    0
#define AV4024_VAL_DEMOD_TYPE_AM                                    1
#define AV4024_VAL_DEMOD_TYPE_USB                                   2
#define AV4024_VAL_DEMOD_TYPE_LSB                                   3
#define AV4024_VAL_DEMOD_MODE_INTER                                 0
#define AV4024_VAL_DEMOD_MODE_CONTINOUS                             1


#define AV4024_VAL_TRIG_VIDEO                                       1
#define AV4024_VAL_TRIG_EXTRA                                       2


#define AV4024_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP                     IVISPECAN_VAL_INSTRUMENT_SETTING_FREQUENCY_STOP         
#define AV4024_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER                   IVISPECAN_VAL_INSTRUMENT_SETTING_FREQUENCY_CENTER           
#define AV4024_VAL_INSTRUMENT_SETTING_FREQUENCY_SPAN                     IVISPECAN_VAL_INSTRUMENT_SETTING_FREQUENCY_SPAN         
#define AV4024_VAL_INSTRUMENT_SETTING_REFERENCE_LEVEL                    IVISPECAN_VAL_INSTRUMENT_SETTING_REFERENCE_LEVEL            

#define AV4024_VAL_EMISSION_REFPOWER_TYPE_PEAK                      0
#define AV4024_VAL_EMISSION_REFPOWER_TYPE_CHANNEL                   1

#define AV4024_VAL_INSTRUMENT_SA                                    1
#define AV4024_VAL_INSTRUMENT_IA                                    2
#define AV4024_VAL_INSTRUMENT_DM                                    3
#define AV4024_VAL_INSTRUMENT_PM                                    4
#define AV4024_VAL_INSTRUMENT_CS                                    5

#define AV4024_VAL_TRACE_TYPE_BLANK                                 4

#define AV4024_VAL_NONE                                             0
#define AV4024_VAL_FST                                              1
#define AV4024_VAL_CHP                                              2
#define AV4024_VAL_OBW                                              3
#define AV4024_VAL_ACPR                                             4
#define AV4024_VAL_DEMOD                                            5
#define AV4024_VAL_EM                                               6
#define AV4024_VAL_CNR                                              7


    /*=CHANGE:==============================================================*
        Add instrument specific value definitions here for
        IVISPECAN_VAL_SET_INSTRUMENT_FROM_MARKER_SPECIFIC.  Example:
                                                                                      
#define AV4024_VAL_INSTRUMENT_SETTING_MY_VALUE                           (IVISPECAN_VAL_SET_INSTRUMENT_FROM_MARKER_SPECIFIC_EXT_BASE + 1L) 
     *===========================================================END=CHANGE=*/


        /* Instrument specific attribute value definitions */

    /*=CHANGE:==============================================================*
        Add value defines for instrument specific attributes here.  Example

    // Defined values for attribute AV4024_ATTR_EXAMPLE 

#define AV4024_VAL_EXAMPLE_1             1
#define AV4024_VAL_EXAMPLE_2             2
#define AV4024_VAL_EXAMPLE_3             3
     *===========================================================END=CHANGE=*/

/**************************************************************************** 
 *---------------- Instrument Driver Function Declarations -----------------* 
 ****************************************************************************/

    /*- Init and Close Functions -------------------------------------------*/
ViStatus _VI_FUNC  AV4024_init (ViRsrc resourceName, ViBoolean IDQuery,
                                  ViBoolean resetDevice, ViSession *vi);
ViStatus _VI_FUNC  AV4024_InitWithOptions (ViRsrc resourceName, ViBoolean IDQuery,
                                             ViBoolean resetDevice, ViConstString optionString, 
                                             ViSession *newVi);
ViStatus _VI_FUNC  AV4024_close (ViSession vi);   

    /*- Coercion Info Functions --------------------------------------------*/
ViStatus _VI_FUNC  AV4024_GetNextCoercionRecord (ViSession vi,
                                                   ViInt32 bufferSize,
                                                   ViChar record[]);
    
    /*- Locking Functions --------------------------------------------------*/
ViStatus _VI_FUNC  AV4024_LockSession (ViSession vi, ViBoolean *callerHasLock);   
ViStatus _VI_FUNC  AV4024_UnlockSession (ViSession vi, ViBoolean *callerHasLock);

	/*- IEEE488.2Õ®”√√¸¡Ó ---------------------------------------------------*/
ViStatus _VI_FUNC AV4024_QueryIDN (ViSession vi, ViChar IDN[]);

ViStatus _VI_FUNC AV4024_Reset (ViSession vi);

ViStatus _VI_FUNC AV4024_CLS (ViSession vi);

ViStatus _VI_FUNC AV4024_OPC (ViSession vi);

ViStatus _VI_FUNC AV4024_QueryOPC (ViSession vi, ViInt32 *nVal);

ViStatus _VI_FUNC AV4024_WAI (ViSession vi);

ViStatus _VI_FUNC AV4024_ESR (ViSession vi);

ViStatus _VI_FUNC AV4024_QuerySwpType (ViSession vi,
                                       ViBoolean *sweepType);

ViStatus _VI_FUNC AV4024_SetSwpType (ViSession vi,
                                     ViBoolean sweepType);

ViStatus _VI_FUNC AV4024_TrigSingleSwp (ViSession vi);

ViStatus _VI_FUNC AV4024_ListAddSeg (ViSession vi);

ViStatus _VI_FUNC AV4024_SetLowLmtMargin (ViSession vi,
                                          ViReal64 margin);

ViStatus _VI_FUNC AV4024_QueryLowLmtMargin (ViSession vi,
                                            ViReal64 *margin);

ViStatus _VI_FUNC AV4024_QueryUppLmtMargin (ViSession vi,
                                            ViReal64 *margin);

ViStatus _VI_FUNC AV4024_SetUppLmtMargin (ViSession vi,
                                          ViReal64 margin);

ViStatus _VI_FUNC AV4024_UppLmtAddPt (ViSession vi);

ViStatus _VI_FUNC AV4024_UppLmtDelPt (ViSession vi);

ViStatus _VI_FUNC AV4024_UppLmtClear (ViSession vi);

ViStatus _VI_FUNC AV4024_LowLmtAddPt (ViSession vi);

ViStatus _VI_FUNC AV4024_LowLmtDelPt (ViSession vi);

ViStatus _VI_FUNC AV4024_LowLmtClear (ViSession vi);

ViStatus _VI_FUNC AV4024_QueryMkrCountFreq (ViSession vi,
                                            ViInt32 markerIndex,
                                            ViReal64 *frequency);

ViStatus _VI_FUNC AV4024_SetMkrNoiseOn (ViSession vi,
                                        ViInt32 markerIndex, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryMkrNoiseOn (ViSession vi,
                                          ViInt32 markerIndex, ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_QueryPMRelative (ViSession vi,
                                          ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryPMRelativeOn (ViSession vi,
                                            ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetPMRelativeOn (ViSession vi,
                                          ViBoolean onoff);

ViStatus _VI_FUNC AV4024_SetRef (ViSession vi, ViReal64 reflevel);

ViStatus _VI_FUNC AV4024_QueryRef (ViSession vi,
                                   ViReal64 *reflevel);

ViStatus _VI_FUNC AV4024_SetRefPos (ViSession vi, ViInt32 refpos);

ViStatus _VI_FUNC AV4024_QueryRefPos (ViSession vi,
                                      ViInt32 *refpos);

ViStatus _VI_FUNC AV4024_SetScalePDiv (ViSession vi,
                                       ViReal64 scale);

ViStatus _VI_FUNC AV4024_QueryScalePDiv (ViSession vi,
                                         ViReal64 *scale);

ViStatus _VI_FUNC AV4024_QueryTemperature (ViSession vi,
                                           ViReal64 *temperature);

ViStatus _VI_FUNC AV4024_SetPMAutoscale (ViSession vi);

ViStatus _VI_FUNC AV4024_SetPMUpper (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryPMUpper (ViSession vi,
                                       ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetPMLower (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryPMLower (ViSession vi,
                                       ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetTitle (ViSession vi, ViString value);

ViStatus _VI_FUNC AV4024_QueryTitleOn (ViSession vi,
                                       ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetTitleOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryShowMode (ViSession vi,
                                        ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetShowMode (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryBrightOn (ViSession vi,
                                        ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetBrightOn (ViSession vi,
                                      ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryBright (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetBright (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_SetTimeFormat (ViSession vi,
                                        ViInt32 value);

ViStatus _VI_FUNC AV4024_LoadAntFile (ViSession vi,
                                      ViString fileName);

ViStatus _VI_FUNC AV4024_StoreAntFile (ViSession instrumentHandle,
                                       ViString fileName);

ViStatus _VI_FUNC AV4024_DelAntFile (ViSession instrumentHandle, ViString value);

ViStatus _VI_FUNC AV4024_LoadLmtFile (ViSession vi,
                                      ViString fileName);

ViStatus _VI_FUNC AV4024_DelAllAntFile (ViSession instrumentHandle);

ViStatus _VI_FUNC AV4024_LoadStateFile (ViSession vi,
                                        ViString value);

ViStatus _VI_FUNC AV4024_LoadList (ViSession instrumentHandle, ViString fileName);

ViStatus _VI_FUNC AV4024_StoreList (ViSession instrumentHandle,
                                    ViString fileName);

ViStatus _VI_FUNC AV4024_DelList (ViSession instrumentHandle, ViString value);

ViStatus _VI_FUNC AV4024_DelAllList (ViSession instrumentHandle);

ViStatus _VI_FUNC AV4024_LoadLimit (ViSession instrumentHandle,
                                    ViString fileName);

ViStatus _VI_FUNC AV4024_StoreLimit (ViSession instrumentHandle,
                                     ViString fileName);

ViStatus _VI_FUNC AV4024_DelLimit (ViSession instrumentHandle, ViString value);

ViStatus _VI_FUNC AV4024_DelAllLimit (ViSession instrumentHandle);

ViStatus _VI_FUNC AV4024_StoreStateFile (ViSession vi,
                                         ViString value);

ViStatus _VI_FUNC AV4024_DeleteStateFile (ViSession vi,
                                          ViString value);

ViStatus _VI_FUNC AV4024_DeleteAllStateFile (ViSession vi);

ViStatus _VI_FUNC AV4024_LoadDateFile (ViSession vi,
                                       ViString value);

ViStatus _VI_FUNC AV4024_StoreDataFile (ViSession vi,
                                        ViString value);

ViStatus _VI_FUNC AV4024_DeleteDataFile (ViSession vi,
                                         ViString value);

ViStatus _VI_FUNC AV4024_DeleteAllDataFile (ViSession vi);

ViStatus _VI_FUNC AV4024_StoreScreen (ViSession vi, ViString value);

ViStatus _VI_FUNC AV4024_QueryLocation (ViSession vi,
                                        ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetLocation (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_SetAligNow (ViSession vi);

ViStatus _VI_FUNC AV4024_QueryTraceData (ViSession vi,
                                         ViInt32 *size, ViReal64 data[],
                                         int index);

ViStatus _VI_FUNC AV4024_QueryTraceType (ViSession vi,
                                         ViInt32 *type, int index);

ViStatus _VI_FUNC AV4024_SetTraceType (ViSession vi, ViInt32 type,
                                       int index);

ViStatus _VI_FUNC AV4024_SetCntFreq (ViSession vi,
                                     ViReal64 frequency);

ViStatus _VI_FUNC AV4024_QueryCntFreq (ViSession vi,
                                       ViReal64 *frequency);

ViStatus _VI_FUNC AV4024_SetStepFreq (ViSession vi,
                                      ViReal64 frequency);

ViStatus _VI_FUNC AV4024_QueryStepFreq (ViSession vi,
                                        ViReal64 *frequency);

ViStatus _VI_FUNC AV4024_SetAutoStepFreqOn (ViSession vi,
                                            ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryAutoStepFreqOn (ViSession vi,
                                              ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetSpan (ViSession vi, ViReal64 span);

ViStatus _VI_FUNC AV4024_QuerySpan (ViSession vi, ViReal64 *span);

ViStatus _VI_FUNC AV4024_SetFullSpan (ViSession vi);

ViStatus _VI_FUNC AV4024_SetZeroSpan (ViSession vi);

ViStatus _VI_FUNC AV4024_SetLastSpan (ViSession vi);

ViStatus _VI_FUNC AV4024_SetSttFreq (ViSession vi,
                                     ViReal64 frequency);

ViStatus _VI_FUNC AV4024_QuerySttFreq (ViSession vi,
                                       ViReal64 *frequency);

ViStatus _VI_FUNC AV4024_SetStpFreq (ViSession vi,
                                     ViReal64 frequency);

ViStatus _VI_FUNC AV4024_QueryStpFreq (ViSession vi,
                                       ViReal64 *frequency);

ViStatus _VI_FUNC AV4024_SetSIGStandard (ViSession instrumentHandle,
                                         ViString standard);

ViStatus _VI_FUNC AV4024_QuerySIGstandard (ViSession instrumentHandle,
                                           ViChar standard[]);

ViStatus _VI_FUNC AV4024_SetChannelNum (ViSession vi,
                                        ViInt32 channelNum);

ViStatus _VI_FUNC AV4024_QueryChannelNum (ViSession vi,
                                          ViInt32 *channelNum);

ViStatus _VI_FUNC AV4024_QueryAtt (ViSession vi, ViInt32 *att);

ViStatus _VI_FUNC AV4024_SetAtt (ViSession vi, ViInt32 att);

ViStatus _VI_FUNC AV4024_QueryAutoAttOn (ViSession vi,
                                         ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetAutoAttOn (ViSession vi,
                                       ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryPreAmpOn (ViSession vi,
                                        ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetPreAmpOn (ViSession vi,
                                      ViBoolean onoff);

ViStatus _VI_FUNC AV4024_SetFstOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryFstOn (ViSession vi,
                                     ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetAntOff (ViSession vi);

ViStatus _VI_FUNC AV4024_SetAmpUnit (ViSession vi, ViInt32 unit);

ViStatus _VI_FUNC AV4024_QueryScaleType (ViSession instrumentHandle,
                                         ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetScaleType (ViSession instrumentHandle, ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryAmpUnit (ViSession vi, ViInt32 *unit);

ViStatus _VI_FUNC AV4024_SetRBW (ViSession vi, ViReal64 rbw);

ViStatus _VI_FUNC AV4024_QueryRBW (ViSession vi, ViReal64 *rbw);

ViStatus _VI_FUNC AV4024_SetAutoRBWOn (ViSession vi,
                                       ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryAutoRBWOn (ViSession vi,
                                         ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetSR100 (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QuerySR100 (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_QueryVBW (ViSession vi, ViReal64 *vbw);

ViStatus _VI_FUNC AV4024_SetVBW (ViSession vi, ViReal64 vbw);

ViStatus _VI_FUNC AV4024_QueryAutoVBWOn (ViSession vi,
                                         ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetAutoVBWOn (ViSession vi,
                                       ViBoolean onoff);

ViStatus _VI_FUNC AV4024_SetRV300 (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryRV300 (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetAvgCount (ViSession vi, ViInt32 count);

ViStatus _VI_FUNC AV4024_QueryAvgCount (ViSession vi,
                                        ViInt32 *count);

ViStatus _VI_FUNC AV4024_SetAvgOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryCurrentCount (ViSession instrumentHandle,
                                            ViInt32 *count);

ViStatus _VI_FUNC AV4024_QueryAvgOn (ViSession vi,
                                     ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_ClearAvgCount (ViSession vi);

ViStatus _VI_FUNC AV4024_SetDetectorType (ViSession vi,
                                          ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryDetectorType (ViSession vi,
                                            ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetAutoDetectorOn (ViSession vi,
                                            ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryAutoDetectorOn (ViSession vi,
                                              ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetSwpTime (ViSession vi, ViReal64 time);

ViStatus _VI_FUNC AV4024_QuerySwpTime (ViSession vi,
                                       ViReal64 *time);

ViStatus _VI_FUNC AV4024_SetAutoSwpTimeOn (ViSession vi,
                                           ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryAutoSwpTimeOn (ViSession vi,
                                             ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetSwpPoints (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QuerySwpPoints (ViSession vi,
                                         ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetSwpMode (ViSession vi, ViBoolean mode);

ViStatus _VI_FUNC AV4024_QuerySwpMode (ViSession vi,
                                       ViBoolean *mode);

ViStatus _VI_FUNC AV4024_SetTrigType (ViSession vi, ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryTrigType (ViSession vi,
                                        ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetMeasFunc (ViSession vi, ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryMeasFunc (ViSession vi,
                                        ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetMeasFuncAOff (ViSession vi);

ViStatus _VI_FUNC AV4024_SetCHPOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryCHPOn (ViSession vi,
                                     ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetCHPIBW (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCHPIBW (ViSession vi,
                                      ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryTPWR (ViSession vi, ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryPSDR (ViSession vi, ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryOBWOn (ViSession vi,
                                     ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetOBWOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_SetOBWMethod (ViSession vi,
                                       ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryOBWMethod (ViSession vi,
                                         ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetOBWPpow (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryOBWPpow (ViSession vi,
                                       ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetOBWXdB (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryOBWXdB (ViSession vi,
                                      ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryOBWOBW (ViSession vi,
                                      ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetDemodOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryDemodOn (ViSession vi,
                                       ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetDType (ViSession vi, ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryDType (ViSession vi, ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetDMode (ViSession vi, ViInt32 mode);

ViStatus _VI_FUNC AV4024_QueryDMode (ViSession vi, ViInt32 *mode);

ViStatus _VI_FUNC AV4024_SetDTime (ViSession vi, ViReal64 time);

ViStatus _VI_FUNC AV4024_QueryDTime (ViSession vi, ViReal64 *time);

ViStatus _VI_FUNC AV4024_SetVolume (ViSession vi, ViInt32 volume);

ViStatus _VI_FUNC AV4024_QueryVolume (ViSession vi,
                                      ViInt32 *volume);

ViStatus _VI_FUNC AV4024_SetDFreq (ViSession vi, ViReal64 freq);

ViStatus _VI_FUNC AV4024_QueryDFreq (ViSession vi, ViReal64 *freq);

ViStatus _VI_FUNC AV4024_SetACPROn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryACPROn (ViSession vi,
                                      ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetACPRMainChBW (ViSession vi,
                                          ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryACPRMainChBW (ViSession vi,
                                            ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetACPRAdjChBW (ViSession vi,
                                         ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryACPRAdjChBW (ViSession vi,
                                           ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetACPRSpace (ViSession vi,
                                       ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryACPRSpace (ViSession vi,
                                         ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetACPRLmtTestOn (ViSession vi,
                                           ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryACPRLmtTestOn (ViSession vi,
                                             ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetACPRLowLmt (ViSession vi,
                                        ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryACPRLowLmt (ViSession vi,
                                          ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetACPRUppLmt (ViSession vi,
                                        ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryACPRUppLmt (ViSession vi,
                                          ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetEMOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryEmOn (ViSession vi, ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetEMRefCHBW (ViSession vi,
                                       ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryEMRefCHBW (ViSession vi,
                                         ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetEMRefPowerType (ViSession vi,
                                            ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryEMRefPowerType (ViSession vi,
                                              ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetEMPeakMarkerOn (ViSession vi,
                                            ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryEMPeakMarkerOn (ViSession vi,
                                              ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_QueryEMFail (ViSession vi,
                                      ViBoolean *value);

ViStatus _VI_FUNC AV4024_SetCNROn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryCNROn (ViSession vi,
                                      ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetCNRCBW (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCNRCBW (ViSession vi,
                                      ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetCNRNBW (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCNRNBW (ViSession vi,
                                      ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetCNRSpace (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCNRSpace (ViSession vi,
                                        ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryCNRValue (ViSession vi,
                                        ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetDMType (ViSession vi, ViInt32 type);

ViStatus _VI_FUNC AV4024_QueryDMType (ViSession vi, ViInt32 *type);

ViStatus _VI_FUNC AV4024_SetDMMode (ViSession vi, ViInt32 mode);

ViStatus _VI_FUNC AV4024_QueryDMMode (ViSession vi, ViInt32 *mode);

ViStatus _VI_FUNC AV4024_SetDMAFSpan (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryDMAFSpan (ViSession vi,
                                        ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetDMScale (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryDMScale (ViSession vi,
                                       ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetDMTime (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryDMTime (ViSession vi, ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetDMIBW (ViSession vi, ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryDMIBW (ViSession vi, ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetDMTrace (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryDMTrace (ViSession vi,
                                       ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetIAMode (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryIAMode (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetTraceTimeSpan (ViSession vi,
                                           ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryTraceTimeSpan (ViSession vi,
                                             ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetIASaveOn (ViSession vi,
                                      ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryIASaveOn (ViSession instrumentHandle,
                                        ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetIACursor (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_SetIARestart (ViSession vi);

ViStatus _VI_FUNC AV4024_SetPMResolution (ViSession vi,
                                          ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryPMResolution (ViSession vi,
                                            ViInt32 *value);

ViStatus _VI_FUNC AV4024_QueryPMCORRection (ViSession vi,
                                            ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetPMCORRection (ViSession vi,
                                          ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryPMCORRectionOn (ViSession vi,
                                              ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetPMCORRectionOn (ViSession vi,
                                            ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryPMLimitOn (ViSession vi,
                                         ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetPMLimitOn (ViSession vi,
                                       ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryPMLimitUpper (ViSession vi,
                                            ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetPMLimitUpper (ViSession vi,
                                          ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryPMLimitLower (ViSession vi,
                                            ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetPMLimitLower (ViSession vi,
                                          ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryIAInterval (ViSession vi,
                                          ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetIAInterval (ViSession vi,
                                        ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryPMMaxholdOn (ViSession vi,
                                           ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetPMMaxholdOn (ViSession vi,
                                         ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryIQCaptureOn (ViSession vi,
                                           ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetIQcaptureOn (ViSession vi,
                                         ViBoolean onoff);

ViStatus _VI_FUNC AV4024_SetIQCaptureStart (ViSession vi);

ViStatus _VI_FUNC AV4024_SetIQCaptureStop (ViSession vi);

ViStatus _VI_FUNC AV4024_QueryIQCaptureTime (ViSession vi,
                                             ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureTime (ViSession vi,
                                           ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryIQCaptureMode (ViSession vi,
                                             ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureMode (ViSession vi,
                                           ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryIQCaptureSample (ViSession vi,
                                               ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureSample (ViSession vi,
                                             ViReal64 value);

ViStatus _VI_FUNC AV4024_SetIQCaptureFilename (ViSession vi,
                                               ViString value);

ViStatus _VI_FUNC AV4024_QueryIQCaptureTrigMode (ViSession vi,
                                                 ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureTrigMode (ViSession vi,
                                               ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryIQCaptureTrigSlop (ViSession vi,
                                                 ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureTrigSlop (ViSession vi,
                                               ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryIQCaptureTrigDelay (ViSession vi,
                                                  ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureTrigDelay (ViSession vi,
                                                ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryIQCaptureTrigAMP (ViSession vi,
                                                ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetIQCaptureTrigAMP (ViSession vi,
                                              ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryTrigVideoAMP (ViSession vi,
                                            ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetTrigVideoAMP (ViSession vi,
                                          ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryTrigExtraAMP (ViSession vi,
                                            ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetTrigExtraAMP (ViSession vi,
                                          ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryTrigExtraSlop (ViSession vi,
                                             ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetTrigExtraSlop (ViSession vi,
                                           ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryTrigExtraDelay (ViSession vi,
                                              ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetTrigExtraDelay (ViSession vi,
                                            ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCSDisplay (ViSession vi,
                                         ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSDisplay (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSMaxhold (ViSession vi,
                                         ViBoolean *value);

ViStatus _VI_FUNC AV4024_SetCSMaxhold (ViSession vi,
                                       ViBoolean value);

ViStatus _VI_FUNC AV4024_QueryCSUnit (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSUnit (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSPower (ViSession vi,
                                       ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSPower (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSColour (ViSession vi,
                                        ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSColour (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSOriental (ViSession vi,
                                          ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSOriental (ViSession vi,
                                        ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSMode (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSMode (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSNum (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSNum (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSStep (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSStep (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSBandwidth (ViSession vi,
                                           ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetCSBandwidth (ViSession vi,
                                         ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCSStartFreq (ViSession vi,
                                           ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetCSStartFreq (ViSession vi,
                                         ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCSStepFreq (ViSession vi,
                                          ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetCSStepFreq (ViSession vi,
                                        ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCSFreqScanBandwidth (ViSession vi,
                                                   ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetCSFreqScanBandwidth (ViSession vi,
                                                 ViReal64 value);

ViStatus _VI_FUNC AV4024_QueryCSFreqScanNum (ViSession vi,
                                             ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSFreqScanNum (ViSession vi,
                                           ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryCSListScanNum (ViSession vi,
                                             ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetCSListScanNum (ViSession vi,
                                           ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryIFOutOn (ViSession instrumentHandle,
                                       ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetIFOutOn (ViSession instrumentHandle, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryIFOutSelect (ViSession instrumentHandle,
                                           ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetIFOutSelect (ViSession instrumentHandle,
                                         ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryACPRrateUpper (ViSession instrumentHandle,
                                             ViReal64 *value);

ViStatus _VI_FUNC AV4024_QueryACPRrateLower (ViSession instrumentHandle,
                                             ViReal64 *value);

ViStatus _VI_FUNC AV4024_SetPMCalibZero (ViSession vi);

ViStatus _VI_FUNC AV4024_QueryPMCalibZero (ViSession vi,
                                           ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetGPSOn (ViSession vi, ViBoolean value);

ViStatus _VI_FUNC AV4024_QueryGPSOn (ViSession vi,
                                     ViBoolean *value);

ViStatus _VI_FUNC AV4024_QueryGPSState (ViSession vi,
                                        ViInt32 *value);

ViStatus _VI_FUNC AV4024_QueryGPSReceiveState (ViSession vi,
                                               ViInt32 *value);

ViStatus _VI_FUNC AV4024_GPSReset (ViSession vi);

ViStatus _VI_FUNC AV4024_QueryGPSData (ViSession vi,
                                       ViChar data[]);

ViStatus _VI_FUNC AV4024_SetRoscSourc (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryRoscSource (ViSession vi,
                                          ViInt32 *value);

ViStatus _VI_FUNC AV4024_QuerySleep (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetSleep (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryAutoSleepOn (ViSession vi,
                                           ViBoolean *value);

ViStatus _VI_FUNC AV4024_SetAutoSleepOn (ViSession vi,
                                         ViBoolean value);

ViStatus _VI_FUNC AV4024_QueryShutdown (ViSession vi,
                                        ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetShutdown (ViSession vi, ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryAutoShutdownOn (ViSession instrumentHandle,
                                              ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetAutoShutdownOn (ViSession instrumentHandle,
                                            ViInt32 value);

ViStatus _VI_FUNC AV4024_QueryTime (ViSession instrumentHandle, ViChar value[]);

ViStatus _VI_FUNC AV4024_SetTime (ViSession vi, ViInt32 year,
                                  ViInt32 month, ViInt32 day, ViInt32 hour,
                                  ViInt32 minute);

    /*- IviSpecAn Base Capabilities Group Functions ------------------------*/
ViStatus _VI_FUNC AV4024_ConfigureFrequencyStartStop (ViSession vi,
                                                                ViReal64 StartFrequency,
                                                                ViReal64 StopFrequency);

ViStatus _VI_FUNC AV4024_ConfigureFrequencyCenterSpan (ViSession vi,
                                                                 ViReal64 CenterFrequency,
                                                                 ViReal64 Span);

ViStatus _VI_FUNC AV4024_ConfigureFrequencyOffset (ViSession vi, 
                                                             ViReal64 FrequencyOffset);

ViStatus _VI_FUNC AV4024_ConfigureSweepCoupling (ViSession vi, 
                                                           ViBoolean ResolutionBandwidthAuto, 
                                                           ViReal64 ResolutionBandwidth, 
                                                           ViBoolean VideoBandwidthAuto, 
                                                           ViReal64 VideoBandwidth, 
                                                           ViBoolean SweepTimeAuto, 
                                                           ViReal64 SweepTime);

ViStatus _VI_FUNC AV4024_ConfigureAcquisition (ViSession vi, 
                                                         ViBoolean SweepModeContinuous, 
                                                         ViInt32 NumberOfSweeps, 
                                                         ViBoolean DetectorTypeAuto, 
                                                         ViInt32 DetectorType, 
                                                         ViInt32 VerticleScale);
                                                 
ViStatus _VI_FUNC AV4024_ConfigureLevel (ViSession vi, 
                                                   ViInt32 AmplitudeUnits, 
                                                   ViReal64 InputImpedance, 
                                                   ViReal64 ReferenceLevel, 
                                                   ViReal64 ReferenceLevelOffset, 
                                                   ViBoolean AttenuationAuto, 
                                                   ViReal64 Attenuation);
                                           
ViStatus _VI_FUNC AV4024_GetTraceName (ViSession vi,
                                                 ViInt32 Index,
                                                 ViInt32 NameBufferSize,
                                                 ViChar Name[]);
                                               
ViStatus _VI_FUNC AV4024_QueryTraceSize (ViSession vi,
                                                   ViConstString TraceName,
                                                   ViInt32 *TraceSize);

ViStatus _VI_FUNC AV4024_ListDelSeg (ViSession vi, ViInt32 index);

ViStatus _VI_FUNC AV4024_ListClear (ViSession vi);

ViStatus _VI_FUNC AV4024_SetAlarmOn (ViSession vi, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryAlarmOn (ViSession vi,
                                       ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetUppLmtDispOn (ViSession vi,
                                          ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryUppLmtDispOn (ViSession vi,
                                            ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetUppLmtTestOn (ViSession vi,
                                          ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryUppLmtTestOn (ViSession vi,
                                            ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetLowLmtDispOn (ViSession vi,
                                          ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryLowLmtDispOn (ViSession vi,
                                            ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetLowLmtTestOn (ViSession vi,
                                          ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryLowLmtTestOn (ViSession vi,
                                            ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_AntennaAddDefault (ViSession vi);

ViStatus _VI_FUNC AV4024_AntennaDelete (ViSession vi,
                                        ViInt32 index);

ViStatus _VI_FUNC AV4024_AntennaAdd (ViSession vi,
                                     ViReal64 frequency, ViReal64 factor);

ViStatus _VI_FUNC AV4024_AntennaEdit (ViSession vi, ViInt32 index,
                                      ViReal64 frequency, ViReal64 factor);

ViStatus _VI_FUNC AV4024_ListAdd (ViSession instrumentHandle,
                                  ViReal64 startfrequency,
                                  ViReal64 stopfrequency, ViInt32 rbwIndex,
                                  ViInt32 vbwIndex, ViInt32 sweepPoints,
                                  ViBoolean ONOFF);

ViStatus _VI_FUNC AV4024_ListEdit (ViSession instrumentHandle, ViInt32 index,
                                   ViReal64 startfrequency,
                                   ViReal64 stopfrequency, ViInt32 rbwIndex,
                                   ViInt32 vbwIndex, ViInt32 sweepPoints,
                                   ViBoolean ONOFF);

ViStatus _VI_FUNC AV4024_UpperLimitEdit (ViSession vi,
                                         ViInt32 index, ViReal64 frequency,
                                         ViReal64 amplitude);

ViStatus _VI_FUNC AV4024_LowerLimitEdit (ViSession vi,
                                         ViInt32 index, ViReal64 frequency,
                                         ViReal64 amplitude);

ViStatus _VI_FUNC AV4024_QueryInstCatalog (ViSession vi,
                                           ViInt32 *nVal);

ViStatus _VI_FUNC AV4024_SetInstSel (ViSession vi, ViInt32 mode);

ViStatus _VI_FUNC AV4024_QueryInstSel (ViSession vi, ViInt32 *mode);

ViStatus _VI_FUNC AV4024_ReadYTrace (ViSession vi, 
                                               ViConstString TraceName, 
                                               ViInt32 MaxTime, 
                                               ViInt32 ArrayLength, 
                                               ViInt32 *ActualPoints, 
                                               ViReal64 Amplitude[]);

ViStatus _VI_FUNC AV4024_Initiate (ViSession vi);

ViStatus _VI_FUNC AV4024_FetchYTrace (ViSession vi, 
                                                ViConstString TraceName, 
                                                ViInt32 ArrayLength, 
                                                ViInt32 *ActualPoints, 
                                                ViReal64 Amplitude[]);

ViStatus _VI_FUNC AV4024_Abort (ViSession vi);

ViStatus _VI_FUNC AV4024_AcquisitionStatus (ViSession vi, 
                                                      ViInt32 *Status);

    /*- IviSpecAn Multitrace Extension Group Functions ---------------------*/
ViStatus _VI_FUNC AV4024_AddTraces (ViSession vi, 
                                              ViConstString DestinationTrace, 
                                              ViConstString Trace1, 
                                              ViConstString Trace2);

ViStatus _VI_FUNC AV4024_ExchangeTraces (ViSession vi, 
                                                   ViConstString Trace1, 
                                                   ViConstString Trace2);
    
ViStatus _VI_FUNC AV4024_CopyTrace (ViSession vi, 
                                              ViConstString DestinationTrace, 
                                              ViConstString SourceTrace);

ViStatus _VI_FUNC AV4024_SubtractTraces (ViSession vi, 
                                                   ViConstString DestinationTrace, 
                                                   ViConstString Trace1, 
                                                   ViConstString Trace2);

ViStatus _VI_FUNC AV4024_SetMkrState (ViSession vi,
                                      ViInt32 markerIndex, ViInt32 state);

ViStatus _VI_FUNC AV4024_QueryMkrState (ViSession vi,
                                        ViInt32 markerIndex, ViInt32 *state);

ViStatus _VI_FUNC AV4024_SetMkrActive (ViSession vi,
                                       ViInt32 activeMarker);

ViStatus _VI_FUNC AV4024_SetMkrTo (ViSession vi,
                                   ViInt32 markerIndex, ViInt32 position);

ViStatus _VI_FUNC AV4024_SetMkrSearch (ViSession vi,
                                       ViInt32 markerIndex, ViInt32 type);

ViStatus _VI_FUNC AV4024_SetMkrCountOn (ViSession vi,
                                        ViInt32 markerIndex, ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryPeakTrack (ViSession instrumentHandle,
                                         ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_SetPeakTrack (ViSession instrumentHandle,
                                       ViBoolean onoff);

ViStatus _VI_FUNC AV4024_QueryMkrCountOn (ViSession vi,
                                          ViInt32 markerIndex, ViBoolean *onoff);

ViStatus _VI_FUNC AV4024_ConfigureSignalTrackEnabled (ViSession vi, 
                                                                ViBoolean SignalTrackEnabled);

ViStatus _VI_FUNC AV4024_DisableAllMarkers(ViSession vi);

ViStatus _VI_FUNC AV4024_GetMarkerName (ViSession vi, 
                                                  ViInt32 Index,
                                                  ViInt32 NameBufferSize,
                                                  ViChar Name[]);
ViStatus _VI_FUNC AV4024_MarkerSearch (ViSession vi, 
                                                 ViInt32 MarkerSearch);
                                         
ViStatus _VI_FUNC AV4024_MoveMarker (ViSession vi,
                                     ViInt32 markerIndex,
                                     ViReal64 markerPosition);

ViStatus _VI_FUNC AV4024_QueryMarker (ViSession vi,
                                      ViInt32 markerIndex,
                                      ViReal64 *markerPosition,
                                      ViReal64 *markerAmplitude);

    /*- IviSpecAn Marker Type Extension Group Functions --------------------*/
ViStatus _VI_FUNC AV4024_QueryMarkerType (ViSession vi, 
                                                    ViInt32 *MarkerType);

    /*- IviSpecAn Delta Marker Extension Group Functions -------------------*/
ViStatus _VI_FUNC AV4024_QueryReferenceMarker (ViSession vi, 
                                                         ViReal64 *ReferenceMarkerAmplitude,
                                                         ViReal64 *ReferenceMarkerPosition);

ViStatus _VI_FUNC AV4024_QueryFormat (ViSession vi, ViInt32 *value);

ViStatus _VI_FUNC AV4024_SetFormat (ViSession vi, ViInt32 value);

    /*- IviSpecAn Trigger Extension Group Functions ------------------------*/
ViStatus _VI_FUNC AV4024_ConfigureTriggerSource (ViSession vi, 
                                                           ViInt32 TriggerSource);

    /*- IviSpecAn External Trigger Extension Group Functions ---------------*/
ViStatus _VI_FUNC AV4024_ConfigureExternalTrigger (ViSession vi, 
                                                             ViReal64 ExternalTriggerLevel, 
                                                             ViInt32 ExternalTriggerSlope);

    /*- IviSpecAn Software Trigger Extension Group Functions ---------------*/
ViStatus _VI_FUNC AV4024_SendSoftwareTrigger (ViSession vi);

    /*- IviSpecAn Video Trigger Extension Group Functions ------------------*/
ViStatus _VI_FUNC AV4024_ConfigureVideoTrigger (ViSession vi, 
                                                          ViReal64 VideoTriggerLevel, 
                                                          ViInt32 VideoTriggerSlope);

    /*- IviSpecAn External Mixer Extension Group Functions ----------------*/
ViStatus _VI_FUNC AV4024_ConfigureExternalMixerEnabled (ViSession vi, 
                                                                  ViBoolean ExternalMixerEnabled);
ViStatus _VI_FUNC AV4024_ConfigureExternalMixerNumberOfPorts (ViSession vi, 
                                                                        ViInt32 NumberOfPorts);

ViStatus _VI_FUNC AV4024_ConfigureExternalMixer (ViSession vi, 
                                                           ViInt32 Harmonic, 
                                                           ViReal64 AverageConversionLoss);

ViStatus _VI_FUNC AV4024_ConfigureExternalMixerBiasEnabled (ViSession vi, 
                                                                      ViBoolean BiasEnabled);

ViStatus _VI_FUNC AV4024_ConfigureExternalMixerBias (ViSession vi, 
                                                               ViReal64 Bias, 
                                                               ViReal64 BiasLimit);

ViStatus _VI_FUNC AV4024_ConfigureConversionLossTableEnabled (ViSession vi, 
                                                                        ViBoolean ConversionLossTableEnabled);

ViStatus _VI_FUNC AV4024_ConfigureConversionLossTable (ViSession vi, 
                                                                 ViInt32 Count, 
                                                                 ViReal64 Frequency[], 
                                                                 ViReal64 ConversionLoss[]);

    /*- IviSpecAn Preselector Extension Group Functions --------------------*/
ViStatus _VI_FUNC AV4024_PeakPreselector (ViSession vi);

    /*- Instrument specific Functions --------------------------------------*/                

        /*=CHANGE:===============================================================*
           Add instrument-specific public function declarations here.                           
         *============================================================END=CHANGE=*/
    
    /*- Error Functions ----------------------------------------------------*/
ViStatus _VI_FUNC  AV4024_error_query (ViSession vi, ViInt32 *errorCode,
                                         ViChar errorMessage[]);

ViStatus _VI_FUNC  AV4024_GetError (ViSession vi, ViStatus *code, 
                                      ViInt32 bufferSize, ViChar description[]);
ViStatus _VI_FUNC  AV4024_ClearError (ViSession vi);

ViStatus _VI_FUNC  AV4024_error_message (ViSession vi, ViStatus errorCode,
                                           ViChar errorMessage[256]);
    
    /*- Obsolete Error Handling Functions ----------------------------*/
        /*=CHANGE:=============================================================*
            NOTE TO THE DEVELOPER:  These functions are obsolete and may not be
            supported in future versions of IVI drivers.  
            
            If you DO NOT want this driver to be compliant with NI's Ivi Driver 
            Toolset 1.1, remove these function definitions.

            If you DO want this driver to be compliant with NI's IVI Driver Toolset
            1.1, remove the comments around these functions definitions.

ViStatus _VI_FUNC  AV4024_GetErrorInfo (ViSession vi, ViStatus *primaryError, 
                                          ViStatus *secondaryError, 
                                          ViChar errorElaboration[256]);
ViStatus _VI_FUNC  AV4024_ClearErrorInfo (ViSession vi);
     *==========================================================END=CHANGE=*/

    /*- Interchangeability Checking Functions ------------------------------*/
ViStatus _VI_FUNC AV4024_GetNextInterchangeWarning (ViSession vi, 
                                                      ViInt32 bufferSize, 
                                                      ViChar warnString[]);
ViStatus _VI_FUNC AV4024_ResetInterchangeCheck (ViSession vi);
ViStatus _VI_FUNC AV4024_ClearInterchangeWarnings (ViSession vi);

    /*- Utility Functions --------------------------------------------------*/
ViStatus _VI_FUNC AV4024_InvalidateAllAttributes (ViSession vi);
ViStatus _VI_FUNC  AV4024_reset (ViSession vi);
ViStatus _VI_FUNC  AV4024_ResetWithDefaults (ViSession vi);
ViStatus _VI_FUNC  AV4024_self_test (ViSession vi, ViInt16 *selfTestResult,
                                       ViChar selfTestMessage[]);
ViStatus _VI_FUNC  AV4024_revision_query (ViSession vi, 
                                            ViChar instrumentDriverRevision[],
                                            ViChar firmwareRevision[]);
ViStatus _VI_FUNC AV4024_Disable (ViSession vi);
ViStatus _VI_FUNC  AV4024_WriteInstrData (ViSession vi, ViConstString writeBuffer); 
ViStatus _VI_FUNC  AV4024_ReadInstrData  (ViSession vi, ViInt32 numBytes, 
                                            ViChar rdBuf[], ViInt32 *bytesRead);

    /*- Set, Get, and Check Attribute Functions ----------------------------*/
ViStatus _VI_FUNC  AV4024_GetAttributeViInt32 (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 *value);
ViStatus _VI_FUNC  AV4024_GetAttributeViReal64 (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 *value);
ViStatus _VI_FUNC  AV4024_GetAttributeViString (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 bufSize, ViChar value[]); 
ViStatus _VI_FUNC  AV4024_GetAttributeViSession (ViSession vi, ViConstString channelName, ViAttr attribute, ViSession *value);
ViStatus _VI_FUNC  AV4024_GetAttributeViBoolean (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean *value);

ViStatus _VI_FUNC  AV4024_SetAttributeViInt32 (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value);
ViStatus _VI_FUNC  AV4024_SetAttributeViReal64 (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value);
ViStatus _VI_FUNC  AV4024_SetAttributeViString (ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value); 
ViStatus _VI_FUNC  AV4024_SetAttributeViSession (ViSession vi, ViConstString channelName, ViAttr attribute, ViSession value);
ViStatus _VI_FUNC  AV4024_SetAttributeViBoolean (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value);

ViStatus _VI_FUNC  AV4024_CheckAttributeViInt32 (ViSession vi, ViConstString channelName, ViAttr attribute, ViInt32 value);
ViStatus _VI_FUNC  AV4024_CheckAttributeViReal64 (ViSession vi, ViConstString channelName, ViAttr attribute, ViReal64 value);
ViStatus _VI_FUNC  AV4024_CheckAttributeViString (ViSession vi, ViConstString channelName, ViAttr attribute, ViConstString value); 
ViStatus _VI_FUNC  AV4024_CheckAttributeViSession (ViSession vi, ViConstString channelName, ViAttr attribute, ViSession value);
ViStatus _VI_FUNC  AV4024_CheckAttributeViBoolean (ViSession vi, ViConstString channelName, ViAttr attribute, ViBoolean value);

/****************************************************************************
 *------------------------ Error And Completion Codes ----------------------*
 ****************************************************************************/
 
#define AV4024_WARN_MEASURE_UNCAL                    IVISPECAN_WARN_MEASURE_UNCAL 
#define AV4024_WARN_OVER_RANGE                       IVISPECAN_WARN_OVER_RANGE

#define AV4024_ERROR_MAX_TIME_EXCEEDED               IVISPECAN_ERROR_MAX_TIME_EXCEEDED
#define AV4024_ERROR_NOT_DELTA_MARKER                IVISPECAN_ERROR_NOT_DELTA_MARKER
#define AV4024_ERROR_MARKER_NOT_ENABLED              IVISPECAN_ERROR_MARKER_NOT_ENABLED

#define AV4024_WARNMSG_MEASURE_UNCAL                 IVISPECAN_WARNMSG_MEASURE_UNCAL
#define AV4024_WARNMSG_OVER_RANGE                    IVISPECAN_WARNMSG_OVER_RANGE

#define AV4024_ERRMSG_MAX_TIME_EXCEEDED              IVISPECAN_ERRMSG_MAX_TIME_EXCEEDED
#define AV4024_ERRMSG_NOT_DELTA_MARKER               IVISPECAN_ERRMSG_NOT_DELTA_MARKER
#define AV4024_ERRMSG_MARKER_NOT_ENABLED             IVISPECAN_ERRMSG_MARKER_NOT_ENABLED

#define AV4024_ERROR_CODES_AND_MSGS \
        {AV4024_ERROR_MAX_TIME_EXCEEDED              AV4024_ERROR_MAX_TIME_EXCEEDED}, \
        {AV4024_WARN_MEASURE_UNCAL                   AV4024_WARNMSG_MEASURE_UNCAL}, \
        {AV4024_WARN_OVER_RANGE                      AV4024_WARNMSG_OVER_RANGE}
                
    /*=CHANGE:==============================================================*
        Add instrument-specific error codes here starting at
        IVI_SPECIFIC_ERROR_BASE.  Example:

#define AV4024_ERROR_NAME  (IVI_SPECIFIC_ERROR_BASE + 1)
     *===========================================================END=CHANGE=*/

/**************************************************************************** 
 *---------------------------- End Include File ----------------------------* 
 ****************************************************************************/

#if defined(__cplusplus) || defined(__cplusplus__)
}
#endif
#endif /* __AV4024_HEADER */




