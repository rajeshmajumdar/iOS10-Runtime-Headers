/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigSubtitleCALayer : CALayer {
    struct OpaqueFigSubtitleCALayerInternal { struct OpaqueFigPlayer {} *x1; id x2; unsigned char x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; unsigned char x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; unsigned char x7; unsigned char x8; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct CGSize { float x_10_1_1; float x_10_1_2; } x10; unsigned char x11; id x12; struct OpaqueFigSubtitleRenderer {} x13; struct __CFDictionary {} *x14; unsigned char x15; unsigned char x16; struct __CFDictionary {} *x17; struct __CFArray {} *x18; struct __CFArray {} *x19; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_20_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_20_1_2; } x20; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_21_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_21_1_2; } x21; unsigned char x22; BOOL x23; unsigned char x24; } * layerInternal;
}

@property (getter=isOverscanSubtitleSupportEnabled, nonatomic) BOOL overscanSubtitleSupportEnabled;

+ (id)defaultActionForKey:(id)arg1;

- (id)actionForKey:(id)arg1;
- (void)addAnimations:(void*)arg1;
- (void)beginUpdate;
- (void)clear;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)endUpdate;
- (void)finalize;
- (void)handleNeedsLayoutNotification;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)layoutSublayers;
- (void)removeAnimations;
- (void)setOverscanSubtitleSupportEnabled:(BOOL)arg1;
- (void)setPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideosize:(struct CGSize { float x1; float x2; })arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)subtitleLayerDisplay;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;

@end
