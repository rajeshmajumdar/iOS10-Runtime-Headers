/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKKeyframeSequence : NSObject <NSCoding, NSCopying> {
    struct SKCKeyframeSequence { int x1; int x2; int x3; int x4; float *x5; float *x6; } * _cKeyframeSequence;
    unsigned int  _count;
    int  _interpolationMode;
    int  _repeatMode;
    NSMutableArray * _times;
    NSMutableArray * _values;
}

@property (nonatomic) int interpolationMode;
@property (nonatomic) int repeatMode;

- (void).cxx_destruct;
- (struct SKCKeyframeSequence { int x1; int x2; int x3; int x4; float *x5; float *x6; }*)_createSKCKeyframeSequence;
- (void)_dirtySKCKeyframeSequence;
- (Class)_valueClass;
- (void)addKeyframeValue:(id)arg1 time:(float)arg2;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (float)getKeyframeTimeForIndex:(unsigned int)arg1;
- (id)getKeyframeValueForIndex:(unsigned int)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCount:(unsigned int)arg1;
- (id)initWithKeyframeValues:(id)arg1 times:(id)arg2;
- (int)interpolationMode;
- (void)removeAllKeyframes;
- (void)removeKeyframeAtIndex:(unsigned int)arg1;
- (void)removeLastKeyframe;
- (int)repeatMode;
- (id)sampleAtTime:(float)arg1;
- (void)setInterpolationMode:(int)arg1;
- (void)setKeyframeTime:(float)arg1 forIndex:(unsigned int)arg2;
- (void)setKeyframeValue:(id)arg1 forIndex:(unsigned int)arg2;
- (void)setKeyframeValue:(id)arg1 time:(float)arg2 forIndex:(unsigned int)arg3;
- (void)setRepeatMode:(int)arg1;

@end
