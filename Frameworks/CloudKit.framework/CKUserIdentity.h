/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKUserIdentity : NSObject <NSSecureCoding> {
    NSString * _emailAddress;
    NSString * _firstName;
    BOOL  _hasiCloudAccount;
    BOOL  _hasiCloudAccountSupportingSharing;
    NSString * _lastName;
    NSData * _protectionData;
    CKRecordID * _userRecordID;
}

@property (nonatomic, copy) NSString *emailAddress;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) BOOL hasiCloudAccount;
@property (nonatomic) BOOL hasiCloudAccountSupportingSharing;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, copy) CKRecordID *userRecordID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_init;
- (id)ckShortDescription;
- (id)description;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned int)hash;
- (BOOL)hasiCloudAccount;
- (BOOL)hasiCloudAccountSupportingSharing;
- (id)initWithCoder:(id)arg1;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithUserRecordID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (id)localizedDisplayName;
- (id)protectionData;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHasiCloudAccount:(BOOL)arg1;
- (void)setHasiCloudAccountSupportingSharing:(BOOL)arg1;
- (void)setLastName:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setUserRecordID:(id)arg1;
- (id)userRecordID;

@end
