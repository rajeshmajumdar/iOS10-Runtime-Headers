/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityGroupActivityCell : UICollectionViewCell {
    UIImageView * _highlightedImageView;
    UIImageView * _imageView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *highlightedImageView;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)dealloc;
- (id)draggingView;
- (id)highlightedImageView;
- (id)imageView;
- (void)initHighlightedImageViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlightedImageView:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateHighlightedImageViewIfNeeded;

@end
