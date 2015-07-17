/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDTSMStart : NSObject <NFAWDEventProtocol> {
    AWDNFCTSMStartEvent * _metric;
    unsigned int  memoryIndexTable;
    unsigned int  memoryPersistent;
    unsigned int  memoryTransientDeselect;
    unsigned int  memoryTransientReset;
    NSString * url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int memoryIndexTable;
@property (nonatomic) unsigned int memoryPersistent;
@property (nonatomic) unsigned int memoryTransientDeselect;
@property (nonatomic) unsigned int memoryTransientReset;
@property (nonatomic, retain) AWDNFCTSMStartEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *url;

- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (unsigned int)memoryIndexTable;
- (unsigned int)memoryPersistent;
- (unsigned int)memoryTransientDeselect;
- (unsigned int)memoryTransientReset;
- (id)metric;
- (void)setMemoryIndexTable:(unsigned int)arg1;
- (void)setMemoryPersistent:(unsigned int)arg1;
- (void)setMemoryTransientDeselect:(unsigned int)arg1;
- (void)setMemoryTransientReset:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (id)url;

@end
