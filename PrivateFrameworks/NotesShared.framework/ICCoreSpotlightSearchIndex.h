/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCoreSpotlightSearchIndex : NSObject <CSSearchableIndexDelegate, ICSearchAsyncQueryable, ICSearchIndex> {
    CSSearchableIndex * _coreSpotlightIndex;
    long long  _currentTransactionID;
    <ICSearchIndexDelegate> * _delegate;
    BOOL  _isInBatch;
}

@property (nonatomic, readonly) BOOL canStartNextBatch;
@property (nonatomic, retain) CSSearchableIndex *coreSpotlightIndex;
@property (nonatomic) long long currentTransactionID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICSearchIndexDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isInBatch;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDocumentForSearchIndexable:(id)arg1 content:(id)arg2;
- (void)beginIndexBatch;
- (BOOL)canStartNextBatch;
- (void)cancelAsyncQuery:(id)arg1;
- (void)close;
- (id)coreSpotlightIndex;
- (long long)currentTransactionID;
- (id)delegate;
- (void)delete;
- (id)endIndexBatch;
- (void)fetchLastPersistedTransactionID:(id /* block */)arg1;
- (id)initWithIndexCommunicationSupport:(BOOL)arg1;
- (BOOL)isInBatch;
- (id)name;
- (id)newAsyncQueryWithSearchTerms:(id)arg1 delegate:(id)arg2;
- (void)open;
- (void)performDelegateCompletionIfPossibleWithBlock:(id /* block */)arg1;
- (void)removeDocumentsForIdentifiers:(id)arg1;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setCoreSpotlightIndex:(id)arg1;
- (void)setCurrentTransactionID:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsInBatch:(BOOL)arg1;
- (void)updateFromFetchLastPersistedTransactionID:(id)arg1;

@end
