/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBTransportData : PBCodable <NSCopying> {
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int isInitialSequenceNumber : 1; 
    }  _has;
    BOOL  _isInitialSequenceNumber;
    unsigned long long  _sequenceNumber;
}

@property (nonatomic) BOOL hasIsInitialSequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL isInitialSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsInitialSequenceNumber;
- (BOOL)hasSequenceNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInitialSequenceNumber;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)sequenceNumber;
- (void)setHasIsInitialSequenceNumber:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setIsInitialSequenceNumber:(BOOL)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
