/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingView : UIKBKeyView <UIGestureRecognizerDelegate> {
    NSMutableSet * _activeTouches;
    NSMutableArray * _currentPoints;
    struct CGColor { } * _inkColor;
    struct CGImage { } * _inkMask;
    float  _inkWidth;
    NSMutableArray * _interpolatedPoints;
    UIKBHandwritingQuadCurvePointFIFO * _interpolatingFIFO;
    UIKBHandwritingBoxcarFilterPointFIFO * _smoothingFIFO;
    UIKBHandwritingStrokePointFIFO * _strokeFIFO;
    UIKBHandwritingStrokeView * _strokeView;
}

@property (nonatomic, retain) NSMutableSet *activeTouches;
@property (nonatomic, retain) NSMutableArray *currentPoints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) struct CGColor { }*inkColor;
@property (nonatomic) struct CGImage { }*inkMask;
@property (nonatomic) float inkWidth;
@property (nonatomic, retain) NSMutableArray *interpolatedPoints;
@property (nonatomic, retain) UIKBHandwritingQuadCurvePointFIFO *interpolatingFIFO;
@property (nonatomic, retain) UIKBHandwritingBoxcarFilterPointFIFO *smoothingFIFO;
@property (nonatomic, retain) UIKBHandwritingStrokePointFIFO *strokeFIFO;
@property (nonatomic, retain) UIKBHandwritingStrokeView *strokeView;
@property (readonly) Class superclass;

- (id)activeTouches;
- (void)addInkPoint:(struct CGPoint { float x1; float x2; })arg1 value:(float)arg2;
- (BOOL)cancelTouchTracking;
- (void)clearAndNotify:(BOOL)arg1;
- (void)clearTouches;
- (id)currentPoints;
- (void)dealloc;
- (void)deleteStrokesAtIndexes:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (struct CGColor { }*)inkColor;
- (struct CGImage { }*)inkMask;
- (float)inkWidth;
- (id)interpolatedPoints;
- (id)interpolatingFIFO;
- (void)log;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)send;
- (void)setActiveTouches:(id)arg1;
- (void)setCurrentPoints:(id)arg1;
- (void)setInkColor:(struct CGColor { }*)arg1;
- (void)setInkMask:(struct CGImage { }*)arg1;
- (void)setInkWidth:(float)arg1;
- (void)setInterpolatedPoints:(id)arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setSmoothingFIFO:(id)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setStrokeView:(id)arg1;
- (BOOL)shouldCache;
- (id)smoothingFIFO;
- (id)strokeFIFO;
- (id)strokeView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateInkColor;

@end
