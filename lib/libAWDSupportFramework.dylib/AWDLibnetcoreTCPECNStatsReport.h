/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreTCPECNStatsReport : PBCodable <NSCopying> {
    struct { 
        unsigned int tcpECNClientSetup : 1; 
        unsigned int tcpECNClientSuccess : 1; 
        unsigned int tcpECNConnNoPacketLossCE : 1; 
        unsigned int tcpECNConnPacketLossCE : 1; 
        unsigned int tcpECNConnPacketLossNoCE : 1; 
        unsigned int tcpECNConnRecvCE : 1; 
        unsigned int tcpECNConnRecvECE : 1; 
        unsigned int tcpECNNotSupportedPeer : 1; 
        unsigned int tcpECNRecvCE : 1; 
        unsigned int tcpECNRecvECE : 1; 
        unsigned int tcpECNSentECE : 1; 
        unsigned int tcpECNServerSetup : 1; 
        unsigned int tcpECNServerSuccess : 1; 
        unsigned int tcpECNSynAckLost : 1; 
        unsigned int tcpECNSynLost : 1; 
        unsigned int tcpECNClientNegotiationEnabled : 1; 
        unsigned int tcpECNServerNegotiationEnabled : 1; 
    }  _has;
    BOOL  _tcpECNClientNegotiationEnabled;
    unsigned long long  _tcpECNClientSetup;
    unsigned long long  _tcpECNClientSuccess;
    unsigned long long  _tcpECNConnNoPacketLossCE;
    unsigned long long  _tcpECNConnPacketLossCE;
    unsigned long long  _tcpECNConnPacketLossNoCE;
    unsigned long long  _tcpECNConnRecvCE;
    unsigned long long  _tcpECNConnRecvECE;
    unsigned long long  _tcpECNNotSupportedPeer;
    unsigned long long  _tcpECNRecvCE;
    unsigned long long  _tcpECNRecvECE;
    unsigned long long  _tcpECNSentECE;
    BOOL  _tcpECNServerNegotiationEnabled;
    unsigned long long  _tcpECNServerSetup;
    unsigned long long  _tcpECNServerSuccess;
    unsigned long long  _tcpECNSynAckLost;
    unsigned long long  _tcpECNSynLost;
}

