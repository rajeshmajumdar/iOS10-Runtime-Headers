/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface _FIUIIcon : FIUIAnimatableObject {
    float  _alpha;
    UIColor * _color;
    float  _coloration;
    int  _currentFrameIndex;
    struct CGPoint { 
        float x; 
        float y; 
    }  _firstFrameOrigin;
    int  _frameColumns;
    int  _frameCount;
    struct CGSize { 
        float width; 
        float height; 
    }  _frameSize;
    struct CGPoint { 
        float x; 
        float y; 
    }  _position;
    float  _size;
}

@property (nonatomic) float alpha;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) float coloration;
@property (nonatomic) int currentFrameIndex;
@property (nonatomic) struct CGPoint { float x1; float x2; } firstFrameOrigin;
@property (nonatomic) int frameColumns;
@property (nonatomic) int frameCount;
@property (nonatomic) struct CGSize { float x1; float x2; } frameSize;
@property (nonatomic) struct CGPoint { float x1; float x2; } position;
@property (nonatomic) float size;

- (void).cxx_destruct;
- (id)_newAnimatablePropertyForType:(unsigned int)arg1;
- (void)addAnimation:(id)arg1 forRingGroupPropertyType:(unsigned int)arg2;
- (float)alpha;
- (id)color;
- (float)coloration;
- (int)currentFrameIndex;
- (struct CGPoint { float x1; float x2; })firstFrameOrigin;
- (int)frameColumns;
- (int)frameCount;
- (struct CGSize { float x1; float x2; })frameSize;
- (id)init;
- (BOOL)isDrawable;
- (struct CGPoint { float x1; float x2; })position;
- (void)setAlpha:(float)arg1;
- (void)setColor:(id)arg1;
- (void)setColoration:(float)arg1;
- (void)setCurrentFrameIndex:(int)arg1;
- (void)setFirstFrameOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (void)setFrameColumns:(int)arg1;
- (void)setFrameCount:(int)arg1;
- (void)setFrameSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSize:(float)arg1;
- (float)size;

@end
