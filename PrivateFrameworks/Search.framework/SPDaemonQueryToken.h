/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPDaemonQueryToken : NSObject <NSCopying> {
    <SPDaemonQueryDelegate> * _delegate;
    SPSearchQuery * _query;
    BOOL  _queryFinished;
    unsigned int  _queryID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <SPDaemonQueryDelegate> *delegate;
@property (nonatomic, readonly) SPSearchQuery *query;
@property BOOL queryFinished;
@property (nonatomic, readonly) unsigned int queryID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)handleMessage:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 queue:(id)arg2;
- (id)query;
- (BOOL)queryFinished;
- (unsigned int)queryID;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueryFinished:(BOOL)arg1;

@end
