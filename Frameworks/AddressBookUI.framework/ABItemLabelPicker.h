/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABItemLabelPicker : UIView <ABSimpleTextInputViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL  _addLabelDisabled;
    NSMutableArray * _additionalLabels;
    void * _addressBook;
    id  _delegate;
    BOOL  _didCreateNewLabel;
    id  _editedItem;
    int  _itemIndex;
    int  _property;
    ABPropertyGroup * _propertyGroup;
    NSString * _savedLabel;
    NSString * _selectedLabel;
    NSIndexPath * _selectedPath;
    struct __CFArray { } * _sortedCustomItemLabelInfos;
    void * _sortedCustomItemLabelInfosMemory;
    struct __CFArray { } * _sortedDefaultItemLabelInfos;
    void * _sortedDefaultItemLabelInfosMemory;
    ABStyleProvider * _styleProvider;
    UITableView * _tableView;
}

@property (getter=isAddLabelDisabled, nonatomic) BOOL addLabelDisabled;
@property (nonatomic) void*addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCreateNewLabel;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) ABStyleProvider *styleProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)_defaultLabelsForProperty:(int)arg1 person:(id)arg2 propertyGroup:(id)arg3 index:(int)arg4 addressBook:(void*)arg5 outBestLabelIndex:(int*)arg6 forceIncludeLabels:(id)arg7;
+ (id)builtInLabelsForProperty:(int)arg1;
+ (struct __CFDictionary { }*)copyLabelUsageForProperty:(int)arg1 person:(id)arg2;
+ (struct __CFDictionary { }*)copyLabelUsageForPropertyGroup:(id)arg1 person:(id)arg2;
+ (id)defaultLabelForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3;
+ (id)defaultLabelsForProperty:(int)arg1 person:(id)arg2 addressBook:(void*)arg3 outBestLabelIndex:(int*)arg4 forceIncludeLabels:(id)arg5;
+ (id)defaultLabelsForProperty:(int)arg1 policy:(void*)arg2;
+ (id)defaultLabelsForPropertyGroup:(id)arg1 index:(int)arg2 addressBook:(void*)arg3 outBestLabelIndex:(int*)arg4 forceIncludeLabels:(id)arg5;

- (void)_didEndPickingAndConfirmed:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_matchSelectedPathWithSelectedLabel;
- (void)_setSelectedLabel:(id)arg1;
- (void)_setSelectedLabel:(id)arg1 atPath:(id)arg2;
- (void)_setSelectedPath:(id)arg1;
- (void*)addressBook;
- (BOOL)allowsCustomLabels;
- (void)buildUI;
- (BOOL)canEdit;
- (void)createNewCustomLabel;
- (void)dealloc;
- (BOOL)didCreateNewLabel;
- (void)displayScrollerIndicators;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAddLabelDisabled;
- (BOOL)isEditing;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)reloadItemLabels;
- (void)resetLabelCaches;
- (id)savedLabel;
- (id)selectedLabel;
- (void)setAddLabelDisabled:(BOOL)arg1;
- (void)setAdditionalLabels:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidCreateNewLabel:(BOOL)arg1;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setPropertyGroup:(id)arg1 itemIndex:(int)arg2;
- (void)setSavedLabel:(id)arg1;
- (void)setSelectedLabel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldPopItem;
- (void)simpleTextInputViewController:(id)arg1 didCompleteWithValue:(id)arg2;
- (BOOL)simpleTextInputViewControllerShouldDismissKeyboard:(id)arg1;
- (id)styleProvider;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)toggleEditing;

@end
