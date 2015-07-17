/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerOverviewViewController : UITableViewController {
    NSArray * _allPickers;
    NSArray * _auxiliaryOptions;
    NSString * _currentExtensionIdentifier;
    <_UIDocumentPickerOverviewDelegate> * _delegate;
    NSArray * _fileTypes;
    BOOL  _manage;
    unsigned int  _mode;
}

@property (nonatomic, retain) NSArray *allPickers;
@property (nonatomic, retain) NSArray *auxiliaryOptions;
@property (nonatomic, retain) NSString *currentExtensionIdentifier;
@property (nonatomic) <_UIDocumentPickerOverviewDelegate> *delegate;
@property (nonatomic, retain) NSArray *fileTypes;
@property (nonatomic) BOOL manage;
@property (nonatomic) unsigned int mode;

- (void).cxx_destruct;
- (id)allPickers;
- (id)auxiliaryOptions;
- (id)currentExtensionIdentifier;
- (id)delegate;
- (id)fileTypes;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned int)arg2 auxiliaryOptions:(id)arg3 includeManagementItem:(BOOL)arg4;
- (BOOL)manage;
- (unsigned int)mode;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setAllPickers:(id)arg1;
- (void)setAuxiliaryOptions:(id)arg1;
- (void)setCurrentExtensionIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileTypes:(id)arg1;
- (void)setManage:(BOOL)arg1;
- (void)setMode:(unsigned int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateContents;
- (void)updatePreferredContentSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
