/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStructuredPageViewController : SUItemTableViewController <ISURLOperationDelegate> {
    Class  _dataSourceClass;
    UILabel * _noItemsLabel;
    SUStructuredPage * _structuredPage;
}

@property (nonatomic, retain) Class dataSourceClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SUStructuredPage *structuredPage;
@property (readonly) Class superclass;

- (BOOL)_gotoURLForItem:(id)arg1 withURLIndex:(int)arg2;
- (BOOL)_handleLoadMoreForIndexPath:(id)arg1;
- (void)_loadMoreOperation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_loadMoreWithURL:(id)arg1;
- (void)_reloadLoadMoreCellAtIndexPath:(id)arg1;
- (void)_reloadNoItemsLabel;
- (void)_reloadTermsAndConditions;
- (void)bannerCell:(id)arg1 tappedButtonAtIndex:(int)arg2;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (Class)dataSourceClass;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(int)arg2;
- (BOOL)hasDisplayableContent;
- (id)init;
- (BOOL)loadMoreWithURL:(id)arg1;
- (id)newDataSource;
- (id)newNoItemsOverlayLabel;
- (id)newTermsAndConditionsFooter;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)reloadData;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setDataSourceClass:(Class)arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setStructuredPage:(id)arg1;
- (id)storePageProtocol;
- (id)structuredPage;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
