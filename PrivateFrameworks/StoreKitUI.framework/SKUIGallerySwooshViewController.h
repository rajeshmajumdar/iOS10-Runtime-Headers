/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    BOOL  _delegateWantsWillDisplay;
    SKUISwooshPageComponent * _gallerySwoosh;
    float  _itemHeight;
    SKUISwooshView * _swooshView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIGallerySwooshViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SKUISwooshPageComponent *gallerySwoosh;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)artworkForItemAtIndex:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)gallerySwoosh;
- (id)indexPathsForVisibleItems;
- (id)initWithGallerySwoosh:(id)arg1;
- (void)loadView;
- (void)mediaView:(id)arg1 playbackStateDidChange:(int)arg2;
- (void)performActionForItemAtIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setColorScheme:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(int)arg2;

@end
