/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAnimatedImage : NSObject {
    NSArray * _durations;
    UIImage * _image;
}

@property (nonatomic, copy) NSArray *durations;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

+ (id)animatedImageWithContentsOfCPBitmapURL:(id)arg1;

- (id)_initWithImage:(id)arg1 durations:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)durations;
- (id)frames;
- (id)image;
- (id)initWithImages:(id)arg1 durations:(id)arg2;
- (void)setDurations:(id)arg1;
- (void)setImage:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)writeToCPBitmapURL:(id)arg1;

@end
