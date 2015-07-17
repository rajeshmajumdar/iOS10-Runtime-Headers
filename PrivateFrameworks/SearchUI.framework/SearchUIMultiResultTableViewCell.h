/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    SearchUIRowFormatter * _formatter;
    NSLayoutConstraint * _heightConstraint;
    int  _numberOfColumns;
    float  _oneRowHeight;
    NSArray * _results;
    unsigned int  _style;
    float  _twoRowHeight;
}

@property (retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) SearchUIRowFormatter *formatter;
@property (readonly) unsigned int hash;
@property (retain) NSLayoutConstraint *heightConstraint;
@property int numberOfColumns;
@property float oneRowHeight;
@property (retain) NSArray *results;
@property unsigned int style;
@property (readonly) Class superclass;
@property float twoRowHeight;

+ (float)baselineSpacing;
+ (Class)classForResults:(id)arg1;
+ (float)horizontalInset;
+ (id)labelFont;
+ (id)reuseIdentifierForResults:(id)arg1;
+ (id)rowViewForResults:(id)arg1 style:(unsigned int)arg2;

- (void).cxx_destruct;
- (float)bottomInset;
- (float)bottomPadding;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionViewDataSource;
- (id)collectionViewLayout;
- (id)collectionViewWrapper;
- (id)formatter;
- (id)heightConstraint;
- (float)horizontalImagePadding;
- (struct CGSize { float x1; float x2; })imageSize;
- (BOOL)includeTopPaddingInSingleRowHeight;
- (id)initWithResults:(id)arg1 style:(unsigned int)arg2;
- (BOOL)isExpanded;
- (float)itemWidth;
- (void)layoutSubviews;
- (id)makeCollectionView;
- (int)numberOfColumns;
- (float)numberOfColumnsForCurrentLayout;
- (int)numberOfVisibleResults;
- (float)oneRowHeight;
- (id)results;
- (void)setCollectionView:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setFormatter:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setNumberOfColumns:(int)arg1;
- (void)setOneRowHeight:(float)arg1;
- (void)setResults:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (void)setTwoRowHeight:(float)arg1;
- (void)setupCollectionView:(id)arg1;
- (unsigned int)style;
- (float)topInset;
- (float)topPadding;
- (id)trimResults:(id)arg1;
- (float)twoRowHeight;
- (void)updateNumberOfColumns:(int)arg1;
- (void)updateWithResults:(id)arg1;

@end
