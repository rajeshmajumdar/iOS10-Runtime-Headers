/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksSettingsGateway : NSObject {
    WebBookmarksXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)clearAllSafariHistory;
- (void)deleteAllSafariSecurityOrigins;
- (void)deleteSafariPersistentURLCacheStorage;
- (void)deleteSafariSecurityOrigin:(id)arg1;
- (void)getCurrentlySelectedSearchEngineWithCompletion:(id /* block */)arg1;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)arg1;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)arg1;
- (id)init;

@end
