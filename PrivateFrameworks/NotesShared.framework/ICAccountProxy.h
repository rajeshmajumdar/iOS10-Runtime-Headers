/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICAccountProxy : NSObject <ICNoteContainer> {
    ICAccount * _account;
}

@property (retain) ICAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)accountProxyWithAccount:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)accountName;
- (int)compare:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (BOOL)isLeaf;
- (BOOL)noteIsVisible:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleNotes;
- (void)setAccount:(id)arg1;
- (BOOL)supportsEditingNotes;
- (BOOL)supportsVisibilityTestingType:(int)arg1;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (id)visibleNoteContainerChildren;
- (id)visibleNotes;
- (unsigned int)visibleNotesCount;

@end
