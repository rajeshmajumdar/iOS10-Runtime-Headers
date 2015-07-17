/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _messageId;
    NSString * _source;
}

@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSString *source;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMailMessageKey:(id)arg1;
- (id)messageId;
- (id)source;

@end
