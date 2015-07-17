/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCloudSharedAlbum : PHAssetCollection {
    short  _cloudAlbumSubtype;
    BOOL  _cloudMultipleContributorsEnabled;
    NSNumber * _cloudOwnerEmailKey;
    NSString * _cloudOwnerFirstName;
    NSString * _cloudOwnerFullName;
    NSString * _cloudOwnerLastName;
    BOOL  _owned;
}

@property (nonatomic, readonly) short cloudAlbumSubtype;
@property (getter=isCloudMultipleContributorsEnabled, nonatomic, readonly) BOOL cloudMultipleContributorsEnabled;
@property (nonatomic, readonly, retain) NSNumber *cloudOwnerEmailKey;
@property (nonatomic, readonly, retain) NSString *cloudOwnerFirstName;
@property (nonatomic, readonly, retain) NSString *cloudOwnerFullName;
@property (nonatomic, readonly, retain) NSString *cloudOwnerLastName;
@property (getter=isOwned, nonatomic, readonly) BOOL owned;

+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (BOOL)canPerformEditOperation:(int)arg1;
- (Class)changeRequestClass;
- (short)cloudAlbumSubtype;
- (id)cloudOwnerEmailKey;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerFullName;
- (id)cloudOwnerLastName;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (BOOL)isCloudMultipleContributorsEnabled;
- (BOOL)isOwned;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;

@end
