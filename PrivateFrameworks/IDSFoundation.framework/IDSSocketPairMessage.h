/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairMessage : NSObject {
    unsigned char  _command;
    <NSObject> * _context;
    NSString * _topic;
    NSData * _underlyingData;
    BOOL  _useDynamicServiceName;
}

@property (nonatomic, readonly) unsigned char command;
@property (nonatomic, retain) <NSObject> *context;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, readonly, retain) NSData *underlyingData;
@property (nonatomic, readonly) unsigned int underlyingDataLength;
@property (nonatomic) BOOL useDynamicServiceName;

+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;

- (id)_existingUnderlyingData;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)context;
- (void)dealloc;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUseDynamicServiceName:(BOOL)arg1;
- (id)topic;
- (id)underlyingData;
- (unsigned int)underlyingDataLength;
- (BOOL)useDynamicServiceName;

@end
