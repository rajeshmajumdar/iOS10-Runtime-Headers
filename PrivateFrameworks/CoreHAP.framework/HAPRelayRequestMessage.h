/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayRequestMessage : NSObject {
    NSData * _body;
    NSUUID * _identifier;
    HAPBlockOperation * _operation;
    unsigned char  _sequence;
    double  _timeout;
    unsigned int  _type;
}

@property (nonatomic, readonly, copy) NSData *body;
@property (getter=isEncrypted, nonatomic, readonly) BOOL encrypted;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) HAPBlockOperation *operation;
@property (nonatomic) unsigned char sequence;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)body;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithRequestData:(id)arg1 messageType:(unsigned int)arg2 timeout:(double)arg3;
- (BOOL)isEncrypted;
- (BOOL)isEqual:(id)arg1;
- (id)operation;
- (unsigned char)sequence;
- (void)setIdentifier:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setSequence:(unsigned char)arg1;
- (double)timeout;
- (unsigned int)type;

@end