/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSPerson : NSObject <CSCoderEncoder, NSCopying, NSSecureCoding> {
    NSString * _contactIdentifier;
    NSString * _displayName;
    NSString * _handleIdentifier;
    NSArray * _handles;
}

@property (copy) NSString *contactIdentifier;
@property (retain) NSString *displayName;
@property (retain) NSString *handleIdentifier;
@property (retain) NSArray *handles;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handleIdentifier;
- (id)handles;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 handles:(id)arg2 handleIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHandleIdentifier:(id)arg1;
- (void)setHandles:(id)arg1;

@end
