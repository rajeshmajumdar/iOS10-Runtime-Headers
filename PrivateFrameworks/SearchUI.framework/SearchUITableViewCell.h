/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableViewCell : UITableViewCell {
    <SearchUIDelegate> * _delegate;
    BOOL  _isExpandable;
}

@property <SearchUIDelegate> *delegate;
@property BOOL isExpandable;

+ (Class)classForResult:(id)arg1;
+ (id)reuseCharacteristicsIDForResult:(id)arg1;
+ (id)reuseIdentifierForClass:(Class)arg1 result:(id)arg2;
+ (id)reuseIdentifierForResult:(id)arg1;
+ (id)reuseIdentifierForResults:(id)arg1;
+ (id)rowViewForResult:(id)arg1 style:(unsigned int)arg2;

- (void).cxx_destruct;
- (void)clearPurgeableMemory;
- (id)delegate;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2;
- (id)initWithResults:(id)arg1 style:(unsigned int)arg2;
- (id)initWithStyle:(unsigned int)arg1;
- (BOOL)isExpandable;
- (int)numberOfVisibleResults;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setIsExpandable:(BOOL)arg1;
- (BOOL)supportsRecycling;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResults:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
