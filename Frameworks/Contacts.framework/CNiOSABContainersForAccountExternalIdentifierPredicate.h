/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABContainersForAccountExternalIdentifierPredicate : CNPredicate <CNiOSContainerPredicate> {
    NSString * _accountExternalIdentifier;
}

@property (nonatomic, readonly, copy) NSString *accountExternalIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)accountExternalIdentifier;
- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (void)dealloc;
- (id)description;
- (BOOL)includesDisabledContainers;
- (id)initWithAccountExternalIdentifier:(id)arg1;

@end
