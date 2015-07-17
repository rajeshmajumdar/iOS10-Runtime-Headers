/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <UITableViewDataSource, UITableViewDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {
    BOOL  _addingBookmark;
    BOOL  _addingToFavorites;
    SFBookmarkTextEntryTableViewCell * _addressCell;
    WebBookmark * _bookmark;
    WebBookmarkCollection * _collection;
    <_SFBookmarkInfoViewControllerDelegate> * _delegate;
    BOOL  _didSelectFolder;
    unsigned int  _editingField;
    BOOL  _folderPickerExpanded;
    NSArray * _folders;
    _SFSiteIconView * _iconImageView;
    WebBookmark * _parentBookmark;
    BOOL  _saveWhenDismissed;
    int  _selectedFolderIndex;
    SFBookmarkTextEntryTableViewCell * _titleCell;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFBookmarkInfoViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActionsForTextFields;
- (void)_bookmarksDidReload:(id)arg1;
- (BOOL)_canEditFieldsInCurrentViewController;
- (struct CGPoint { float x1; float x2; })_centerForIconView;
- (void)_createCellsIfNeeded;
- (void)_didBeginEditingTextField:(id)arg1;
- (void)_didChangeEditingTextField:(id)arg1;
- (void)_editField:(unsigned int)arg1;
- (void)_reloadData;
- (void)_reloadFolderInfoForced:(BOOL)arg1;
- (void)_removeActionsForTextFields;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)_saveButtonPressed;
- (void)_setFolderPickerExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_titleCell;
- (void)_updateCellValues;
- (void)_updateIconViewFrame;
- (void)_updateSaveButton;
- (void)_valuesChanged;
- (id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1;
- (id)bookmark;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (BOOL)canSaveChanges;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (BOOL)hasTranslucentAppearance;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4 willBeDisplayedModally:(BOOL)arg5;
- (id)initWithBookmarkForFavorites:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3;
- (BOOL)isEditingField;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)saveChanges;
- (void)setBookmark:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (BOOL)titleCellHasText;
- (void)updateBookmarkIcon;
- (void)updateTranslucentAppearance;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
