/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetResourceBag : NSObject {
    PHAssetCreationRequest * _assetCreationRequest;
    NSArray * _assetResourceContexts;
    NSArray * _assetResources;
    BOOL  _didValidateForInsertion;
    BOOL  _hasAdjustments;
    unsigned int  _mediaSubtype;
    int  _mediaType;
    PHAssetResource * _primaryResource;
    BOOL  _valid;
}

@property (nonatomic, readonly) PHAssetCreationRequest *assetCreationRequest;
@property (nonatomic, readonly) NSArray *assetResources;
@property (nonatomic, readonly) BOOL didValidateForInsertion;
@property (nonatomic, readonly) BOOL hasAdjustments;
@property (nonatomic, readonly) unsigned int mediaSubtype;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) PHAssetResource *primaryResource;
@property (getter=isValid, nonatomic, readonly) BOOL valid;

+ (id)_primaryAssetResource:(id)arg1;
+ (BOOL)_supportsAssetResourceTypes:(id)arg1 mediaType:(int*)arg2 mediaSubtype:(unsigned int*)arg3;
+ (BOOL)supportsAssetResourceTypes:(id)arg1 mediaType:(int*)arg2;

- (void).cxx_destruct;
- (BOOL)_extractValidatedAdjustmentsURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (BOOL)_extractValidatedAudioURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (BOOL)_extractValidatedImageURL:(id*)arg1 imageData:(id*)arg2 fromResource:(id)arg3 photoLibrary:(id)arg4 error:(id*)arg5;
- (BOOL)_extractValidatedVideoURL:(id*)arg1 fromResource:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;
- (id)_validateAssetResourceForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (BOOL)_validateAssetResourcesForAssetCreation:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3;
- (BOOL)_validateImageDataForAssetCreation:(id)arg1 error:(id*)arg2;
- (id)_validatedContextForResource:(id)arg1;
- (id)assetCreationRequest;
- (id)assetResourceWithType:(int)arg1;
- (id)assetResources;
- (BOOL)didValidateForInsertion;
- (BOOL)hasAdjustments;
- (id)initWithAssetResources:(id)arg1 assetCreationRequest:(id)arg2;
- (BOOL)isValid;
- (unsigned int)mediaSubtype;
- (int)mediaType;
- (id)primaryResource;
- (BOOL)validateForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2;
- (id)validatedDataForAssetResource:(id)arg1;
- (id)validatedURLForAssetResource:(id)arg1;

@end
