/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRQuery : NSObject <BRNotificationReceiverDelegate> {
    struct { 
        unsigned int first_max_num; 
        unsigned int first_max_ms; 
        unsigned int progress_max_num; 
        unsigned int progress_max_ms; 
        unsigned int update_max_num; 
        unsigned int update_max_ms; 
    }  _batchingParameters;
    NSString * _bundleIdentifier;
    int (* _create_result_callbacks_equal;
    int (* _create_result_callbacks_release;
    void * _create_result_context;
    int (* _create_result_fn;
    int (* _create_value_callbacks_equal;
    int (* _create_value_callbacks_release;
    void * _create_value_context;
    int (* _create_value_fn;
    int  _disableCount;
    BOOL  _needsCrashEvicting;
    BOOL  _needsCrashMarking;
    NSPredicate * _predicate;
    NSMetadataQuery * _query;
    NSOperationQueue * _queryQueue;
    int  _queryState;
    BRNotificationReceiver * _receiver;
    NSMutableArray * _results;
    NSMutableDictionary * _resultsByRowID;
    struct __CFRunLoop { } * _runLoop;
    unsigned long  _scopeOptions;
    NSArray * _searchScopes;
    BOOL  _sendHasUpdateNotification;
    void * _sort_context;
    int (* _sort_fn;
    NSArray * _sortingAttributes;
    NSMutableDictionary * _toBeInsertedByFileObjectID;
    NSMutableDictionary * _toBeRemovedByFileObjectID;
    NSMutableDictionary * _toBeReplacedByFileObjectID;
    BOOL  _ubiquitousGatherComplete;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property NSMetadataQuery *query;
@property BRNotificationReceiver *receiver;
@property (readonly) Class superclass;

+ (void)didEndPossibleFileOperation:(id)arg1;
+ (void)initialize;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;

- (BOOL)_collectUpdates:(id)arg1;
- (void)_performBlockAsync:(id /* block */)arg1;
- (void)_postNote:(struct __CFString { }*)arg1;
- (void)_postNote:(struct __CFString { }*)arg1 userInfo:(id)arg2;
- (void)_processChanges:(id)arg1;
- (void)_processUpdates;
- (id)_replacementObjectForQueryItem:(id)arg1;
- (id)_replacementObjectsForArrayOfQueryItem:(id)arg1;
- (void)_runQuery;
- (void)_sendHasUpdateNotificationIfNeeded;
- (void)_setQueryState:(int)arg1;
- (void)_startReceiver;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(int)arg2;
- (unsigned int)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)disableUpdates;
- (void)enableUpdates;
- (unsigned char)executeWithOptions:(unsigned long)arg1;
- (void)finalize;
- (int)indexOfResult:(const void*)arg1;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;
- (void)notificationReceiverDidReceiveNotifications:(id)arg1;
- (void)notificationsReceiverDidFinishGathering:(id)arg1;
- (void)notificationsReceiverDidInvalidate:(id)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1;
- (void)processUpdates;
- (id)query;
- (id)queryQueue;
- (id)receiver;
- (const void*)resultAtIndex:(int)arg1;
- (unsigned int)resultCount;
- (void)setBatchingParameters:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)setCreateResultFunction:(int (*)arg1 withContext:(void*)arg2 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setCreateValueFunction:(int (*)arg1 withContext:(void*)arg2 callbacks:(const struct { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)setExternalDocumentsBundleIdentifier:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryQueue:(id)arg1;
- (void)setReceiver:(id)arg1;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned long)arg2;
- (void)setSendHasUpdateNotification:(BOOL)arg1;
- (void)setSortComparator:(int (*)arg1 withContext:(void*)arg2;
- (void)stop;
- (id)valuesOfAttribute:(id)arg1;

@end
