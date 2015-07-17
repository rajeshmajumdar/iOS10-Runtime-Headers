/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFetchingAlbum : _PLFetchingAlbum {
    NSPredicate * _ALAssetsGroupFilterPredicate;
    unsigned int  _batchSize;
    NSArray * _cachedKeyAssets;
    unsigned int  _countForDisplay;
    int  _emptyState;
    unsigned int  _photosCount;
    unsigned int  _videosCount;
}

@property (nonatomic, retain) NSPredicate *ALAssetsGroupFilterPredicate;
@property (nonatomic) unsigned int batchSize;
@property (nonatomic, retain) NSData *customQueryParameters;
@property (nonatomic, retain) NSString *customQueryType;
@property (nonatomic, readonly, retain) NSPredicate *extraFilterPredicate;
@property (nonatomic, retain) NSFetchRequest *fetchRequest;
@property (nonatomic, retain) NSOrderedSet *fetchedAssets;
@property (nonatomic, readonly) BOOL hasAssetsCache;

+ (id)_panoramasAlbumPredicate;
+ (BOOL)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssetsSet;
+ (id)predicateForAlbumKind:(int)arg1;
+ (id)sortDescriptorsForAlbumKind:(int)arg1;

- (id)ALAssetsGroupFilterPredicate;
- (id)_cachedKeyAssets;
- (unsigned int)_fetchedCountForAssetsOfKind:(short)arg1;
- (id)_performFetchWithRequest:(id)arg1;
- (unsigned int)approximateCount;
- (id)assets;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (unsigned int)batchSize;
- (BOOL)canPerformEditOperation:(unsigned int)arg1;
- (unsigned int)count;
- (unsigned int)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)didTurnIntoFault;
- (id)extraFilterPredicate;
- (id)fastPointerAccessSetForAssets:(id)arg1;
- (id)fetchRequest;
- (id)filteredIndexesForPredicate:(id)arg1;
- (BOOL)hasAssetsCache;
- (BOOL)isEmpty;
- (id)keyAsset;
- (BOOL)mayHaveAssetsInCommon:(id)arg1;
- (id)mutableAssets;
- (id)primitiveAssets;
- (id)secondaryKeyAsset;
- (void)setALAssetsGroupFilterPredicate:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setBatchSize:(unsigned int)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setupFetchRequest;
- (id)tertiaryKeyAsset;
- (void)updateSnapshotAndClearCaches:(id)arg1;

@end
