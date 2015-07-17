/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface TopoNumberBadge : CALayer {
    int  _count;
    UIFont * _font;
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    id  _owningView;
    struct CGSize { 
        float width; 
        float height; 
    }  _textSize;
}

@property (nonatomic) int count;
@property (nonatomic) id owningView;

+ (void)deallocImageCache;
+ (id)imageBadgeForCount:(int)arg1;
+ (long)initImageCache;

- (void)calculateBadgeMetrics;
- (int)count;
- (void)dealloc;
- (id)initWithOwningView:(id)arg1;
- (void)layoutSublayers;
- (struct CGImage { }*)newNumberBadge;
- (id)owningView;
- (struct CGSize { float x1; float x2; })preferredFrameSize;
- (void)setCount:(int)arg1;
- (void)setOwningView:(id)arg1;

@end
