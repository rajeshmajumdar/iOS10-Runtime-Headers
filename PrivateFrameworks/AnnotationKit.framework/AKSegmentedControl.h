/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSegmentedControl : UIControl {
    NSArray * _buttons;
    NSArray * _images;
    unsigned int  _selectedSegment;
    NSMutableOrderedSet * _selectionStack;
    unsigned int  _selectionType;
}

@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) NSArray *images;
@property (nonatomic) unsigned int selectedSegment;
@property (nonatomic, retain) NSMutableOrderedSet *selectionStack;
@property (nonatomic) unsigned int selectionType;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_commonInit;
- (void)_configureForNewImages;
- (void)_setSelected:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (id)buttons;
- (void)deselectAllSegments;
- (id)images;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImages:(id)arg1;
- (BOOL)isEnabledForSegment:(unsigned int)arg1;
- (BOOL)isSelectedForSegment:(unsigned int)arg1;
- (id)segmentAtIndex:(unsigned int)arg1;
- (unsigned int)segmentCount;
- (id)segmentForTag:(int)arg1;
- (void)selectSegmentWithTag:(int)arg1;
- (unsigned int)selectedSegment;
- (id)selectionStack;
- (unsigned int)selectionType;
- (void)setButtons:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (void)setImages:(id)arg1;
- (void)setSelected:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (void)setSelectedSegment:(unsigned int)arg1;
- (void)setSelectionStack:(id)arg1;
- (void)setSelectionType:(unsigned int)arg1;
- (void)setTag:(int)arg1 forSegment:(unsigned int)arg2;
- (int)tagForSegment:(unsigned int)arg1;

@end