@property (nonatomic) BOOL hasTcpECNClientNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNClientSetup;
@property (nonatomic) BOOL hasTcpECNClientSuccess;
@property (nonatomic) BOOL hasTcpECNConnNoPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossCE;
@property (nonatomic) BOOL hasTcpECNConnPacketLossNoCE;
@property (nonatomic) BOOL hasTcpECNConnRecvCE;
@property (nonatomic) BOOL hasTcpECNConnRecvECE;
@property (nonatomic) BOOL hasTcpECNNotSupportedPeer;
@property (nonatomic) BOOL hasTcpECNRecvCE;
@property (nonatomic) BOOL hasTcpECNRecvECE;
@property (nonatomic) BOOL hasTcpECNSentECE;
@property (nonatomic) BOOL hasTcpECNServerNegotiationEnabled;
@property (nonatomic) BOOL hasTcpECNServerSetup;
@property (nonatomic) BOOL hasTcpECNServerSuccess;
@property (nonatomic) BOOL hasTcpECNSynAckLost;
@property (nonatomic) BOOL hasTcpECNSynLost;
@property (nonatomic) BOOL tcpECNClientNegotiationEnabled;
@property (nonatomic) unsigned long long tcpECNClientSetup;
@property (nonatomic) unsigned long long tcpECNClientSuccess;
@property (nonatomic) unsigned long long tcpECNConnNoPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossCE;
@property (nonatomic) unsigned long long tcpECNConnPacketLossNoCE;
@property (nonatomic) unsigned long long tcpECNConnRecvCE;
@property (nonatomic) unsigned long long tcpECNConnRecvECE;
@property (nonatomic) unsigned long long tcpECNNotSupportedPeer;
@property (nonatomic) unsigned long long tcpECNRecvCE;
@property (nonatomic) unsigned long long tcpECNRecvECE;
@property (nonatomic) unsigned long long tcpECNSentECE;
@property (nonatomic) BOOL tcpECNServerNegotiationEnabled;
@property (nonatomic) unsigned long long tcpECNServerSetup;
@property (nonatomic) unsigned long long tcpECNServerSuccess;
@property (nonatomic) unsigned long long tcpECNSynAckLost;
@property (nonatomic) unsigned long long tcpECNSynLost;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTcpECNClientNegotiationEnabled;
- (BOOL)hasTcpECNClientSetup;
- (BOOL)hasTcpECNClientSuccess;
- (BOOL)hasTcpECNConnNoPacketLossCE;
- (BOOL)hasTcpECNConnPacketLossCE;
- (BOOL)hasTcpECNConnPacketLossNoCE;
- (BOOL)hasTcpECNConnRecvCE;
- (BOOL)hasTcpECNConnRecvECE;
- (BOOL)hasTcpECNNotSupportedPeer;
- (BOOL)hasTcpECNRecvCE;
- (BOOL)hasTcpECNRecvECE;
- (BOOL)hasTcpECNSentECE;
- (BOOL)hasTcpECNServerNegotiationEnabled;
- (BOOL)hasTcpECNServerSetup;
- (BOOL)hasTcpECNServerSuccess;
- (BOOL)hasTcpECNSynAckLost;
- (BOOL)hasTcpECNSynLost;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTcpECNClientNegotiationEnabled:(BOOL)arg1;
- (void)setHasTcpECNClientSetup:(BOOL)arg1;
- (void)setHasTcpECNClientSuccess:(BOOL)arg1;
- (void)setHasTcpECNConnNoPacketLossCE:(BOOL)arg1;
- (void)setHasTcpECNConnPacketLossCE:(BOOL)arg1;
- (void)setHasTcpECNConnPacketLossNoCE:(BOOL)arg1;
- (void)setHasTcpECNConnRecvCE:(BOOL)arg1;
- (void)setHasTcpECNConnRecvECE:(BOOL)arg1;
- (void)setHasTcpECNNotSupportedPeer:(BOOL)arg1;
- (void)setHasTcpECNRecvCE:(BOOL)arg1;
- (void)setHasTcpECNRecvECE:(BOOL)arg1;
- (void)setHasTcpECNSentECE:(BOOL)arg1;
- (void)setHasTcpECNServerNegotiationEnabled:(BOOL)arg1;
- (void)setHasTcpECNServerSetup:(BOOL)arg1;
- (void)setHasTcpECNServerSuccess:(BOOL)arg1;
- (void)setHasTcpECNSynAckLost:(BOOL)arg1;
- (void)setHasTcpECNSynLost:(BOOL)arg1;
- (void)setTcpECNClientNegotiationEnabled:(BOOL)arg1;
- (void)setTcpECNClientSetup:(unsigned long long)arg1;
- (void)setTcpECNClientSuccess:(unsigned long long)arg1;
- (void)setTcpECNConnNoPacketLossCE:(unsigned long long)arg1;
- (void)setTcpECNConnPacketLossCE:(unsigned long long)arg1;
- (void)setTcpECNConnPacketLossNoCE:(unsigned long long)arg1;
- (void)setTcpECNConnRecvCE:(unsigned long long)arg1;
- (void)setTcpECNConnRecvECE:(unsigned long long)arg1;
- (void)setTcpECNNotSupportedPeer:(unsigned long long)arg1;
- (void)setTcpECNRecvCE:(unsigned long long)arg1;
- (void)setTcpECNRecvECE:(unsigned long long)arg1;
- (void)setTcpECNSentECE:(unsigned long long)arg1;
- (void)setTcpECNServerNegotiationEnabled:(BOOL)arg1;
- (void)setTcpECNServerSetup:(unsigned long long)arg1;
- (void)setTcpECNServerSuccess:(unsigned long long)arg1;
- (void)setTcpECNSynAckLost:(unsigned long long)arg1;
- (void)setTcpECNSynLost:(unsigned long long)arg1;
- (BOOL)tcpECNClientNegotiationEnabled;
- (unsigned long long)tcpECNClientSetup;
- (unsigned long long)tcpECNClientSuccess;
- (unsigned long long)tcpECNConnNoPacketLossCE;
- (unsigned long long)tcpECNConnPacketLossCE;
- (unsigned long long)tcpECNConnPacketLossNoCE;
- (unsigned long long)tcpECNConnRecvCE;
- (unsigned long long)tcpECNConnRecvECE;
- (unsigned long long)tcpECNNotSupportedPeer;
- (unsigned long long)tcpECNRecvCE;
- (unsigned long long)tcpECNRecvECE;
- (unsigned long long)tcpECNSentECE;
- (BOOL)tcpECNServerNegotiationEnabled;
- (unsigned long long)tcpECNServerSetup;
- (unsigned long long)tcpECNServerSuccess;
- (unsigned long long)tcpECNSynAckLost;
- (unsigned long long)tcpECNSynLost;
- (void)writeTo:(id)arg1;

@end
