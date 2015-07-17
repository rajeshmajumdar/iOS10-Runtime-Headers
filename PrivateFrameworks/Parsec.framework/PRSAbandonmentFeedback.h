/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSAbandonmentFeedback : PRSFeedback {
    unsigned int  _method;
}

@property (nonatomic, readonly) unsigned int method;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2 method:(unsigned int)arg3;
- (unsigned int)method;
- (id)plist;
- (id)type;

@end
