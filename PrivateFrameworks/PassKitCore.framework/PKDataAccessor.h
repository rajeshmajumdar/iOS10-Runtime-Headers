/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDataAccessor : NSObject {
    NSObject<OS_dispatch_queue> * _processingQueue;
}

@property (nonatomic, readonly, retain) NSData *archiveData;
@property (nonatomic, readonly, retain) NSBundle *bundle;
@property (nonatomic, readonly, retain) NSData *manifestHash;
@property (nonatomic, readonly, retain) PKRemoteAssetManager *remoteAssetManager;
@property (nonatomic, readonly) BOOL remoteAssetsDownloaded;
@property (nonatomic, readonly, retain) NSData *serializedFileWrapper;

- (id)archiveData;
- (id)bundle;
- (id)content;
- (void)contentWithCompletion:(id /* block */)arg1;
- (id)dictionary;
- (void)dictionaryWithCompletion:(id /* block */)arg1;
- (id)displayProfileOfType:(int)arg1;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)imageSetForType:(int)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3;
- (void)imageSetForType:(int)arg1 displayProfile:(id)arg2 preheat:(BOOL)arg3 withCompletion:(id /* block */)arg4;
- (id)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5;
- (void)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(id /* block */)arg6;
- (id)manifestHash;
- (void)noteShared;
- (id)remoteAssetManager;
- (BOOL)remoteAssetsDownloaded;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (id)resourceValueForKey:(id)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (id)serializedFileWrapper;
- (void)updateSettings:(unsigned int)arg1;

@end
