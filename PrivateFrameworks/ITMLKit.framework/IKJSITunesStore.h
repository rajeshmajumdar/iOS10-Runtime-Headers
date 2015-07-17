/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore, JSExport> {
    int  _bagOperationLock;
    NSString * _cookieURL;
    id  _isURLBagDidLoadToken;
    NSNumber * _lastAccountDSID;
    SSMetricsController * _metricsController;
    ISLoadURLBagOperation * _pendingBagOperation;
    id  _ssAccountStoreChangedToken;
    NSString * _storeFrontSuffix;
}

@property (nonatomic, readonly) NSString *DSID;
@property (nonatomic, readonly) NSDictionary *accountInfo;
@property (nonatomic, retain) id cookie;
@property (nonatomic, retain) NSString *cookieURL;
@property (nonatomic, readonly) NSString *networkConnectionType;
@property (nonatomic) ISLoadURLBagOperation *pendingBagOperation;
@property (nonatomic, retain) NSString *storefront;
@property (nonatomic, readonly) NSString *userAgent;

+ (id)_URLBagContext;
+ (void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2;
+ (void)setITunesStoreHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)DSID;
- (void)_accountStoreChanged;
- (void)_bagDidLoadNotification:(id)arg1;
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(BOOL)arg2;
- (void)_updateBag:(BOOL)arg1;
- (void)_updateWithBag:(id)arg1;
- (id)accountInfo;
- (void)authenticate:(id)arg1 :(id)arg2;
- (void)clearCookies;
- (id)cookie;
- (id)cookieURL;
- (void)dealloc;
- (id)eligibilityForService:(id)arg1;
- (void)evaluateScripts:(id)arg1 :(id)arg2;
- (void)flushUnreportedEvents;
- (id)getBag;
- (void)getServiceEligibility:(id)arg1 :(id)arg2;
- (id)initWithAppContext:(id)arg1;
- (void)invalidateBag;
- (void)loadStoreContent:(id)arg1 :(id)arg2;
- (id)makeStoreXMLHttpRequest;
- (id)networkConnectionType;
- (id)pendingBagOperation;
- (void)recordEvent:(id)arg1 :(id)arg2;
- (void)setCookie:(id)arg1;
- (void)setCookieURL:(id)arg1;
- (void)setPendingBagOperation:(id)arg1;
- (void)setStorefront:(id)arg1;
- (void)signOut;
- (id)storefront;
- (void)updateServiceEligibility:(id)arg1;
- (id)userAgent;

@end
