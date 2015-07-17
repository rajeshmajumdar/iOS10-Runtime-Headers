/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAccount : NSObject <NSCopying> {
    NSMutableDictionary * _accountProperties;
}

@property (nonatomic, copy) NSString *authenticationSecret;
@property (nonatomic, copy) NSString *authenticationToken;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *preferredPageIdentifier;
@property (getter=isRegistered, nonatomic) BOOL registered;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSString *userName;

- (void).cxx_destruct;
- (id)_keychainPassword;
- (id)authenticationSecret;
- (id)authenticationToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fullName;
- (unsigned int)hash;
- (id)init;
- (id)initWithACAccount:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRegistered;
- (id)password;
- (id)preferredPageIdentifier;
- (BOOL)removeFromKeychain;
- (BOOL)saveToKeychain;
- (id)serviceIdentifier;
- (void)setAuthenticationSecret:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFullName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPreferredPageIdentifier:(id)arg1;
- (void)setRegistered:(BOOL)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)updateWithACAccount:(id)arg1;
- (id)userName;
- (id)valueForProperty:(id)arg1;

@end
