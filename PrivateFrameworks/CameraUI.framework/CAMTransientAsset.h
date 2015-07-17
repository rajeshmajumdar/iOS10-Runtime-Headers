/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTransientAsset : NSObject <PUTransientDisplayAsset> {
    BOOL  _HDR;
    NSString * _burstIdentifier;
    NSDate * _creationDate;
    double  _duration;
    unsigned int  _mediaType;
    NSDate * _modificationDate;
    unsigned int  _numberOfRepresentedAssets;
    NSURL * _persistenceURL;
    unsigned int  _pixelHeight;
    unsigned int  _pixelWidth;
    UIImage * _placeholderImage;
    BOOL  _representsBurst;
    NSString * _uuid;
}

@property (getter=isHDR, nonatomic, readonly) BOOL HDR;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) unsigned int fullsizeDataFormat;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) BOOL representsBurst;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (void)_populateStillImageTransientAssetFromConvertible:(id)arg1;
- (void)_populateVideoTransientAssetFromConvertible:(id)arg1;
- (double)aspectRatio;
- (id)burstIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (double)duration;
- (unsigned int)fullsizeDataFormat;
- (id)init;
- (id)initWithAsset:(id)arg1 convertible:(id)arg2;
- (id)initWithAsset:(id)arg1 uuid:(id)arg2;
- (id)initWithUUID:(id)arg1;
- (unsigned int)isContentEqualTo:(id)arg1;
- (BOOL)isFavorite;
- (BOOL)isHDR;
- (BOOL)isTemporaryPlaceholder;
- (id)localizedGeoDescription;
- (unsigned int)mediaType;
- (id)modificationDate;
- (unsigned int)numberOfRepresentedAssets;
- (id)persistenceURL;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)placeholderImage;
- (BOOL)representsBurst;
- (id)uuid;

@end
