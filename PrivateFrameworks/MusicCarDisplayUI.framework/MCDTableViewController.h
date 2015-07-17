/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDTableViewController : MPUTableViewController {
    AVExternalDevice * _externalDevice;
    BOOL  _limitedUI;
    BOOL  _limiting;
    UIView * _nowPlayingButton;
    BOOL  _shouldHideIndexTitles;
    BOOL  _showMore;
    UIView * _snapshotView;
}

@property (nonatomic) BOOL limitedUI;
@property (nonatomic) BOOL shouldHideIndexTitles;
@property (nonatomic) BOOL showMore;

+ (Class)_tableViewClass;

- (void).cxx_destruct;
- (id)MPU_createNowPlayingButton;
- (void)_MCD_nowPlayingButtonAction:(id)arg1;
- (void)_itemChanged:(id)arg1;
- (void)_limitedUIDidChange;
- (BOOL)_viewControllerWasSelected;
- (void)dataSourceDidInvalidate;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (BOOL)limitedUI;
- (id)preferredFocusedItem;
- (void)reloadData;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setLimitedUI:(BOOL)arg1;
- (void)setShouldHideIndexTitles:(BOOL)arg1;
- (void)setShowMore:(BOOL)arg1;
- (BOOL)shouldHideIndexTitles;
- (BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (BOOL)showMore;
- (BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
