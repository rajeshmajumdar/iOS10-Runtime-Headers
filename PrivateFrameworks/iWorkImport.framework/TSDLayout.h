/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDLayout : TSDAbstractLayout <TSKSearchTarget> {
    struct CGPoint { 
        float x; 
        float y; 
    }  mBaseAlignmentFrameOriginForFixingInterimPosition;
    struct CGPoint { 
        float x; 
        float y; 
    }  mBaseCapturedAlignmentFrameOriginForInline;
    TSDLayoutGeometry * mBaseGeometry;
    struct CGPoint { 
        float x; 
        float y; 
    }  mCapturedAlignmentFrameOriginForInline;
    struct CGPoint { 
        float x; 
        float y; 
    }  mCapturedInfoGeometryPositionForInline;
    NSMutableSet * mConnectedLayouts;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mDirtyRect;
    NSObject<TSDInfo> * mInfo;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mInitialBoundsForStandardKnobs;
    struct { 
        unsigned int position : 1; 
        unsigned int size : 1; 
        unsigned int inlineSize : 1; 
    }  mInvalidFlags;
    int  mLayoutState;
}

@property (nonatomic, readonly) BOOL canAspectRatioLockBeChangedByUser;
@property (nonatomic, readonly) NSSet *connectedLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TSDLayoutGeometry *dynamicGeometry;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<TSDInfo> *info;
@property (nonatomic, readonly) BOOL invalidGeometry;
@property (nonatomic, readonly) BOOL isStrokeBeingManipulated;
@property (nonatomic, readonly) int layoutState;
@property (nonatomic, readonly) TSDLayoutGeometry *originalGeometry;
@property (nonatomic, readonly) BOOL resizeMayChangeAspectRatio;
@property (readonly) Class superclass;

- (void)addConnectedLayout:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)additionalGuides;
- (id)additionalLayoutsForRepCreation;
- (struct CGPoint { float x1; float x2; })alignmentFrameOriginForFixingInterimPosition;
- (BOOL)allowsConnections;
- (void)beginDrag;
- (void)beginDynamicOperation;
- (void)beginResize;
- (void)beginRotate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGPoint { float x1; float x2; })calculatePointFromSearchReference:(id)arg1;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canFlip;
- (BOOL)canvasShouldScrollForSelectionPath:(id)arg1;
- (struct CGPoint { float x1; float x2; })capturedInfoPositionForAttachment;
- (struct CGPoint { float x1; float x2; })centerForConnecting;
- (struct CGPoint { float x1; float x2; })centerForRotation;
- (id)childSearchTargets;
- (id)computeInfoGeometryDuringResize;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (id)connectedLayouts;
- (void)dealloc;
- (id)dependentLayouts;
- (void)dragBy:(struct CGPoint { float x1; float x2; })arg1;
- (void)dragByUnscaled:(struct CGPoint { float x1; float x2; })arg1;
- (id)dynamicGeometry;
- (void)dynamicStrokeWidthChangeDidBegin;
- (void)dynamicStrokeWidthChangeDidEnd;
- (void)dynamicStrokeWidthUpdateToValue:(float)arg1;
- (void)endDrag;
- (void)endDynamicOperation;
- (void)endResize;
- (void)endRotate;
- (void)i_accumulateLayoutsIntoSet:(id)arg1;
- (id)i_externalWrapPath;
- (void)i_setBaseCapturedAlignmentFrameOriginForInline;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })i_takeDirtyRect;
- (BOOL)i_useBaseCapturedAlignmentFrameOriginForInline;
- (id)i_wrapPath;
- (id)info;
- (struct CGPoint { float x1; float x2; })infoGeometryPositionForCurrentAttachedLayoutGeometry;
- (id)initWithInfo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialBoundsForStandardKnobs;
- (id)initialInfoGeometry;
- (id)inspectorGeometry;
- (BOOL)invalidGeometry;
- (void)invalidate;
- (void)invalidateChildren;
- (void)invalidateExteriorWrap;
- (void)invalidateFrame;
- (void)invalidateInlineSize;
- (void)invalidatePosition;
- (void)invalidateSize;
- (BOOL)isBeingManipulated;
- (BOOL)isBeingTransformed;
- (BOOL)isDraggable;
- (BOOL)isInGroup;
- (BOOL)isInTopLevelContainerForEditing;
- (BOOL)isSelectable;
- (BOOL)isStrokeBeingManipulated;
- (id)layoutController;
- (id)layoutForSelectionPath:(id)arg1;
- (id)layoutGeometryFromInfo;
- (int)layoutState;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })layoutTransformInInfoSpace:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGSize { float x1; float x2; })maximumFrameSizeForChild:(id)arg1;
- (struct CGSize { float x1; float x2; })minimumSize;
- (BOOL)orderedBefore:(id)arg1;
- (id)originalGeometry;
- (id)originalPureGeometry;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalPureTransformInRoot;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformForProvidingGuides;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })originalTransformInRoot;
- (void)p_invalidateConnectedLayouts;
- (void)p_recursiveInvalidate;
- (void)p_registerWithLayoutController:(id)arg1;
- (void)p_unregisterWithLayoutController:(id)arg1;
- (BOOL)parentAutosizes;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (void)pauseDynamicTransformation;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)pureGeometry;
- (id)pureGeometryInParent;
- (id)pureGeometryInRoot;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })pureTransformInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootForSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootForZoomingToSelectionPath:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectInRootOfAutoZoomContextOfSelectionPath:(id)arg1;
- (id)reliedOnLayouts;
- (void)removeConnectedLayout:(id)arg1;
- (Class)repClassOverride;
- (BOOL)resizeMayChangeAspectRatio;
- (void)resizeWithTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1 asChild:(BOOL)arg2;
- (id)rootLayout;
- (float)scaleForInlineClampingUnrotatedSize:(struct CGSize { float x1; float x2; })arg1 withGeometry:(id)arg2;
- (id)searchTarget;
- (void)setAdjustedInterimPositionX:(float)arg1;
- (void)setAdjustedInterimPositionY:(float)arg1;
- (void)setDynamicGeometry:(id)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setParent:(id)arg1;
- (BOOL)shouldBeDisplayedInShowMode;
- (BOOL)shouldDisplayGuides;
- (BOOL)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (BOOL)shouldProvideSizingGuides;
- (BOOL)shouldValidate;
- (id)stroke;
- (void)takeRotationFromTracker:(id)arg1;
- (void)takeSizeFromTracker:(id)arg1;
- (void)unregisterFromLayoutController;
- (void)updateChildrenFromInfo;
- (void)validate;
- (void)validateFromLastInterimPosition;
- (float)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(float)arg2;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)willBeRemovedFromLayoutController:(id)arg1;

@end
