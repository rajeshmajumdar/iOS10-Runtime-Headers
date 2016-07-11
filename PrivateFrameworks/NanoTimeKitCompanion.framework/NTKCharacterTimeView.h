/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterTimeView : UIView <NTKTimeView> {
    unsigned long long  _character;
    EAGLContext * _context;
    NTKCharacterDisplayLink * _displayLink;
    NTKCharacterFrameBuffer * _framebuffer;
    unsigned int  _isAnimating;
    unsigned int  _isRenderOneFrameRequested;
    NTKCharacterResourceLoader * _loader;
    NTKCharacterRenderer * _renderer;
    NTKCharacterRenderer * _renderers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbing;
- (void)_render;
- (void)_renderOneFrame;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3;
- (void)cleanupAfterZoom;
- (void)dealloc;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)enumarateRenderers:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareToZoom;
- (void)renderOneFrame;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1;
- (void)scrubToDate:(id)arg1;
- (void)setAnimationFrameInterval:(long long)arg1;
- (void)setCharacter:(unsigned long long)arg1;
- (void)setClothingColor:(id)arg1 andDesaturation:(double)arg2;
- (void)setFrozen:(bool)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setOverrideDate:(id)arg1 animated:(bool)arg2 enteringOrb:(bool)arg3;
- (void)setOverrideDate:(id)arg1 animated:(bool)arg2 enteringOrb:(bool)arg3 completion:(id /* block */)arg4;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
- (void)setZoomFraction:(double)arg1 diameter:(double)arg2;
- (void)speakTime;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;

@end