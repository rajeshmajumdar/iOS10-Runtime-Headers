/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying> {
    unsigned long long  _appDataStallTimerMsecs;
    unsigned long long  _appReportingDataStallCount;
    unsigned long long  _bestRTTMsecs;
    unsigned long long  _betterRouteEventCount;
    unsigned long long  _bytesDuplicate;
    unsigned long long  _bytesIn;
    unsigned long long  _bytesOut;
    unsigned long long  _bytesOutOfOrder;
    unsigned long long  _bytesRetransmitted;
    BOOL  _cellularFallback;
    BOOL  _cellularRRCConnected;
    BOOL  _connected;
    int  _connectedInterfaceType;
    unsigned long long  _connectionEstablishmentTimeMsecs;
    unsigned long long  _connectionReuseCount;
    unsigned long long  _currentRTTMsecs;
    BOOL  _dNSAnswersCached;
    unsigned long long  _dNSResolvedTimeMsecs;
    unsigned long long  _flowDurationMsecs;
    struct { 
        unsigned int appDataStallTimerMsecs : 1; 
        unsigned int appReportingDataStallCount : 1; 
        unsigned int bestRTTMsecs : 1; 
        unsigned int betterRouteEventCount : 1; 
        unsigned int bytesDuplicate : 1; 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
        unsigned int bytesOutOfOrder : 1; 
        unsigned int bytesRetransmitted : 1; 
        unsigned int connectionEstablishmentTimeMsecs : 1; 
        unsigned int connectionReuseCount : 1; 
        unsigned int currentRTTMsecs : 1; 
        unsigned int dNSResolvedTimeMsecs : 1; 
        unsigned int flowDurationMsecs : 1; 
        unsigned int iPAddressAttemptCount : 1; 
        unsigned int packetsDuplicate : 1; 
        unsigned int packetsIn : 1; 
        unsigned int packetsOut : 1; 
        unsigned int packetsOutOfOrder : 1; 
        unsigned int packetsRetransmitted : 1; 
        unsigned int rTTvariance : 1; 
        unsigned int smoothedRTTMsecs : 1; 
        unsigned int synRetransmissionCount : 1; 
        unsigned int timeToConnectionEstablishmentMsecs : 1; 
        unsigned int timeToConnectionStartMsecs : 1; 
        unsigned int timeToDNSResolvedMsecs : 1; 
        unsigned int timeToDNSStartMsecs : 1; 
        unsigned int trafficClass : 1; 
        unsigned int connectedInterfaceType : 1; 
        unsigned int interfaceType : 1; 
        unsigned int cellularFallback : 1; 
        unsigned int cellularRRCConnected : 1; 
        unsigned int connected : 1; 
        unsigned int dNSAnswersCached : 1; 
        unsigned int kernelReportedStalls : 1; 
        unsigned int kernelReportingConnectionStalled : 1; 
        unsigned int kernelReportingReadStalled : 1; 
        unsigned int kernelReportingWriteStalled : 1; 
        unsigned int tcpFastOpen : 1; 
    }  _has;
    unsigned long long  _iPAddressAttemptCount;
    int  _interfaceType;
    BOOL  _kernelReportedStalls;
    BOOL  _kernelReportingConnectionStalled;
    BOOL  _kernelReportingReadStalled;
    BOOL  _kernelReportingWriteStalled;
    unsigned long long  _packetsDuplicate;
    unsigned long long  _packetsIn;
    unsigned long long  _packetsOut;
    unsigned long long  _packetsOutOfOrder;
    unsigned long long  _packetsRetransmitted;
    unsigned long long  _rTTvariance;
    unsigned long long  _smoothedRTTMsecs;
    unsigned long long  _synRetransmissionCount;
    BOOL  _tcpFastOpen;
    unsigned long long  _timeToConnectionEstablishmentMsecs;
    unsigned long long  _timeToConnectionStartMsecs;
    unsigned long long  _timeToDNSResolvedMsecs;
    unsigned long long  _timeToDNSStartMsecs;
    unsigned long long  _trafficClass;
}

