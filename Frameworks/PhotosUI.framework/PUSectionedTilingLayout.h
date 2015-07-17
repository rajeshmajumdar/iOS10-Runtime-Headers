/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSectionedTilingLayout : PUTilingLayout {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _computedSections;
    struct CGSize { 
        float width; 
        float height; 
    }  _interSectionSpacing;
    int  _numberOfSections;
    NSMutableDictionary * _sectionInfos;
    int  _seedSection;
    struct CGPoint { 
        float x; 
        float y; 
    }  _seedSectionOrigin;
}

@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } computedSections;
@property (nonatomic) struct CGSize { float x1; float x2; } interSectionSpacing;

- (void).cxx_destruct;
- (void)_computeSeedSectionIfNeeded;
- (void)_ensureComputedSectionsHaveBeenSeeded;
- (void)_invalidateNumberOfSections;
- (int)_numberOfSections;
- (BOOL)_scrollsHorizontallyNotVertically;
- (id)_sectionInfoForSection:(int)arg1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 section:(int)arg2 toSet:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForSection:(int)arg1;
- (void)computeSectionsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })computedSections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (id)init;
- (struct CGSize { float x1; float x2; })interSectionSpacing;
- (void)invalidateLayoutForUpdateWithItems:(id)arg1;
- (void)invalidateSectionInfos;
- (id)layoutInfosForTilesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (void)prepareLayout;
- (void)setInterSectionSpacing:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeForSection:(int)arg1 numberOfItems:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(int)arg2;

@end