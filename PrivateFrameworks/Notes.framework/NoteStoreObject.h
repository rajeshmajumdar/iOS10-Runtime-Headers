/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteStoreObject : NoteCollectionObject

@property (nonatomic, retain) NoteAccountObject *account;
@property (nonatomic, retain) NSSet *changes;
@property (nonatomic, retain) NSString *externalIdentifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *syncAnchor;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)arg1;
- (id)notesForGUIDs:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)notesForServerIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1;
- (id)notesForServerIntIds:(id)arg1 ascending:(BOOL)arg2 limit:(unsigned int)arg3;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ascending:(BOOL)arg2 limit:(unsigned int)arg3;
- (id)predicateForNotes;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)noteVisibilityTestingForSearchingAccount;

@end
