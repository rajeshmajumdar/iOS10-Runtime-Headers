/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLQMDataTransfer : PBCodable <NSCopying> {
    NSString * _bundleName;
    struct { 
        unsigned int lQM : 1; 
        unsigned int rxBytes : 1; 
        unsigned int stateDuration : 1; 
        unsigned int txBytes : 1; 
    }  _has;
    int  _lQM;
    unsigned int  _rxBytes;
    unsigned int  _stateDuration;
    unsigned int  _txBytes;
}

@property (nonatomic, retain) NSString *bundleName;
@property (nonatomic, readonly) BOOL hasBundleName;
@property (nonatomic) BOOL hasLQM;
@property (nonatomic) BOOL hasRxBytes;
@property (nonatomic) BOOL hasStateDuration;
@property (nonatomic) BOOL hasTxBytes;
@property (nonatomic) int lQM;
@property (nonatomic) unsigned int rxBytes;
@property (nonatomic) unsigned int stateDuration;
@property (nonatomic) unsigned int txBytes;

- (id)bundleName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBundleName;
- (BOOL)hasLQM;
- (BOOL)hasRxBytes;
- (BOOL)hasStateDuration;
- (BOOL)hasTxBytes;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)lQM;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)rxBytes;
- (void)setBundleName:(id)arg1;
- (void)setHasLQM:(BOOL)arg1;
- (void)setHasRxBytes:(BOOL)arg1;
- (void)setHasStateDuration:(BOOL)arg1;
- (void)setHasTxBytes:(BOOL)arg1;
- (void)setLQM:(int)arg1;
- (void)setRxBytes:(unsigned int)arg1;
- (void)setStateDuration:(unsigned int)arg1;
- (void)setTxBytes:(unsigned int)arg1;
- (unsigned int)stateDuration;
- (unsigned int)txBytes;
- (void)writeTo:(id)arg1;

@end
