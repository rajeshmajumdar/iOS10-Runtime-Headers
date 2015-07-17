/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAdditionalAssetAttributes : PLManagedObject

@property (nonatomic, copy) NSString *adjustedFingerPrint;
@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) PLAssetDescription *assetDescription;
@property (nonatomic) short cameraCaptureDevice;
@property (nonatomic, retain) PLCloudMaster *cloudMaster;
@property (nonatomic, retain) NSSet *cloudResources;
@property (nonatomic, retain) NSString *creatorBundleID;
@property (nonatomic, retain) NSString *customCollectionName;
@property (nonatomic, retain) NSString *customCollectionUUID;
@property (nonatomic, retain) NSString *customMomentName;
@property (nonatomic, retain) NSString *customMomentUUID;
@property (nonatomic, retain) NSString *editorBundleID;
@property (nonatomic, retain) NSNumber *embeddedThumbnailHeight;
@property (nonatomic, retain) NSNumber *embeddedThumbnailLength;
@property (nonatomic, retain) NSNumber *embeddedThumbnailOffset;
@property (nonatomic, retain) NSNumber *embeddedThumbnailWidth;
@property (nonatomic, retain) NSString *exifTimestampString;
@property (nonatomic, retain) NSNumber *externalUsageIntent;
@property (nonatomic, retain) NSData *faceRegions;
@property (nonatomic, retain) id importSessionID;
@property (nonatomic, retain) NSSet *keywords;
@property (nonatomic, retain) NSDate *lastUploadAttemptDate;
@property (nonatomic, retain) NSNumber *locationHash;
@property (nonatomic, retain) NSString *longDescription;
@property (nonatomic, copy) NSString *masterFingerPrint;
@property (nonatomic, retain) id originalAssetsUUID;
@property (nonatomic, retain) NSString *originalFilename;
@property (nonatomic, retain) NSNumber *originalFilesize;
@property (nonatomic, retain) NSData *originalHash;
@property (nonatomic, retain) NSNumber *originalHeight;
@property (nonatomic, retain) NSNumber *originalOrientation;
@property (nonatomic, retain) NSString *originalPath;
@property (nonatomic, retain) NSNumber *originalResourceChoice;
@property (nonatomic, retain) NSNumber *originalWidth;
@property (nonatomic, retain) NSSet *personReferences;
@property (nonatomic, retain) NSString *publicGlobalUUID;
@property (nonatomic, retain) NSData *reverseLocationData;
@property (nonatomic, retain) NSNumber *reverseLocationDataIsValid;
@property (nonatomic, retain) NSString *timeZoneName;
@property (nonatomic, retain) NSNumber *timeZoneOffset;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) PLUnmanagedAdjustment *unmanagedAdjustment;
@property (nonatomic, retain) NSNumber *uploadAttempts;

+ (id)listOfSyncedProperties;

- (BOOL)_needToSetModificationDateOnAsset:(id)arg1;
- (id)longDescription;
- (BOOL)migrateReverseLocationDataFromKeyedArchiverFormat;
- (void)setLongDescription:(id)arg1;
- (BOOL)validateForInsert:(id*)arg1;
- (BOOL)validateForUpdate:(id*)arg1;
- (void)willSave;

@end
