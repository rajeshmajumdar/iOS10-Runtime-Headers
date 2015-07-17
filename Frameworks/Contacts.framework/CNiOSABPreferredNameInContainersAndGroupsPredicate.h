/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPreferredNameInContainersAndGroupsPredicate : CNPredicate <CNiOSContactPredicate> {
    NSArray * _containerIdentifiers;
    NSArray * _groupIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *containerIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *groupIdentifiers;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned int)arg4 error:(struct __CFError {}**)arg5;
- (BOOL)cn_supportsNativeSorting;
- (id)containerIdentifiers;
- (void)dealloc;
- (id)description;
- (id)groupIdentifiers;
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;

@end
