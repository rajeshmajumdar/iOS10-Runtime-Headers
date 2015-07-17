/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _aggregateInvalid;
    CHBoxcarFilterPointFIFO * _boxcarFIFO;
    struct CGColor { } * _cgColor;
    float  _currentBlur;
    AKRichBrushStroke * _currentBrushStroke;
    BOOL  _gestureHasStartedSmoothedStroke;
    CHQuadCurvePointFIFO * _interpolatingFIFO;
    BOOL  _isAddingPointWithoutSmoothing;
    struct CGPoint { 
        float x; 
        float y; 
    }  _lastPoint;
    float  _maxBlur;
    float  _minBlur;
    float  _sensitivity;
    float  _singleDotCurrentSize;
    struct CGPoint { 
        float x; 
        float y; 
    }  _singleDotLocation;
    UIColor * _strokeColor;
    CHPointStrokeFIFO * _strokeFIFO;
    NSMutableArray * _strokes;
    id  _trackingTouchID;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _unionDrawingRect;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } aggregateInvalid;
@property (nonatomic, retain) CHBoxcarFilterPointFIFO *boxcarFIFO;
@property (nonatomic) float currentBlur;
@property (nonatomic, retain) AKRichBrushStroke *currentBrushStroke;
@property BOOL gestureHasStartedSmoothedStroke;
@property (nonatomic, readonly) float interfaceScale;
@property (nonatomic, retain) CHQuadCurvePointFIFO *interpolatingFIFO;
@property BOOL isAddingPointWithoutSmoothing;
@property (nonatomic) float maxBlur;
@property (nonatomic) float minBlur;
@property (nonatomic) float sensitivity;
@property float singleDotCurrentSize;
@property struct CGPoint { float x1; float x2; } singleDotLocation;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic, retain) CHPointStrokeFIFO *strokeFIFO;
@property (nonatomic, retain) NSArray *strokes;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } strokesBounds;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unionDrawingRect;

- (void).cxx_destruct;
- (void)_commonInit;
- (float)_radiusForPoint:(void *)arg1 atInterfaceScale:(void *)arg2; // needs 2 arg types, found 1: float
- (void)_updateSingleDotIfNecessary;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })aggregateInvalid;
- (id)boxcarFIFO;
- (void)clear;
- (void)continueStroke;
- (void)continueStrokeWithoutSmoothing;
- (struct CGPath { }*)copyStrokedInterpolatedPath;
- (float)currentBlur;
- (id)currentBrushStroke;
- (void)dealloc;
- (void)deferredInvalidate:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)gestureHasStartedSmoothedStroke;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)interfaceScale;
- (id)interpolatingFIFO;
- (BOOL)isAddingPointWithoutSmoothing;
- (float)maxBlur;
- (float)minBlur;
- (float)scaleFactor;
- (float)sensitivity;
- (void)setAggregateInvalid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBoxcarFIFO:(id)arg1;
- (void)setCurrentBlur:(float)arg1;
- (void)setCurrentBrushStroke:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGestureHasStartedSmoothedStroke:(BOOL)arg1;
- (void)setInterpolatingFIFO:(id)arg1;
- (void)setIsAddingPointWithoutSmoothing:(BOOL)arg1;
- (void)setMaxBlur:(float)arg1;
- (void)setMinBlur:(float)arg1;
- (void)setSensitivity:(float)arg1;
- (void)setSingleDotCurrentSize:(float)arg1;
- (void)setSingleDotLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeFIFO:(id)arg1;
- (void)setStrokes:(id)arg1;
- (void)setUnionDrawingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)singleDotCurrentSize;
- (struct CGPoint { float x1; float x2; })singleDotLocation;
- (void)startStroke;
- (id)strokeColor;
- (id)strokeFIFO;
- (id)strokes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })strokesBounds;
- (void)teardown;
- (void)terminateStroke;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unionDrawingRect;

@end
