/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiProxLeSendDataResult : PBCodable <NSCopying> {
    unsigned int  _dataLength;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataLength : 1; 
        unsigned int result : 1; 
    }  _has;
    NSString * _peerId;
    unsigned int  _result;
    NSString * _resultString;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int dataLength;
@property (nonatomic) BOOL hasDataLength;
@property (nonatomic, readonly) BOOL hasPeerId;
@property (nonatomic) BOOL hasResult;
@property (nonatomic, readonly) BOOL hasResultString;
@property (nonatomic, readonly) BOOL hasSessionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, retain) NSString *peerId;
@property (nonatomic) unsigned int result;
@property (nonatomic, retain) NSString *resultString;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataLength;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataLength;
- (BOOL)hasPeerId;
- (BOOL)hasResult;
- (BOOL)hasResultString;
- (BOOL)hasSessionId;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerId;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)result;
- (id)resultString;
- (id)sessionId;
- (void)setDataLength:(unsigned int)arg1;
- (void)setHasDataLength:(BOOL)arg1;
- (void)setHasResult:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setPeerId:(id)arg1;
- (void)setResult:(unsigned int)arg1;
- (void)setResultString:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
