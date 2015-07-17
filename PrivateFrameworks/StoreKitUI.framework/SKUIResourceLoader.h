/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIResourceLoader : NSObject <NSCacheDelegate> {
    SKUIClientContext * _clientContext;
    <SKUIResourceLoaderDelegate> * _delegate;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _operationsByRequestID;
    NSMapTable * _requestsByCacheKey;
    NSCache * _resourcesByRequestID;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIResourceLoaderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isIdle, nonatomic, readonly) BOOL idle;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) int resourceCacheLimit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishLoadForRequest:(id)arg1 withResource:(id)arg2;
- (void)_sendDidIdleIfNecessary;
- (void)addResource:(id)arg1 forRequestIdentifier:(unsigned int)arg2;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)cachedResourceForRequestIdentifier:(unsigned int)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestWithIdentifier:(unsigned int)arg1;
- (id)clientContext;
- (id)delegate;
- (id)init;
- (id)initWithOperationQueue:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 clientContext:(id)arg2;
- (BOOL)isIdle;
- (BOOL)loadResourceWithRequest:(id)arg1 reason:(int)arg2;
- (id)operationQueue;
- (void)removeAllCachedResources;
- (id)requestIdentifierForCacheKey:(id)arg1;
- (int)resourceCacheLimit;
- (void)setDelegate:(id)arg1;
- (void)setReason:(int)arg1 forRequestWithIdentifier:(unsigned int)arg2;
- (void)setResourceCacheLimit:(int)arg1;

@end
