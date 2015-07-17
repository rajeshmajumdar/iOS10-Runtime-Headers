/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSCountedSet * _loadingTiledArtworkRequests;
    NSObject<OS_dispatch_queue> * _loadingTiledArtworkRequestsAccessQueue;
    NSCache * _tiledArtworkRepresentationFallbackCache;
    NSOperationQueue * _tilingArtworkCatalogOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_errorWithDescription:(id)arg1;
+ (id)_loadingRequestForArtworkCatalog:(id)arg1;
+ (id)_representationCacheKeyForArtworkCatalog:(id)arg1 forAnyRevision:(BOOL)arg2;
+ (struct CGSize { float x1; float x2; })_tileSizeForFittingSize:(struct CGSize { float x1; float x2; })arg1 rows:(unsigned int)arg2 columns:(unsigned int)arg3 spacing:(float)arg4;
+ (id)sharedDataSource;

- (void).cxx_destruct;
- (void)_addLoadingRequestForArtworkCatalog:(id)arg1;
- (BOOL)_hasLoadingRequestForArtworkCatalog:(id)arg1;
- (void)_removeLoadingRequestForArtworkCatalog:(id)arg1;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
