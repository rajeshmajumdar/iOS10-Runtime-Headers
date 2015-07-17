/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingContext : NSObject {
    NSAttributedString * _attributedText;
    struct CGSize { 
        float width; 
        float height; 
    }  _boundingSize;
    float  _firstBaselineOffsetFromTop;
    UIImage * _image;
    float  _lastBaselineOffsetFromBottom;
    NSStringDrawingContext * _stringDrawingContext;
    int  _stringDrawingOptions;
    NSString * _text;
    NSDictionary * _uniformTextAttributes;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) struct CGSize { float x1; float x2; } boundingSize;
@property (nonatomic) float firstBaselineOffsetFromTop;
@property (getter=_image, setter=_setImage:, nonatomic, retain) UIImage *image;
@property (nonatomic) float lastBaselineOffsetFromBottom;
@property (nonatomic, retain) NSStringDrawingContext *stringDrawingContext;
@property (nonatomic) int stringDrawingOptions;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSDictionary *uniformTextAttributes;

- (void).cxx_destruct;
- (id)_image;
- (void)_setAttributedText:(id)arg1;
- (void)_setBoundingSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setFirstBaselineOffsetFromTop:(float)arg1;
- (void)_setImage:(id)arg1;
- (void)_setLastBaselineOffsetFromBottom:(float)arg1;
- (void)_setStringDrawingContext:(id)arg1;
- (void)_setStringDrawingOptions:(int)arg1;
- (void)_setText:(id)arg1;
- (void)_setUniformTextAttributes:(id)arg1;
- (id)attributedText;
- (struct CGSize { float x1; float x2; })boundingSize;
- (float)firstBaselineOffsetFromTop;
- (float)lastBaselineOffsetFromBottom;
- (id)stringDrawingContext;
- (int)stringDrawingOptions;
- (id)text;
- (id)uniformTextAttributes;

@end
