/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellDeleteConfirmationView : UIView {
    _UITableViewCellActionButton * _accessoryView;
    NSArray * _actionButtons;
    struct CGSize { 
        float width; 
        float height; 
    }  _contentSize;
    float  _cornerRadius;
    _UITableViewCellActionButton * _deleteView;
    int  _sectionLocation;
    float  _visibleHeightRatio;
    float  _visibleWidth;
}

@property (nonatomic, readonly) _UITableViewCellActionButton *accessoryView;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } contentSize;
@property (nonatomic) float cornerRadius;
@property (nonatomic, readonly) _UITableViewCellActionButton *deleteView;
@property (nonatomic) int sectionLocation;
@property (nonatomic) float visibleHeightRatio;
@property (nonatomic) float visibleWidth;

- (void).cxx_destruct;
- (id)accessoryView;
- (struct CGSize { float x1; float x2; })contentSize;
- (float)cornerRadius;
- (void)dealloc;
- (id)deleteView;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 actionButtons:(id)arg2 contentSize:(struct CGSize { float x1; float x2; })arg3;
- (int)sectionLocation;
- (void)setCornerRadius:(float)arg1;
- (void)setSectionLocation:(int)arg1;
- (void)setVisibleHeightRatio:(float)arg1;
- (void)setVisibleWidth:(float)arg1;
- (void)updateBounds;
- (void)updateMaskView:(BOOL)arg1;
- (float)visibleHeightRatio;
- (float)visibleWidth;

@end