@property (nonatomic) unsigned long long appDataStallTimerMsecs;
@property (nonatomic) unsigned long long appReportingDataStallCount;
@property (nonatomic) unsigned long long bestRTTMsecs;
@property (nonatomic) unsigned long long betterRouteEventCount;
@property (nonatomic) unsigned long long bytesDuplicate;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) unsigned long long bytesOutOfOrder;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) BOOL cellularFallback;
@property (nonatomic) BOOL cellularRRCConnected;
@property (nonatomic) BOOL connected;
@property (nonatomic) int connectedInterfaceType;
@property (nonatomic) unsigned long long connectionEstablishmentTimeMsecs;
@property (nonatomic) unsigned long long connectionReuseCount;
@property (nonatomic) unsigned long long currentRTTMsecs;
@property (nonatomic) BOOL dNSAnswersCached;
@property (nonatomic) unsigned long long dNSResolvedTimeMsecs;
@property (nonatomic) unsigned long long flowDurationMsecs;
@property (nonatomic) BOOL hasAppDataStallTimerMsecs;
@property (nonatomic) BOOL hasAppReportingDataStallCount;
@property (nonatomic) BOOL hasBestRTTMsecs;
@property (nonatomic) BOOL hasBetterRouteEventCount;
@property (nonatomic) BOOL hasBytesDuplicate;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasBytesOutOfOrder;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) BOOL hasCellularFallback;
@property (nonatomic) BOOL hasCellularRRCConnected;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasConnectedInterfaceType;
@property (nonatomic) BOOL hasConnectionEstablishmentTimeMsecs;
@property (nonatomic) BOOL hasConnectionReuseCount;
@property (nonatomic) BOOL hasCurrentRTTMsecs;
@property (nonatomic) BOOL hasDNSAnswersCached;
@property (nonatomic) BOOL hasDNSResolvedTimeMsecs;
@property (nonatomic) BOOL hasFlowDurationMsecs;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasKernelReportedStalls;
@property (nonatomic) BOOL hasKernelReportingConnectionStalled;
@property (nonatomic) BOOL hasKernelReportingReadStalled;
@property (nonatomic) BOOL hasKernelReportingWriteStalled;
@property (nonatomic) BOOL hasPacketsDuplicate;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPacketsOutOfOrder;
@property (nonatomic) BOOL hasPacketsRetransmitted;
@property (nonatomic) BOOL hasRTTvariance;
@property (nonatomic) BOOL hasSmoothedRTTMsecs;
@property (nonatomic) BOOL hasSynRetransmissionCount;
@property (nonatomic) BOOL hasTcpFastOpen;
@property (nonatomic) BOOL hasTimeToConnectionEstablishmentMsecs;
@property (nonatomic) BOOL hasTimeToConnectionStartMsecs;
@property (nonatomic) BOOL hasTimeToDNSResolvedMsecs;
@property (nonatomic) BOOL hasTimeToDNSStartMsecs;
@property (nonatomic) BOOL hasTrafficClass;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (nonatomic) int interfaceType;
@property (nonatomic) BOOL kernelReportedStalls;
@property (nonatomic) BOOL kernelReportingConnectionStalled;
@property (nonatomic) BOOL kernelReportingReadStalled;
@property (nonatomic) BOOL kernelReportingWriteStalled;
@property (nonatomic) unsigned long long packetsDuplicate;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) unsigned long long packetsOutOfOrder;
@property (nonatomic) unsigned long long packetsRetransmitted;
@property (nonatomic) unsigned long long rTTvariance;
@property (nonatomic) unsigned long long smoothedRTTMsecs;
@property (nonatomic) unsigned long long synRetransmissionCount;
@property (nonatomic) BOOL tcpFastOpen;
@property (nonatomic) unsigned long long timeToConnectionEstablishmentMsecs;
@property (nonatomic) unsigned long long timeToConnectionStartMsecs;
@property (nonatomic) unsigned long long timeToDNSResolvedMsecs;
@property (nonatomic) unsigned long long timeToDNSStartMsecs;
@property (nonatomic) unsigned long long trafficClass;

