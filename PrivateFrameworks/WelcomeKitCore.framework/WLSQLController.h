/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSQLController : NSObject {
    struct sqlite3 { } * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
}

+ (id)downloadsPath;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_closeDatabase;
- (id)_databaseFilename;
- (void)_deleteAccounts;
- (void)_deleteSummaries;
- (void)_ensureCorrectSchema;
- (BOOL)_foundHandleIDs:(id)arg1 representSameGroupMessageAsHandleIDs:(id)arg2 handleIDsAreComplete:(BOOL)arg3;
- (id)_migratableAppsForDevice:(id)arg1;
- (void)_openDatabase;
- (long long)_performQuery:(id)arg1 rowHandler:(id /* block */)arg2;
- (long long)_schemaVersion;
- (id)accountsForMigrator:(id)arg1 device:(id)arg2;
- (id)dataForSummary:(id)arg1;
- (void)deleteAccountsAndSummariesForAllDevices;
- (BOOL)deleteAccountsAndSummariesForMigrator:(id)arg1 device:(id)arg2;
- (void)deleteGroupMessageInfoForAllDevices;
- (void)deleteMetadataForAllDevices;
- (void)deleteMigratableAppsForAllDevices;
- (void)deleteMigrationDatabase;
- (void)deleteSummaryDataForAllDevices;
- (id)groupMessageInfoMatchingSortedHandleIDs:(id)arg1 handleIDsAreComplete:(BOOL)arg2 didMatchExactly:(BOOL*)arg3;
- (id)init;
- (unsigned int)insertAccount:(id)arg1 migrator:(id)arg2 device:(id)arg3;
- (void)insertGroupMessageInfoWithSortedHandleIDs:(id)arg1 handleIDsAreComplete:(BOOL)arg2 roomName:(id)arg3 groupID:(id)arg4;
- (void)insertMetadata:(id)arg1 forSourceDevice:(id)arg2;
- (void)insertMigratableApp:(id)arg1 forDevice:(id)arg2;
- (unsigned int)insertRecordSummary:(id)arg1 account:(id)arg2;
- (id)migratableAppsForAllDevices;
- (id)migrationErrors;
- (id)migrationMetadataForSourceDevice:(id)arg1;
- (void)removeDataAndSetDidMigrateForSummary:(id)arg1;
- (void)setData:(id)arg1 forSummary:(id)arg2;
- (void)setMetadata:(id)arg1 forSourceDevice:(id)arg2;
- (void)setMigrationError:(id)arg1 forSummary:(id)arg2;
- (void)setWillMigrateForSummary:(id)arg1;
- (id)summariesForAccount:(id)arg1;
- (id)summariesForAccounts:(id)arg1 sortedByModifiedDate:(BOOL)arg2;
- (void)totalSummaryItemSizePlusOverheadForAccounts:(id)arg1 completion:(id /* block */)arg2;
- (void)updateModifiedDateForSummary:(id)arg1;

@end
