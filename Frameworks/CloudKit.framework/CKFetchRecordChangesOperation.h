/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchRecordChangesOperation : CKDatabaseOperation {
    NSArray * _desiredKeys;
    BOOL  _fetchAllChanges;
    id /* block */  _fetchRecordChangesCompletionBlock;
    CKServerChangeToken * _previousServerChangeToken;
    id /* block */  _recordChangedBlock;
    NSMutableDictionary * _recordErrors;
    id /* block */  _recordWithIDWasDeletedBlock;
    CKRecordZoneID * _recordZoneID;
    NSData * _resultClientChangeTokenData;
    CKServerChangeToken * _resultServerChangeToken;
    unsigned int  _resultsLimit;
    id /* block */  _serverChangeTokenFetchedBlock;
    id /* block */  _shareChangedBlock;
    id /* block */  _shareWithIDWasDeletedBlock;
    BOOL  _shouldFetchAssetContents;
    int  _status;
}

@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic, copy) id /* block */ fetchRecordChangesCompletionBlock;
@property (nonatomic, readonly) BOOL moreComing;
@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic, copy) id /* block */ recordChangedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordErrors;
@property (nonatomic, copy) id /* block */ recordWithIDWasDeletedBlock;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, retain) NSData *resultClientChangeTokenData;
@property (nonatomic, retain) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic, copy) id /* block */ serverChangeTokenFetchedBlock;
@property (nonatomic, copy) id /* block */ shareChangedBlock;
@property (nonatomic, copy) id /* block */ shareWithIDWasDeletedBlock;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) int status;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (int)changeTypesFromSetCallbacks;
- (id)desiredKeys;
- (BOOL)fetchAllChanges;
- (id /* block */)fetchRecordChangesCompletionBlock;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2;
- (BOOL)moreComing;
- (void)performCKOperation;
- (id)previousServerChangeToken;
- (id /* block */)recordChangedBlock;
- (id)recordErrors;
- (id /* block */)recordWithIDWasDeletedBlock;
- (id)recordZoneID;
- (id)resultClientChangeTokenData;
- (id)resultServerChangeToken;
- (unsigned int)resultsLimit;
- (id /* block */)serverChangeTokenFetchedBlock;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllChanges:(BOOL)arg1;
- (void)setFetchRecordChangesCompletionBlock:(id /* block */)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setRecordChangedBlock:(id /* block */)arg1;
- (void)setRecordErrors:(id)arg1;
- (void)setRecordWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultClientChangeTokenData:(id)arg1;
- (void)setResultServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setServerChangeTokenFetchedBlock:(id /* block */)arg1;
- (void)setShareChangedBlock:(id /* block */)arg1;
- (void)setShareWithIDWasDeletedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContents:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (id /* block */)shareChangedBlock;
- (id /* block */)shareWithIDWasDeletedBlock;
- (BOOL)shouldFetchAssetContents;
- (int)status;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (void)ic_removeAllCompletionBlocks;

@end
