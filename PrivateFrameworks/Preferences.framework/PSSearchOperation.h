/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSearchOperation : NSOperation {
    PSSearchResults * _currentResults;
    <PSSearchOperationDelegate> * _delegate;
    BOOL  _newQuery;
    NSString * _query;
    NSSet * _rootEntries;
}

@property (readonly, copy) PSSearchResults *currentResults;
@property <PSSearchOperationDelegate> *delegate;
@property (getter=isNewQuery, nonatomic) BOOL newQuery;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSSet *rootEntries;

+ (struct __CFStringTokenizer { }*)_wordBoundaryTokenizer;

- (void).cxx_destruct;
- (void)_didCancel;
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;
- (BOOL)_searchEntries:(id)arg1 forQuery:(id)arg2;
- (id)currentResults;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;
- (BOOL)isNewQuery;
- (void)main;
- (id)query;
- (id)rootEntries;
- (void)setDelegate:(id)arg1;
- (void)setNewQuery:(BOOL)arg1;

@end
