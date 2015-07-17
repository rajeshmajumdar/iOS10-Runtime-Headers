/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBProtobufSequenceNumberManager : NSObject {
    BLTCircularBitBuffer * _duplicateEntries;
    BOOL  _isInitialSendSequenceNumber;
    unsigned long long  _recvSequenceNumber;
    unsigned long long  _sendSequenceNumber;
    NSLock * _sequenceNumberAccess;
    NSString * _serviceName;
}

@property (nonatomic) BOOL isInitialSendSequenceNumber;
@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (BOOL)_isSequenceNumberInOrder:(unsigned long long)arg1;
- (void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned int)arg1;
- (id)_sequenceNumbersURL;
- (void)_writeSequenceNumbersToStore;
- (id)initWithServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1 duplicateCapacity:(unsigned int)arg2;
- (BOOL)isInitialSendSequenceNumber;
- (unsigned long long)nextSendSequenceNumber;
- (id)serviceName;
- (void)setIsInitialSendSequenceNumber:(BOOL)arg1;
- (int)setRecvSequenceNumber:(unsigned long long)arg1 force:(BOOL)arg2;

@end
