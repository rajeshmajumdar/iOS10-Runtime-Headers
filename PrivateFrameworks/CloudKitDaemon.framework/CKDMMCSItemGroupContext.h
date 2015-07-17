/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling> {
    CKDMMCS * _MMCS;
    NSMapTable * _MMCSItemsByItemID;
    id /* block */  _completionBlock;
    CKDMMCSItemGroup * _itemGroup;
    CKDOperation * _operation;
    id /* block */  _progressBlock;
    id /* block */  _startBlock;
}

@property (nonatomic, retain) CKDMMCS *MMCS;
@property (nonatomic, retain) NSMapTable *MMCSItemsByItemID;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) CKDMMCSItemGroup *itemGroup;
@property (nonatomic) CKDOperation *operation;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, copy) id /* block */ startBlock;

- (void).cxx_destruct;
- (id)MMCS;
- (id)MMCSItemsByItemID;
- (void)_cleanupMMCSItems;
- (BOOL)_setupMMCSItemsWithError:(id*)arg1;
- (void)_startTrackingMMCSItems:(id)arg1;
- (void)_stopTrackingMMCSItems:(id)arg1;
- (void)cancel;
- (id /* block */)completionBlock;
- (void)didCompleteRequestWithError:(id)arg1;
- (void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)didGetMetricsForRequest:(id)arg1;
- (void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4;
- (void)didPutSectionWithItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4;
- (id)findTrackedMMCSItemByItemID:(unsigned long long)arg1;
- (struct MMCSItemReader { }*)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id*)arg2;
- (id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(id /* block */)arg4 start:(id /* block */)arg5 completionHandler:(id /* block */)arg6;
- (id)itemGroup;
- (id)operation;
- (id /* block */)progressBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setItemGroup:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMMCSItemsByItemID:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setStartBlock:(id /* block */)arg1;
- (void)start;
- (id /* block */)startBlock;
- (void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4;

@end
