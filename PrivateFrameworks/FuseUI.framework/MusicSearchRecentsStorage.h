/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSearchRecentsStorage : UIViewController {
    BOOL  _hasChanges;
    int  _limit;
    int  _maximumNumberOfRecents;
    NSURL * _persistenceURL;
    NSMutableArray * _recents;
}

@property (readonly) int maximumNumberOfRecents;

+ (id)sharedRecentsStorage;

- (void).cxx_destruct;
- (void)_addRecent:(id)arg1 replacingRecent:(id)arg2;
- (void)addRecent:(id)arg1;
- (void)clear;
- (id)initWithLimit:(int)arg1 persistenceURL:(id)arg2;
- (void)load;
- (int)maximumNumberOfRecents;
- (id)recentSearches;
- (void)replaceRecent:(id)arg1 withRecent:(id)arg2;
- (void)save;

@end
