/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoSelectionManager : NSObject <NSCopying> {
    <PHAssetCollectionDataSource> * _dataSource;
    <PUPhotoSelectionManagerDelegate> * _delegate;
    int  _options;
    int  _selectionChangeCount;
    NSMapTable * _selectionEntriesByAssetCollection;
    NSMutableSet * _uniqueAssetSelection;
}

@property (nonatomic) <PHAssetCollectionDataSource> *dataSource;
@property (nonatomic) <PUPhotoSelectionManagerDelegate> *delegate;
@property (nonatomic, readonly) int options;
@property (nonatomic, readonly) NSOrderedSet *orderedSelectedAssets;
@property (nonatomic, readonly) NSSet *selectedAssets;
@property (nonatomic, readonly) NSDictionary *selectedAssetsByAssetCollection;

- (void).cxx_destruct;
- (void)_beginSelectionChange;
- (void)_endSelectionChange;
- (id)_selectionEntryForAssetCollection:(id)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)_shouldUniqueAssets;
- (BOOL)areAllAssetsSelectedInAssetCollection:(id)arg1;
- (BOOL)areAllAssetsSelectedInAssetCollections:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)delegate;
- (void)deselectAllAssets;
- (void)deselectAllAssetsInAssetCollections:(id)arg1;
- (void)deselectAssetAtIndex:(unsigned int)arg1 inAssetCollection:(id)arg2;
- (void)deselectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (void)enumerateSelectedAssetsWithAssetCollectionOrdering:(id)arg1 block:(id /* block */)arg2;
- (void)handlePhotoLibraryChange:(id)arg1;
- (id)init;
- (id)initWithOptions:(int)arg1;
- (void)invalidateAllAssetIndexes;
- (BOOL)isAnyAssetSelectedInAssetCollection:(id)arg1;
- (BOOL)isAnyAssetSelectedInAssetCollections:(id)arg1;
- (BOOL)isAssetAtIndexSelected:(unsigned int)arg1 inAssetCollection:(id)arg2;
- (id)localizedSelectionString;
- (int)options;
- (id)orderedSelectedAssets;
- (void)selectAllAssetsInAssetCollections:(id)arg1;
- (void)selectAssetAtIndex:(unsigned int)arg1 inAssetCollection:(id)arg2;
- (void)selectAssetsAtIndexes:(id)arg1 inAssetCollection:(id)arg2;
- (id)selectedAssetIndexesWithAssetCollectionOrdering:(id)arg1;
- (id)selectedAssets;
- (id)selectedAssetsByAssetCollection;
- (id)selectedAssetsWithAssetCollectionOrdering:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
