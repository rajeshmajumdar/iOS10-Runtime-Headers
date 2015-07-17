/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVURLAsset : AVAsset {
    AVURLAssetInternal * _URLAsset;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) AVAssetCache *assetCache;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) double rc_durationInSeconds;
@property (nonatomic, readonly) AVAssetResourceLoader *resourceLoader;
@property (nonatomic, readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property (nonatomic, readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)_UTTypes;
+ (id)_avfValidationPlist;
+ (id)_figFileMIMETypes;
+ (id)_figFilePathExtensions;
+ (id)_figFileUTIs;
+ (id)_figHFSFileTypes;
+ (id)_figMIMETypes;
+ (id)_figStreamingMIMETypes;
+ (id)_figStreamingUTIs;
+ (id)_fileUTTypes;
+ (id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 error:(id*)arg3;
+ (id)_streamingUTTypes;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (id)instanceIdentifierMapTable;
+ (BOOL)isPlayableExtendedMIMEType:(id)arg1;
+ (void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2;
+ (id)userInfoObjectForURLAsset:(id)arg1;
+ (id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1;

- (id)SHA1Digest;
- (id)URL;
- (id)_absoluteURL;
- (void)_addFigAssetNotifications;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForAssetTracks;
- (Class)_classForTrackInspectors;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (void)_handleURLRequest:(id)arg1;
- (BOOL)_hasResourceLoaderDelegate;
- (id)_instanceIdentifier;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)_removeFigAssetNotifications;
- (void)_removeUserInfoObject;
- (void)_setAssetInspectorLoader:(id)arg1;
- (void)_setUserInfoObject:(id)arg1;
- (BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
- (id)_tracks;
- (void)_tracksDidChange;
- (id)assetCache;
- (id)cacheKey;
- (void)cancelLoading;
- (void)dealloc;
- (id)description;
- (id)downloadDestinationURL;
- (unsigned long long)downloadToken;
- (void)finalize;
- (id)identifyingTagClass;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)lyrics;
- (unsigned int)referenceRestrictions;
- (id)resolvedURL;
- (id)resourceLoader;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)tracks;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (id)rc_preciseTimingAssetWithURL:(id)arg1;

- (double)rc_durationInSeconds;

@end