- (unsigned long long)appDataStallTimerMsecs;
- (unsigned long long)appReportingDataStallCount;
- (unsigned long long)bestRTTMsecs;
- (unsigned long long)betterRouteEventCount;
- (unsigned long long)bytesDuplicate;
- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (unsigned long long)bytesOutOfOrder;
- (unsigned long long)bytesRetransmitted;
- (BOOL)cellularFallback;
- (BOOL)cellularRRCConnected;
- (BOOL)connected;
- (int)connectedInterfaceType;
- (unsigned long long)connectionEstablishmentTimeMsecs;
- (unsigned long long)connectionReuseCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRTTMsecs;
- (BOOL)dNSAnswersCached;
- (unsigned long long)dNSResolvedTimeMsecs;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)flowDurationMsecs;
- (BOOL)hasAppDataStallTimerMsecs;
- (BOOL)hasAppReportingDataStallCount;
- (BOOL)hasBestRTTMsecs;
- (BOOL)hasBetterRouteEventCount;
- (BOOL)hasBytesDuplicate;
- (BOOL)hasBytesIn;
- (BOOL)hasBytesOut;
- (BOOL)hasBytesOutOfOrder;
- (BOOL)hasBytesRetransmitted;
- (BOOL)hasCellularFallback;
- (BOOL)hasCellularRRCConnected;
- (BOOL)hasConnected;
- (BOOL)hasConnectedInterfaceType;
- (BOOL)hasConnectionEstablishmentTimeMsecs;
- (BOOL)hasConnectionReuseCount;
- (BOOL)hasCurrentRTTMsecs;
- (BOOL)hasDNSAnswersCached;
- (BOOL)hasDNSResolvedTimeMsecs;
- (BOOL)hasFlowDurationMsecs;
- (BOOL)hasIPAddressAttemptCount;
- (BOOL)hasInterfaceType;
- (BOOL)hasKernelReportedStalls;
- (BOOL)hasKernelReportingConnectionStalled;
- (BOOL)hasKernelReportingReadStalled;
- (BOOL)hasKernelReportingWriteStalled;
- (BOOL)hasPacketsDuplicate;
- (BOOL)hasPacketsIn;
- (BOOL)hasPacketsOut;
- (BOOL)hasPacketsOutOfOrder;
- (BOOL)hasPacketsRetransmitted;
- (BOOL)hasRTTvariance;
- (BOOL)hasSmoothedRTTMsecs;
- (BOOL)hasSynRetransmissionCount;
- (BOOL)hasTcpFastOpen;
- (BOOL)hasTimeToConnectionEstablishmentMsecs;
- (BOOL)hasTimeToConnectionStartMsecs;
- (BOOL)hasTimeToDNSResolvedMsecs;
- (BOOL)hasTimeToDNSStartMsecs;
- (BOOL)hasTrafficClass;
- (unsigned int)hash;
- (unsigned long long)iPAddressAttemptCount;
- (int)interfaceType;
- (BOOL)isEqual:(id)arg1;
- (BOOL)kernelReportedStalls;
- (BOOL)kernelReportingConnectionStalled;
- (BOOL)kernelReportingReadStalled;
- (BOOL)kernelReportingWriteStalled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)packetsDuplicate;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOut;
- (unsigned long long)packetsOutOfOrder;
- (unsigned long long)packetsRetransmitted;
- (unsigned long long)rTTvariance;
- (BOOL)readFrom:(id)arg1;
- (void)setAppDataStallTimerMsecs:(unsigned long long)arg1;
- (void)setAppReportingDataStallCount:(unsigned long long)arg1;
- (void)setBestRTTMsecs:(unsigned long long)arg1;
- (void)setBetterRouteEventCount:(unsigned long long)arg1;
- (void)setBytesDuplicate:(unsigned long long)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setBytesOutOfOrder:(unsigned long long)arg1;
- (void)setBytesRetransmitted:(unsigned long long)arg1;
- (void)setCellularFallback:(BOOL)arg1;
- (void)setCellularRRCConnected:(BOOL)arg1;
- (void)setConnected:(BOOL)arg1;
- (void)setConnectedInterfaceType:(int)arg1;
- (void)setConnectionEstablishmentTimeMsecs:(unsigned long long)arg1;
- (void)setConnectionReuseCount:(unsigned long long)arg1;
- (void)setCurrentRTTMsecs:(unsigned long long)arg1;
- (void)setDNSAnswersCached:(BOOL)arg1;
- (void)setDNSResolvedTimeMsecs:(unsigned long long)arg1;
- (void)setFlowDurationMsecs:(unsigned long long)arg1;
- (void)setHasAppDataStallTimerMsecs:(BOOL)arg1;
- (void)setHasAppReportingDataStallCount:(BOOL)arg1;
- (void)setHasBestRTTMsecs:(BOOL)arg1;
- (void)setHasBetterRouteEventCount:(BOOL)arg1;
- (void)setHasBytesDuplicate:(BOOL)arg1;
- (void)setHasBytesIn:(BOOL)arg1;
- (void)setHasBytesOut:(BOOL)arg1;
- (void)setHasBytesOutOfOrder:(BOOL)arg1;
- (void)setHasBytesRetransmitted:(BOOL)arg1;
- (void)setHasCellularFallback:(BOOL)arg1;
- (void)setHasCellularRRCConnected:(BOOL)arg1;
- (void)setHasConnected:(BOOL)arg1;
- (void)setHasConnectedInterfaceType:(BOOL)arg1;
- (void)setHasConnectionEstablishmentTimeMsecs:(BOOL)arg1;
- (void)setHasConnectionReuseCount:(BOOL)arg1;
- (void)setHasCurrentRTTMsecs:(BOOL)arg1;
- (void)setHasDNSAnswersCached:(BOOL)arg1;
- (void)setHasDNSResolvedTimeMsecs:(BOOL)arg1;
- (void)setHasFlowDurationMsecs:(BOOL)arg1;
- (void)setHasIPAddressAttemptCount:(BOOL)arg1;
- (void)setHasInterfaceType:(BOOL)arg1;
- (void)setHasKernelReportedStalls:(BOOL)arg1;
- (void)setHasKernelReportingConnectionStalled:(BOOL)arg1;
- (void)setHasKernelReportingReadStalled:(BOOL)arg1;
- (void)setHasKernelReportingWriteStalled:(BOOL)arg1;
- (void)setHasPacketsDuplicate:(BOOL)arg1;
- (void)setHasPacketsIn:(BOOL)arg1;
- (void)setHasPacketsOut:(BOOL)arg1;
- (void)setHasPacketsOutOfOrder:(BOOL)arg1;
- (void)setHasPacketsRetransmitted:(BOOL)arg1;
- (void)setHasRTTvariance:(BOOL)arg1;
- (void)setHasSmoothedRTTMsecs:(BOOL)arg1;
- (void)setHasSynRetransmissionCount:(BOOL)arg1;
- (void)setHasTcpFastOpen:(BOOL)arg1;
- (void)setHasTimeToConnectionEstablishmentMsecs:(BOOL)arg1;
- (void)setHasTimeToConnectionStartMsecs:(BOOL)arg1;
- (void)setHasTimeToDNSResolvedMsecs:(BOOL)arg1;
- (void)setHasTimeToDNSStartMsecs:(BOOL)arg1;
- (void)setHasTrafficClass:(BOOL)arg1;
- (void)setIPAddressAttemptCount:(unsigned long long)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setKernelReportedStalls:(BOOL)arg1;
- (void)setKernelReportingConnectionStalled:(BOOL)arg1;
- (void)setKernelReportingReadStalled:(BOOL)arg1;
- (void)setKernelReportingWriteStalled:(BOOL)arg1;
- (void)setPacketsDuplicate:(unsigned long long)arg1;
- (void)setPacketsIn:(unsigned long long)arg1;
- (void)setPacketsOut:(unsigned long long)arg1;
- (void)setPacketsOutOfOrder:(unsigned long long)arg1;
- (void)setPacketsRetransmitted:(unsigned long long)arg1;
- (void)setRTTvariance:(unsigned long long)arg1;
- (void)setSmoothedRTTMsecs:(unsigned long long)arg1;
- (void)setSynRetransmissionCount:(unsigned long long)arg1;
- (void)setTcpFastOpen:(BOOL)arg1;
- (void)setTimeToConnectionEstablishmentMsecs:(unsigned long long)arg1;
- (void)setTimeToConnectionStartMsecs:(unsigned long long)arg1;
- (void)setTimeToDNSResolvedMsecs:(unsigned long long)arg1;
- (void)setTimeToDNSStartMsecs:(unsigned long long)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (unsigned long long)smoothedRTTMsecs;
- (unsigned long long)synRetransmissionCount;
- (BOOL)tcpFastOpen;
- (unsigned long long)timeToConnectionEstablishmentMsecs;
- (unsigned long long)timeToConnectionStartMsecs;
- (unsigned long long)timeToDNSResolvedMsecs;
- (unsigned long long)timeToDNSStartMsecs;
- (unsigned long long)trafficClass;
- (void)writeTo:(id)arg1;

@end
