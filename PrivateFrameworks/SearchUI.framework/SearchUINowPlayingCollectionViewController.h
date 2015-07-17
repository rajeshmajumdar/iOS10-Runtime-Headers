/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUINowPlayingCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SearchUIRowFormatter * _formatter;
    NSArray * _movies;
    unsigned int  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SearchUIRowFormatter *formatter;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *movies;
@property (nonatomic) unsigned int style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)formatter;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2;
- (id)movies;
- (void)setFormatter:(id)arg1;
- (void)setMovies:(id)arg1;
- (void)setStyle:(unsigned int)arg1;
- (unsigned int)style;

@end
