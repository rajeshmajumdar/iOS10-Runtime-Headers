/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOfferingLookupItem : NSObject {
    MPMediaQuery * _albumItemsQuery;
    id /* block */  _responseBlock;
    NSNumber * _storeLookupID;
    unsigned int  _tokenID;
    BOOL  _wantsArtwork;
}

@property (nonatomic, readonly) MPMediaQuery *albumItemsQuery;
@property (nonatomic, readonly, copy) id /* block */ responseBlock;
@property (nonatomic, readonly) NSNumber *storeLookupID;
@property (nonatomic, readonly) NSString *storeLookupIDString;
@property (nonatomic, readonly) unsigned int tokenID;
@property (nonatomic, readonly) BOOL wantsArtwork;

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;

- (void).cxx_destruct;
- (id)_specificationForArtworkSizesToRequest;
- (id)albumItemsQuery;
- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(int)arg2 wantsArtwork:(BOOL)arg3 responseBlock:(id /* block */)arg4;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
- (id)newLookupRequest;
- (id /* block */)responseBlock;
- (id)storeLookupID;
- (id)storeLookupIDString;
- (unsigned int)tokenID;
- (BOOL)wantsArtwork;

@end
