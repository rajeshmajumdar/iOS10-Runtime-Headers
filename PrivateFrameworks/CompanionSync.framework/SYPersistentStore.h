/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYPersistentStore : NSObject {
    NSSet * _cachedChangedSyncIDs;
    unsigned long long  _cachedChangedSyncIDsVersion;
    BOOL  _cachedVersionStale;
    BOOL  _changeTrackingEnabled;
    struct sqlite3 { } * _db;
    struct sqlite3_stmt { } * _enterFullSync;
    struct sqlite3_stmt { } * _exitFullSync;
    struct sqlite3_stmt { } * _getAllSentForCurrentSync;
    struct sqlite3_stmt { } * _getChangeCount;
    struct sqlite3_stmt { } * _getChangeIDsSinceVersion;
    struct sqlite3_stmt { } * _getCurrentSyncID;
    struct sqlite3_stmt { } * _getCurrentSyncStartTime;
    struct sqlite3_stmt { } * _getFullsyncSent;
    struct sqlite3_stmt { } * _getIgnoringSyncID;
    struct sqlite3_stmt { } * _getInFullSync;
    struct sqlite3_stmt { } * _getLastEndedSyncID;
    struct sqlite3_stmt { } * _getLastSyncError;
    struct sqlite3_stmt { } * _getLocalVersion;
    struct sqlite3_stmt { } * _getNextExpireTime;
    struct sqlite3_stmt { } * _getOldestVersion;
    struct sqlite3_stmt { } * _getPeerSeqNo;
    struct sqlite3_stmt { } * _getSyncIDSOptions;
    struct sqlite3_stmt { } * _getSyncUserInfo;
    struct sqlite3_stmt { } * _getWaitingForSyncID;
    void * _inXpcTransaction;
    struct sqlite3_stmt { } * _insertChange;
    struct sqlite3_stmt { } * _logSyncComplete;
    struct __CFString { } * _loggingFacility;
    NSString * _path;
    NSString * _peerID;
    NSMutableDictionary * _peerSeqnoSets;
    struct sqlite3_stmt { } * _purgeExpiredChanges;
    struct sqlite3_stmt { } * _setAllSentForSyncID;
    struct sqlite3_stmt { } * _setFullsyncSent;
    struct sqlite3_stmt { } * _setPeerSeqNo;
    struct sqlite3_stmt { } * _setPeerSeqNoSet;
    struct sqlite3_stmt { } * _setSyncIDSOptions;
    struct sqlite3_stmt { } * _setSyncUserInfo;
    struct sqlite3_stmt { } * _setVectorClock;
    struct sqlite3_stmt { } * _setWaitingForSyncID;
    _SYSharedServiceDB * _sharedDB;
    NSObject<OS_dispatch_queue> * _syncQ;
    double  _timeToLiveCache;
    double  _unfinishedSyncTimeout;
}

@property (nonatomic, retain) NSSet *cachedChangedSyncIDs;
@property (nonatomic) unsigned long long cachedChangedSyncIDsVersion;
@property (nonatomic) BOOL cachedVersionStale;
@property (nonatomic, readonly) BOOL canStartNewSyncSession;
@property (nonatomic, readonly) unsigned int changeCount;
@property (nonatomic) BOOL completedSync;
@property (nonatomic, readonly) NSString *currentFullSyncID;
@property (nonatomic, readonly) unsigned long long currentLocalVersion;
@property (nonatomic, readonly) BOOL currentSyncSendComplete;
@property (nonatomic, readonly) double durationOfLastFullSync;
@property (nonatomic, copy) NSDictionary *fullSyncIDSOptions;
@property (nonatomic, copy) NSDictionary *fullSyncUserInfo;
@property (nonatomic, readonly) BOOL inFullSync;
@property (nonatomic, copy) NSDate *lastMessageReceived;
@property (nonatomic, readonly) unsigned long long lastSeenRemoteVersion;
@property (nonatomic, readonly) NSString *lastSyncEndID;
@property (nonatomic, readonly) NSError *lastSyncError;
@property (nonatomic, readonly) BOOL lastSyncFailed;
@property (nonatomic, copy) NSDate *overflowResyncTime;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *peerID;
@property (getter=isPerformingDeltaSync, nonatomic) BOOL performingDeltaSync;
@property (nonatomic, retain) _SYSharedServiceDB *sharedDB;
@property (nonatomic) double timeToLive;
@property (nonatomic) double unfinishedSyncTimeout;
@property (nonatomic, retain) NSString *vectorClockJSON;
@property (nonatomic, copy) NSString *waitingForSyncEndID;

+ (id)sharedPersistentStoreForService:(id)arg1;

