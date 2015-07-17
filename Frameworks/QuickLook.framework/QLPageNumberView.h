/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPageNumberView : UIView {
    UILabel * _backgroundLabel;
    NSNumberFormatter * _indexFormatter;
    UILabel * _label;
    int  _pageCount;
    int  _pageNumber;
}

@property int pageCount;
@property int pageNumber;

- (struct CGPath { }*)_copyMutablePathForRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 radius:(float)arg2 inverted:(BOOL)arg3;
- (id)_indexFormatter;
- (void)_updateString;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (int)pageCount;
- (int)pageNumber;
- (void)setPageCount:(int)arg1;
- (void)setPageNumber:(int)arg1;
- (void)sizeToFit;

@end
