/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLitePool : NSObject {
    NSMutableArray * _dbs;
    BOOL  _drainScheduled;
    id /* block */  _factory;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMutableArray *dbs;
@property (nonatomic) BOOL drainScheduled;
@property (nonatomic, readonly) id /* block */ factory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_acquireDatabaseWithError:(id*)arg1;
- (void)_closeDatabase:(id)arg1;
- (void)_drain;
- (id)_openDatabaseWithError:(id*)arg1;
- (void)_scheduleDrain;
- (id)acquireDatabase:(BOOL)arg1;
- (void)closeAll;
- (id)dbs;
- (BOOL)drainScheduled;
- (id /* block */)factory;
- (id)initWithFactory:(id /* block */)arg1;
- (id)initWithFactory:(id /* block */)arg1 queueAttr:(id)arg2;
- (void)performWithDatabase:(id /* block */)arg1;
- (BOOL)performWithDatabase:(id /* block */)arg1 error:(id*)arg2;
- (id)queue;
- (void)releaseDatabase:(id)arg1;
- (void)setDbs:(id)arg1;
- (void)setDrainScheduled:(BOOL)arg1;
- (void)setQueue:(id)arg1;

@end
