/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSymptomsNetworkAnalyticsDNSRestored : PBCodable <NSCopying> {
    unsigned int  _dnsServers;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dnsServers : 1; 
        unsigned int networkType : 1; 
    }  _has;
    int  _networkType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int dnsServers;
@property (nonatomic) BOOL hasDnsServers;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int networkType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dnsServers;
- (BOOL)hasDnsServers;
- (BOOL)hasNetworkType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)networkType;
- (BOOL)readFrom:(id)arg1;
- (void)setDnsServers:(unsigned int)arg1;
- (void)setHasDnsServers:(BOOL)arg1;
- (void)setHasNetworkType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNetworkType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
