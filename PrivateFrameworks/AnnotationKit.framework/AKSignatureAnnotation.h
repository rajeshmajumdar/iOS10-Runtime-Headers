/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureAnnotation : AKAnnotation <AKRectangularAnnotationProtocol, AKRotatableAnnotationProtocol> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _rectangle;
    float  _rotationAngle;
    AKSignature * _signature;
    UIColor * _strokeColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } rectangle;
@property float rotationAngle;
@property (retain) AKSignature *signature;
@property (retain) UIColor *strokeColor;
@property (readonly) Class superclass;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)adjustModelToCompensateForOriginalExif;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectangle;
- (float)rotationAngle;
- (void)setRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setSignature:(id)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)signature;
- (id)strokeColor;
- (void)translateBy:(struct CGPoint { float x1; float x2; })arg1;

@end