- (void).cxx_destruct;
- (void)_LOCKED_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2 db:(struct sqlite3 { }*)arg3;
- (void)_cacheTTL;
- (void)_convertTimestamps;
- (struct sqlite3 { }*)_dbRef;
- (id)_decodeIndexSet:(id)arg1;
- (id)_encodeIndexSet:(id)arg1;
- (void)_fixPeerInfo;
- (int)_getSchemaVersion;
- (BOOL)_inTransaction:(BOOL)arg1 do:(id /* block */)arg2;
- (unsigned long long)_lastSequenceNumberForPeerID_LOCKED:(id)arg1;
- (unsigned long long)_oldestVersion;
- (BOOL)_openDBAtPath:(id)arg1;
- (void)_prepareStatements;
- (id)_sequenceNumberSetForPeerID:(id)arg1 inDB:(struct sqlite3 { }*)arg2;
- (void)_setupSharedDB;
- (void)_storeSequenceNumberSet:(id)arg1 forPeerID:(id)arg2;
- (BOOL)_tableEmpty:(id)arg1 db:(struct sqlite3 { }*)arg2;
- (void)_withDB:(id /* block */)arg1;
- (id)cachedChangedSyncIDs;
- (unsigned long long)cachedChangedSyncIDsVersion;
- (BOOL)cachedVersionStale;
- (BOOL)canStartNewSyncSession;
- (unsigned int)changeCount;
- (void)changeTrackingToggled:(BOOL)arg1;
- (void)clearAllChanges;
- (BOOL)completedSync;
- (id)currentFullSyncID;
- (unsigned long long)currentLocalVersion;
- (BOOL)currentSyncSendComplete;
- (void)dealloc;
- (double)durationOfLastFullSync;
- (void)enterFullSyncWithID:(id)arg1 ignoring:(BOOL)arg2;
- (void)exitFullSyncWithID:(id)arg1 error:(id)arg2;
- (id)fullSyncIDSOptions;
- (id)fullSyncUserInfo;
- (BOOL)ignoringFullSyncWithID:(id)arg1;
- (BOOL)inFullSync;
- (id)init;
- (id)initWithPath:(id)arg1 loggingFacility:(const struct __CFString { }*)arg2 changeTrackingEnabled:(BOOL)arg3;
- (id)initWithSharedDatabase:(id)arg1;
- (BOOL)isPerformingDeltaSync;
- (id)lastMessageReceived;
- (unsigned long long)lastSeenRemoteVersion;
- (unsigned long long)lastSequenceNumberForPeerID:(id)arg1;
- (id)lastSyncEndID;
- (id)lastSyncError;
- (BOOL)lastSyncFailed;
- (BOOL)logChanges:(id)arg1 error:(id*)arg2;
- (BOOL)logSyncCompletionToRemoteVersion:(unsigned long long)arg1;
- (unsigned long long)nextSequenceNumber;
- (BOOL)objectChanged:(id)arg1 sinceVersion:(unsigned long long)arg2;
- (id)overflowResyncTime;
- (id)path;
- (id)peerID;
- (BOOL)reassignCurrentSyncID:(id)arg1;
- (void)resetSequenceNumber:(unsigned long long)arg1;
- (void)resetSequenceNumbersForPeer:(id)arg1;
- (void)sendCompletedForSyncWithID:(id)arg1;
- (BOOL)sequenceNumberIsDuplicate:(unsigned long long)arg1 forPeer:(id)arg2;
- (void)setCachedChangedSyncIDs:(id)arg1;
- (void)setCachedChangedSyncIDsVersion:(unsigned long long)arg1;
- (void)setCachedVersionStale:(BOOL)arg1;
- (void)setCompletedSync:(BOOL)arg1;
- (void)setFullSyncIDSOptions:(id)arg1;
- (void)setFullSyncUserInfo:(id)arg1;
- (void)setLastMessageReceived:(id)arg1;
- (void)setLastSequenceNumber:(unsigned long long)arg1 fromPeer:(id)arg2;
- (void)setOverflowResyncTime:(id)arg1;
- (void)setPerformingDeltaSync:(BOOL)arg1;
- (void)setSharedDB:(id)arg1;
- (void)setTimeToLive:(double)arg1;
- (void)setUnfinishedSyncTimeout:(double)arg1;
- (void)setVectorClockJSON:(id)arg1;
- (void)setWaitingForSyncEndID:(id)arg1;
- (id)sharedDB;
- (double)timeToLive;
- (double)unfinishedSyncTimeout;
- (id)vectorClockJSON;
- (id)waitingForSyncEndID;

@end
