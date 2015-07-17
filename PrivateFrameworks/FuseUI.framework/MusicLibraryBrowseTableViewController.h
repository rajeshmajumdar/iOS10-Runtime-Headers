/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseTableViewController : UIViewController <MusicClientContextConsuming, MusicEntityPlaybackStatusControllerObserving, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryBrowseSectionHeaderViewDelegate, MusicLibraryViewConfigurationConsuming, MusicMediaPickerSearchDelegate, MusicSplitInitialStateProviding, MusicTableViewDelegate, UITableViewDataSource> {
    MusicClientContext * _clientContext;
    BOOL  _collapseSections;
    NSArray * _contentDescriptors;
    UIColor * _defaultSelectionTintColor;
    <MusicLibraryBrowseTableViewControllerDelegate> * _delegate;
    struct { 
        unsigned int didFinishContentHeightAnimation : 1; 
        unsigned int willBeginContentHeightAnimation : 1; 
    }  _delegateRespondsToSelector;
    BOOL  _didIgnoreEntityProviderInvalidationDuringEditing;
    id /* block */  _editingChangesCommitBlock;
    MusicEditingEntityProvider * _editingEntityProvider;
    BOOL  _editingWasCancelled;
    MusicEntityViewDescriptor * _entityViewDescriptor;
    unsigned int  _firstSectionHeaderIndex;
    BOOL  _hasValidFirstSectionHeaderIndex;
    MusicEntityValueContext * _itemEntityValueContext;
    int  _lastSelectionBehavior;
    MusicLibraryBrowseTableViewConfiguration * _libraryViewConfiguration;
    unsigned int  _numberOfEntities;
    MusicEntityPlayabilityController * _playabilityController;
    MusicEntityPlaybackStatusController * _playbackStatusController;
    MPAVController * _player;
    float  _previousWidth;
    unsigned int  _referenceCountForIgnoringEntityProviderInvalidation;
    unsigned int  _referenceCountForRunningEditingStateAnimations;
    NSMutableArray * _reusableCoalescingEntityValueProviders;
    NSMapTable * _sectionContentDescriptorToMaximumHeaderHeight;
    unsigned int  _sectionCountThresholdForCollapsedSections;
    MusicSectionEntityValueContext * _sectionEntityValueContext;
    MusicEntityValueContext * _selectedItemEntityValueContext;
    BOOL  _shouldReloadTableViewOnceStoppedIgnoringNotifications;
    MusicTableView * _tableView;
    NSMutableArray * _visibleFlexibleHeaderViews;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLibraryBrowseTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float effectiveContentHeight;
@property (nonatomic, readonly) NSArray *entityProviderChangeRecords;
@property (nonatomic, readonly) MusicEntityViewDescriptor *entityViewDescriptor;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MusicLibraryViewConfiguration *libraryViewConfiguration;
@property (nonatomic) unsigned int sectionCountThresholdForCollapsedSections;
@property (nonatomic, readonly) UIColor *sectionHeaderBackgroundColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MusicTableView *tableView;

- (void).cxx_destruct;
- (void)_beginEntityProviderInvalidation;
- (float)_calculateTableViewMaximumRowHeight;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)_configureForEntityViewDescriptorProperties;
- (void)_configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (void)_contentDescriptorDidInvalidateNotification:(id)arg1;
- (id)_dequeueCoalescingEntityValueProvider;
- (void)_didFinishContentHeightAnimation;
- (void)_didFinishEditingStateChangeAnimation;
- (id)_effectiveEntityProvider;
- (void)_endIgnoringEntityProviderInvalidation;
- (void)_entityPlayabilityControllerDidChangeNotification:(id)arg1;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (void)_entityViewDescriptorDisplayValuesDidChangeNotification:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_invalidateIndexBarDataSource;
- (BOOL)_isEntityValueContextDisabled:(id)arg1;
- (void)_presentContextualActionsWithEntityValueContext:(id)arg1 fromButton:(id)arg2;
- (void)_recycleCoalescingEntityValueProvider:(id)arg1;
- (void)_registerForNotificationsForContentDescriptors;
- (void)_reloadTableViewData;
- (void)_sectionContentDescriptorDidInvalidateNotification:(id)arg1;
- (id)_sectionEntityValueContextForIndex:(unsigned int)arg1;
- (void)_setCollapseSections:(BOOL)arg1;
- (void)_setSelectedIndexPath:(id)arg1 entityValueContext:(id)arg2;
- (void)_setTableViewRowHeight:(float)arg1;
- (void)_uninstallEditingEntityProviderIfAppropriate;
- (void)_unregisterForNotificationsForContentDescriptors;
- (void)_updateCollapseSections;
- (void)_updateEntityDisabledStateForView:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_updateEntityDisabledStateForVisibleItems;
- (void)_updateNumberOfEntities;
- (void)_updatePlaybackStatusForCell:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_updatePlaybackStatusForVisibleCells;
- (void)_updatePropertiesFromContentDescriptors;
- (BOOL)_wantsPersistentSelection;
- (void)_willBeginContentHeightAnimation;
- (void)_willBeginEditingStateChangeAnimation;
- (void)cancelEditing;
- (id)clientContext;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (id)description;
- (void)didEndDisplayingBrowseSectionHeaderView:(id)arg1 forSection:(int)arg2;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(int)arg2;
- (float)effectiveContentHeight;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endEditingWithCommitBlock:(id /* block */)arg1;
- (id)entityProviderChangeRecords;
- (id)entityViewDescriptor;
- (BOOL)getContentOffset:(struct CGPoint { float x1; float x2; }*)arg1 forIndexBarEntryAtIndex:(unsigned int)arg2;
- (void)handleContentDescriptorDidInvalidate;
- (void)handleContentSizeCategoryDidChange;
- (void)handleEntityProviderDidInvalidate;
- (int)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3;
- (int)handleSelectionOfCellForEntityValueContext:(id)arg1;
- (int)handleSelectionOfSectionHeaderForSectionEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertEntityValueProviders:(id)arg1;
- (id)libraryViewConfiguration;
- (id)loadEntityViewDescriptor;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (unsigned int)numberOfIndexBarEntries;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)playbackStatusControllerPlaybackStatusDidChange:(id)arg1;
- (unsigned int)sectionCountThresholdForCollapsedSections;
- (id)sectionHeaderBackgroundColor;
- (void)sectionHeaderViewDidSelectButton:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSectionCountThresholdForCollapsedSections:(unsigned int)arg1;
- (void)showInitialStateForSplitViewController;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectAddButtonForCell:(id)arg2 events:(unsigned int)arg3;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectContextualActionsButton:(id)arg2 forSectionHeaderView:(id)arg3;
- (void)tableView:(id)arg1 didSelectHeaderViewForSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2 forCell:(id)arg3;
- (void)tableView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2 forSectionHeaderView:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (BOOL)tableView:(id)arg1 shouldForceBottomSeparatorVisibleForSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableViewLayoutMarginsDidChange:(id)arg1;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)tableViewTintColorDidChange:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDisplayBrowseSectionHeaderView:(id)arg1 forSection:(int)arg2;

@end
