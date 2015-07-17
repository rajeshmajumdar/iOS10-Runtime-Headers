/* Generated by RuntimeBrowser.
 */

@protocol CSSearchableIndexInterface <NSObject>

@required

- (void)changeStateOfSearchableItemsWithUIDs:(NSArray *)arg1 toState:(int)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4 options:(int)arg5;
- (void)deleteAllSearchableItemsWithProtectionClass:(void *)arg1 forBundleID:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSearchableItemsSinceDate:(void *)arg1 protectionClass:(void *)arg2 forBundleID:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSDate *, NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)deleteSearchableItemsWithDomainIdentifiers:(void *)arg1 protectionClass:(void *)arg2 forBundleID:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchLastClientStateWithProtectionClass:(void *)arg1 forBundleID:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)indexSearchableItems:(void *)arg1 deleteSearchableItemsWithIdentifiers:(void *)arg2 clientState:(void *)arg3 protectionClass:(void *)arg4 forBundleID:(void *)arg5 options:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: NSArray *, NSArray *, NSData *, NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)willModifySearchableItemsWithIdentifiers:(void *)arg1 protectionClass:(void *)arg2 forBundleID:(void *)arg3 options:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSString *, NSString *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (void)_forceAppWithBundleID:(NSString *)arg1 toPerformJob:(CSIndexJob *)arg2;
- (void)_issueCommand:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)acknowledgeReindex;
- (void)checkInWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CSIndexJob *, NSError *, void*
- (void)indexFromBundle:(void *)arg1 protectionClass:(void *)arg2 options:(void *)arg3 items:(void *)arg4 itemsText:(void *)arg5 itemsHTML:(void *)arg6 clientState:(void *)arg7 deletes:(void *)arg8 completionHandler:(void *)arg9; // needs 9 arg types, found 14: NSString *, NSString *, int, NSData *, NSData *, NSData *, NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performMigrationWithTimeout:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;

@end
