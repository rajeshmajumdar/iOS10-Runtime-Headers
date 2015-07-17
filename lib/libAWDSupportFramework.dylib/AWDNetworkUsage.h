/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkUsage : PBCodable <NSCopying> {
    NSString * _bundleName;
    unsigned long long  _cellIn;
    unsigned long long  _cellOut;
    struct { 
        unsigned int cellIn : 1; 
        unsigned int cellOut : 1; 
        unsigned int wifiIn : 1; 
        unsigned int wifiOut : 1; 
        unsigned int numConnections : 1; 
    }  _has;
    unsigned int  _numConnections;
    unsigned long long  _wifiIn;
    unsigned long long  _wifiOut;
}

@property (nonatomic, retain) NSString *bundleName;
@property (nonatomic) unsigned long long cellIn;
@property (nonatomic) unsigned long long cellOut;
@property (nonatomic, readonly) BOOL hasBundleName;
@property (nonatomic) BOOL hasCellIn;
@property (nonatomic) BOOL hasCellOut;
@property (nonatomic) BOOL hasNumConnections;
@property (nonatomic) BOOL hasWifiIn;
@property (nonatomic) BOOL hasWifiOut;
@property (nonatomic) unsigned int numConnections;
@property (nonatomic) unsigned long long wifiIn;
@property (nonatomic) unsigned long long wifiOut;

- (id)bundleName;
- (unsigned long long)cellIn;
- (unsigned long long)cellOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBundleName;
- (BOOL)hasCellIn;
- (BOOL)hasCellOut;
- (BOOL)hasNumConnections;
- (BOOL)hasWifiIn;
- (BOOL)hasWifiOut;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numConnections;
- (BOOL)readFrom:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setCellIn:(unsigned long long)arg1;
- (void)setCellOut:(unsigned long long)arg1;
- (void)setHasCellIn:(BOOL)arg1;
- (void)setHasCellOut:(BOOL)arg1;
- (void)setHasNumConnections:(BOOL)arg1;
- (void)setHasWifiIn:(BOOL)arg1;
- (void)setHasWifiOut:(BOOL)arg1;
- (void)setNumConnections:(unsigned int)arg1;
- (void)setWifiIn:(unsigned long long)arg1;
- (void)setWifiOut:(unsigned long long)arg1;
- (unsigned long long)wifiIn;
- (unsigned long long)wifiOut;
- (void)writeTo:(id)arg1;

@end
