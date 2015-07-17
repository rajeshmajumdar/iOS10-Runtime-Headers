/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABPreferredNameContactsPredicate : CNPredicate <CNiOSContactPredicate> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property (readonly) Class superclass;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned int)arg4 error:(struct __CFError {}**)arg5;
- (BOOL)cn_supportsNativeSorting;
- (id)description;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
