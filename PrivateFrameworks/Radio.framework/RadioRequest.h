/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRequest : NSObject {
    BOOL  _asynchronousBackgroundRequest;
    BOOL  _cachedResponse;
    int  _errorCode;
    NSObject<OS_dispatch_queue> * _queue;
    RadioRequestContext * _requestContext;
    double  _retryInterval;
    int  _status;
    NSDictionary * _unparsedResponseDictionary;
}

@property (getter=isAsynchronousBackgroundRequest, nonatomic) BOOL asynchronousBackgroundRequest;
@property (getter=isCachedResponse, readonly) BOOL cachedResponse;
@property (readonly) int errorCode;
@property (copy) RadioRequestContext *requestContext;
@property (readonly) double retryInterval;
@property (readonly) int status;
@property (readonly, copy) NSDictionary *unparsedResponseDictionary;

+ (id)defaultURLCache;
+ (void)loadServiceConfigurationWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_loadRadioStoreBagAndAllowRetry:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_loadRadioStoreBagWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (int)errorCode;
- (id)init;
- (BOOL)isAsynchronousBackgroundRequest;
- (BOOL)isCachedResponse;
- (id)requestContext;
- (double)retryInterval;
- (void)setAsynchronousBackgroundRequest:(BOOL)arg1;
- (void)setCachedResponse:(BOOL)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setRetryInterval:(double)arg1;
- (void)setStatus:(int)arg1;
- (void)setUnparsedResponseDictionary:(id)arg1;
- (int)status;
- (id)unparsedResponseDictionary;

@end
