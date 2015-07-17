/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricActiveProbeStats : PBCodable <NSCopying> {
    unsigned int  _avgRTTLargePktSize;
    unsigned int  _avgRTTMediumPktSize;
    unsigned int  _avgRTTSmallPktSize;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int avgRTTLargePktSize : 1; 
        unsigned int avgRTTMediumPktSize : 1; 
        unsigned int avgRTTSmallPktSize : 1; 
        unsigned int maxRTTLargePktSize : 1; 
        unsigned int maxRTTMediumPktSize : 1; 
        unsigned int maxRTTSmallPktSize : 1; 
        unsigned int minRTTLargePktSize : 1; 
        unsigned int minRTTMediumPktSize : 1; 
        unsigned int minRTTSmallPktSize : 1; 
        unsigned int perLargePktSize : 1; 
        unsigned int perMediumPktSize : 1; 
        unsigned int perSmallPktSize : 1; 
    }  _has;
    unsigned int  _maxRTTLargePktSize;
    unsigned int  _maxRTTMediumPktSize;
    unsigned int  _maxRTTSmallPktSize;
    unsigned int  _minRTTLargePktSize;
    unsigned int  _minRTTMediumPktSize;
    unsigned int  _minRTTSmallPktSize;
    unsigned int  _perLargePktSize;
    unsigned int  _perMediumPktSize;
    unsigned int  _perSmallPktSize;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int avgRTTLargePktSize;
@property (nonatomic) unsigned int avgRTTMediumPktSize;
@property (nonatomic) unsigned int avgRTTSmallPktSize;
@property (nonatomic) BOOL hasAvgRTTLargePktSize;
@property (nonatomic) BOOL hasAvgRTTMediumPktSize;
@property (nonatomic) BOOL hasAvgRTTSmallPktSize;
@property (nonatomic) BOOL hasMaxRTTLargePktSize;
@property (nonatomic) BOOL hasMaxRTTMediumPktSize;
@property (nonatomic) BOOL hasMaxRTTSmallPktSize;
@property (nonatomic) BOOL hasMinRTTLargePktSize;
@property (nonatomic) BOOL hasMinRTTMediumPktSize;
@property (nonatomic) BOOL hasMinRTTSmallPktSize;
@property (nonatomic) BOOL hasPerLargePktSize;
@property (nonatomic) BOOL hasPerMediumPktSize;
@property (nonatomic) BOOL hasPerSmallPktSize;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int maxRTTLargePktSize;
@property (nonatomic) unsigned int maxRTTMediumPktSize;
@property (nonatomic) unsigned int maxRTTSmallPktSize;
@property (nonatomic) unsigned int minRTTLargePktSize;
@property (nonatomic) unsigned int minRTTMediumPktSize;
@property (nonatomic) unsigned int minRTTSmallPktSize;
@property (nonatomic) unsigned int perLargePktSize;
@property (nonatomic) unsigned int perMediumPktSize;
@property (nonatomic) unsigned int perSmallPktSize;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)avgRTTLargePktSize;
- (unsigned int)avgRTTMediumPktSize;
- (unsigned int)avgRTTSmallPktSize;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAvgRTTLargePktSize;
- (BOOL)hasAvgRTTMediumPktSize;
- (BOOL)hasAvgRTTSmallPktSize;
- (BOOL)hasMaxRTTLargePktSize;
- (BOOL)hasMaxRTTMediumPktSize;
- (BOOL)hasMaxRTTSmallPktSize;
- (BOOL)hasMinRTTLargePktSize;
- (BOOL)hasMinRTTMediumPktSize;
- (BOOL)hasMinRTTSmallPktSize;
- (BOOL)hasPerLargePktSize;
- (BOOL)hasPerMediumPktSize;
- (BOOL)hasPerSmallPktSize;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxRTTLargePktSize;
- (unsigned int)maxRTTMediumPktSize;
- (unsigned int)maxRTTSmallPktSize;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minRTTLargePktSize;
- (unsigned int)minRTTMediumPktSize;
- (unsigned int)minRTTSmallPktSize;
- (unsigned int)perLargePktSize;
- (unsigned int)perMediumPktSize;
- (unsigned int)perSmallPktSize;
- (BOOL)readFrom:(id)arg1;
- (void)setAvgRTTLargePktSize:(unsigned int)arg1;
- (void)setAvgRTTMediumPktSize:(unsigned int)arg1;
- (void)setAvgRTTSmallPktSize:(unsigned int)arg1;
- (void)setHasAvgRTTLargePktSize:(BOOL)arg1;
- (void)setHasAvgRTTMediumPktSize:(BOOL)arg1;
- (void)setHasAvgRTTSmallPktSize:(BOOL)arg1;
- (void)setHasMaxRTTLargePktSize:(BOOL)arg1;
- (void)setHasMaxRTTMediumPktSize:(BOOL)arg1;
- (void)setHasMaxRTTSmallPktSize:(BOOL)arg1;
- (void)setHasMinRTTLargePktSize:(BOOL)arg1;
- (void)setHasMinRTTMediumPktSize:(BOOL)arg1;
- (void)setHasMinRTTSmallPktSize:(BOOL)arg1;
- (void)setHasPerLargePktSize:(BOOL)arg1;
- (void)setHasPerMediumPktSize:(BOOL)arg1;
- (void)setHasPerSmallPktSize:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMaxRTTLargePktSize:(unsigned int)arg1;
- (void)setMaxRTTMediumPktSize:(unsigned int)arg1;
- (void)setMaxRTTSmallPktSize:(unsigned int)arg1;
- (void)setMinRTTLargePktSize:(unsigned int)arg1;
- (void)setMinRTTMediumPktSize:(unsigned int)arg1;
- (void)setMinRTTSmallPktSize:(unsigned int)arg1;
- (void)setPerLargePktSize:(unsigned int)arg1;
- (void)setPerMediumPktSize:(unsigned int)arg1;
- (void)setPerSmallPktSize:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
