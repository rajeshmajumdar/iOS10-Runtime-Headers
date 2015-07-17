/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISlideshowImageScrollView : UIScrollView {
    struct CGPoint { 
        float x; 
        float y; 
    }  _centerPointBeforeResize;
    UIImage * _image;
    UIImageView * _imageView;
    float  _scaleBeforeResize;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;

- (void).cxx_destruct;
- (void)_prepareToResize;
- (void)_recoverFromResize;
- (void)_resetMinMaxZoomScales;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetZoomScale;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)zoomIntoPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
