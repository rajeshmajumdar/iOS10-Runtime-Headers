/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCEmailAccountPayloadBase : MCPayload {
    BOOL  _SMIMEEnabled;
    NSNumber * _SMIMEEnabledNum;
    NSData * _SMIMEEncryptionIdentityPersistentID;
    NSString * _SMIMEEncryptionIdentityUUID;
    BOOL  _SMIMEPerMessageSwitchEnabled;
    NSNumber * _SMIMEPerMessageSwitchEnabledNum;
    NSData * _SMIMESigningIdentityPersistentID;
    NSString * _SMIMESigningIdentityUUID;
    BOOL  _isMailDropEnabled;
    NSNumber * _isMailDropEnabledNum;
    BOOL  _isRecentsSyncingDisabled;
    NSNumber * _isRecentsSyncingDisabledNum;
    BOOL  _preventAppSheet;
    NSNumber * _preventAppSheetNum;
    BOOL  _preventMove;
    NSNumber * _preventMoveNum;
}

@property (nonatomic) BOOL SMIMEEnabled;
@property (nonatomic, retain) NSNumber *SMIMEEnabledNum;
@property (nonatomic, retain) NSData *SMIMEEncryptionIdentityPersistentID;
@property (nonatomic, retain) NSString *SMIMEEncryptionIdentityUUID;
@property (nonatomic) BOOL SMIMEPerMessageSwitchEnabled;
@property (nonatomic, retain) NSNumber *SMIMEPerMessageSwitchEnabledNum;
@property (nonatomic, retain) NSData *SMIMESigningIdentityPersistentID;
@property (nonatomic, retain) NSString *SMIMESigningIdentityUUID;
@property (nonatomic) BOOL isMailDropEnabled;
@property (nonatomic, retain) NSNumber *isMailDropEnabledNum;
@property (nonatomic) BOOL isRecentsSyncingDisabled;
@property (nonatomic, retain) NSNumber *isRecentsSyncingDisabledNum;
@property (nonatomic) BOOL preventAppSheet;
@property (nonatomic, retain) NSNumber *preventAppSheetNum;
@property (nonatomic) BOOL preventMove;
@property (nonatomic, retain) NSNumber *preventMoveNum;

- (void).cxx_destruct;
- (BOOL)SMIMEEnabled;
- (id)SMIMEEnabledNum;
- (id)SMIMEEncryptionIdentityPersistentID;
- (id)SMIMEEncryptionIdentityUUID;
- (BOOL)SMIMEPerMessageSwitchEnabled;
- (id)SMIMEPerMessageSwitchEnabledNum;
- (id)SMIMESigningIdentityPersistentID;
- (id)SMIMESigningIdentityUUID;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (BOOL)isMailDropEnabled;
- (id)isMailDropEnabledNum;
- (BOOL)isRecentsSyncingDisabled;
- (id)isRecentsSyncingDisabledNum;
- (id)payloadDescriptionKeyValueSections;
- (BOOL)preventAppSheet;
- (id)preventAppSheetNum;
- (BOOL)preventMove;
- (id)preventMoveNum;
- (void)setIsMailDropEnabled:(BOOL)arg1;
- (void)setIsMailDropEnabledNum:(id)arg1;
- (void)setIsRecentsSyncingDisabled:(BOOL)arg1;
- (void)setIsRecentsSyncingDisabledNum:(id)arg1;
- (void)setPreventAppSheet:(BOOL)arg1;
- (void)setPreventAppSheetNum:(id)arg1;
- (void)setPreventMove:(BOOL)arg1;
- (void)setPreventMoveNum:(id)arg1;
- (void)setSMIMEEnabled:(BOOL)arg1;
- (void)setSMIMEEnabledNum:(id)arg1;
- (void)setSMIMEEncryptionIdentityPersistentID:(id)arg1;
- (void)setSMIMEEncryptionIdentityUUID:(id)arg1;
- (void)setSMIMEPerMessageSwitchEnabled:(BOOL)arg1;
- (void)setSMIMEPerMessageSwitchEnabledNum:(id)arg1;
- (void)setSMIMESigningIdentityPersistentID:(id)arg1;
- (void)setSMIMESigningIdentityUUID:(id)arg1;
- (id)stubDictionary;

@end
