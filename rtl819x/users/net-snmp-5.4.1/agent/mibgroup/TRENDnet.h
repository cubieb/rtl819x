/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.scalar.conf 11805 2005-01-07 09:37:18Z dts12 $
 */
#ifndef TRENDNET_H
#define TRENDNET_H

/*
 * function declarations 
 */
void            init_TRENDnet(void);
Netsnmp_Node_Handler handle_enterpriseAPSysConfigSave;
Netsnmp_Node_Handler handle_enterpriseAPSysReboot;
Netsnmp_Node_Handler handle_enterpriseAPSysConfigApply;
Netsnmp_Node_Handler handle_dot11StationID;
Netsnmp_Node_Handler handle_dot11PrivacyOptionImplemented;
Netsnmp_Node_Handler handle_dot11DesiredSSID;
Netsnmp_Node_Handler handle_dot11DesiredBSSType;
Netsnmp_Node_Handler handle_dot11OperationalRateSet;
Netsnmp_Node_Handler handle_dot11BeaconPeriod;
Netsnmp_Node_Handler handle_dot11DTIMPeriod;
Netsnmp_Node_Handler handle_dot11AuthenticationAlgorithm;
Netsnmp_Node_Handler handle_dot11PrivacyInvoked;
Netsnmp_Node_Handler handle_dot11WEPDefaultKeyID;
Netsnmp_Node_Handler handle_dot11WEPKeyLength;
Netsnmp_Node_Handler handle_dot11WEPKeyMappingLength;
Netsnmp_Node_Handler handle_dot11ExcludeUnencrypted;
Netsnmp_Node_Handler handle_dot11WEPICVErrorCount;
Netsnmp_Node_Handler handle_dot11WEPExcludedCount;
Netsnmp_Node_Handler handle_dot11DisassociateReason;
Netsnmp_Node_Handler handle_dot11DisassociateStation;
Netsnmp_Node_Handler handle_dot11DeauthenticateReason;
Netsnmp_Node_Handler handle_dot11DeauthenticateStation;
Netsnmp_Node_Handler handle_dot11AuthenticateFailStatus;
Netsnmp_Node_Handler handle_dot11AuthenticateFailStation;
Netsnmp_Node_Handler handle_dot11MACAddress;
Netsnmp_Node_Handler handle_dot11RTSThreshold;
Netsnmp_Node_Handler handle_dot11ShortRetryLimit;
Netsnmp_Node_Handler handle_dot11LongRetryLimit;
Netsnmp_Node_Handler handle_dot11FragmentationThreshold;
Netsnmp_Node_Handler handle_dot11SSIDBroadcast;
Netsnmp_Node_Handler handle_dot11PreambleType;
Netsnmp_Node_Handler handle_dot11MaxTransmitMSDULifetime;
Netsnmp_Node_Handler handle_dot11MaxReceiveLifetime;
Netsnmp_Node_Handler handle_dot11ManufacturerID;
Netsnmp_Node_Handler handle_dot11ProductID;
Netsnmp_Node_Handler handle_dot11TransmittedFragmentCount;
Netsnmp_Node_Handler handle_dot11MulticastTransmittedFrameCount;
Netsnmp_Node_Handler handle_dot11FailedCount;
Netsnmp_Node_Handler handle_dot11RetryCount;
Netsnmp_Node_Handler handle_dot11MultipleRetryCount;
Netsnmp_Node_Handler handle_dot11FrameDuplicateCount;
Netsnmp_Node_Handler handle_dot11RTSSuccessCount;
Netsnmp_Node_Handler handle_dot11RTSFailureCount;
Netsnmp_Node_Handler handle_dot11ACKFailureCount;
Netsnmp_Node_Handler handle_dot11ReceivedFragmentCount;
Netsnmp_Node_Handler handle_dot11MulticastReceivedFrameCount;
Netsnmp_Node_Handler handle_dot11FCSErrorCount;
Netsnmp_Node_Handler handle_dot11TransmittedFrameCount;
Netsnmp_Node_Handler handle_dot11WEPUndecryptableCount;
Netsnmp_Node_Handler handle_dot11manufacturerOUI;
Netsnmp_Node_Handler handle_dot11manufacturerName;
Netsnmp_Node_Handler handle_dot11manufacturerProductName;
Netsnmp_Node_Handler handle_dot11manufacturerProductVersion;
Netsnmp_Node_Handler handle_dot11CurrentRegDomain;
Netsnmp_Node_Handler handle_dot11SupportedDataRatesTxValue;
Netsnmp_Node_Handler handle_dot11SupportedDataRatesRxValue;
Netsnmp_Node_Handler handle_dot11CurrentTxRate;
Netsnmp_Node_Handler handle_dot11CurrentTxAntenna;
Netsnmp_Node_Handler handle_dot11DiversitySupport;
Netsnmp_Node_Handler handle_dot11CurrentRxAntenna;
Netsnmp_Node_Handler handle_dot11CurrentChannel;
Netsnmp_Node_Handler handle_dot11ShortPreambleOptionImplemented;

#endif                          /* TRENDNET_H */