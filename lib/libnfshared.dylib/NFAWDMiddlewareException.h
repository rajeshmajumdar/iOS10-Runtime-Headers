/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol> {
    AWDNFCMiddlewareExceptionEvent * _metric;
    unsigned int  errorCode;
    unsigned int  type;
    unsigned int  version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int errorCode;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) AWDNFCMiddlewareExceptionEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int version;

- (void)dealloc;
- (unsigned int)errorCode;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (id)metric;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateExceptionUUID:(id)arg1;
- (unsigned int)version;

@end
