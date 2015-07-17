/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoRegistryPairingAttemptReport : PBCodable <NSCopying> {
    NSString * _abortPairingReason;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int incorrectPINcount : 1; 
        unsigned int pairingType : 1; 
        unsigned int reason : 1; 
        unsigned int subreason : 1; 
        unsigned int isAutomated : 1; 
    }  _has;
    unsigned int  _incorrectPINcount;
    BOOL  _isAutomated;
    unsigned int  _pairingType;
    NSString * _processName;
    unsigned int  _reason;
    unsigned int  _subreason;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *abortPairingReason;
@property (nonatomic, readonly) BOOL hasAbortPairingReason;
@property (nonatomic) BOOL hasIncorrectPINcount;
@property (nonatomic) BOOL hasIsAutomated;
@property (nonatomic) BOOL hasPairingType;
@property (nonatomic, readonly) BOOL hasProcessName;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasSubreason;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int incorrectPINcount;
@property (nonatomic) BOOL isAutomated;
@property (nonatomic) unsigned int pairingType;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) unsigned long long timestamp;

- (id)abortPairingReason;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAbortPairingReason;
- (BOOL)hasIncorrectPINcount;
- (BOOL)hasIsAutomated;
- (BOOL)hasPairingType;
- (BOOL)hasProcessName;
- (BOOL)hasReason;
- (BOOL)hasSubreason;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (unsigned int)incorrectPINcount;
- (BOOL)isAutomated;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)pairingType;
- (id)processName;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setAbortPairingReason:(id)arg1;
- (void)setHasIncorrectPINcount:(BOOL)arg1;
- (void)setHasIsAutomated:(BOOL)arg1;
- (void)setHasPairingType:(BOOL)arg1;
- (void)setHasReason:(BOOL)arg1;
- (void)setHasSubreason:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIncorrectPINcount:(unsigned int)arg1;
- (void)setIsAutomated:(BOOL)arg1;
- (void)setPairingType:(unsigned int)arg1;
- (void)setProcessName:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
