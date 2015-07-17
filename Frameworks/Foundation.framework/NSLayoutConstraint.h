/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    float  _coefficient;
    float  _constant;
    id  _container;
    id  _firstItem;
    unsigned long long  _layoutConstraintFlags;
    float  _loweredConstant;
    id  _markerAndPositiveExtraVar;
    id  _negativeExtraVar;
    float  _priority;
    id  _secondItem;
}

@property (getter=isActive) BOOL active;
@property float constant;
@property id container;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) float dissatisfaction;
@property (getter=_encodedConstant, setter=_setEncodedConstant:, retain) _NSLayoutConstraintConstant *encodedConstant;
@property int firstAttribute;
@property id firstItem;
@property (readonly) BOOL hasBeenLowered;
@property (readonly) unsigned int hash;
@property (copy) NSString *identifier;
@property (getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:, nonatomic) BOOL loweredConstantNeedsUpdate;
@property float multiplier;
@property float priority;
@property int relation;
@property int secondAttribute;
@property id secondItem;
@property BOOL shouldBeArchived;
@property (readonly) Class superclass;
@property (copy) NSString *symbolicConstant;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_addOrRemoveConstraints:(id)arg1 activate:(BOOL)arg2;
+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (void)_setLegacyDecodingOnly:(BOOL)arg1;
+ (void)activateConstraints:(id)arg1;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4;
+ (void)deactivateConstraints:(id)arg1;

- (BOOL)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(float)arg3 lastLoweredConstantWasRounded:(BOOL)arg4 mutuallyExclusiveConstraints:(id*)arg5;
- (void)_addToEngine:(id)arg1;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (float)_allowedMagnitudeForIntegralizationAdjustment;
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float*)arg1;
- (void)_clearWeakContainerReference;
- (id)_constantDescriptionForDTrace;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (int)_constraintType;
- (void)_containerGeometryDidChange;
- (id)_deallocSafeDescription;
- (BOOL)_deferDTraceLogging;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_descriptionforSymbolicConstant;
- (BOOL)_effectiveConstant:(float*)arg1 error:(id*)arg2;
- (struct CGSize { float x1; float x2; })_engineToContainerScalingCoefficients;
- (void)_ensureValueMaintainsArbitraryLimit:(float*)arg1;
- (BOOL)_existsInEngine:(id)arg1;
- (BOOL)_existsInFirstItemEngine;
- (float)_fudgeIncrement;
- (id)_identifier;
- (BOOL)_isFudgeable;
- (BOOL)_isIBPrototypingLayoutConstraint;
- (id)_layoutEngine;
- (BOOL)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(BOOL*)arg2;
- (BOOL)_loweredConstantIsRounded;
- (BOOL)_loweredConstantNeedsUpdate;
- (id)_loweredExpression;
- (void)_makeExtraVars;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (BOOL)_nsib_isRedundant;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (int)_primitiveConstraintType;
- (id)_priorityDescription;
- (void)_removeFromEngine:(id)arg1;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (void)_setFirstAttribute:(int)arg1;
- (void)_setFirstItem:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setLoweredConstantNeedsUpdate:(BOOL)arg1;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setMultiplier:(float)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (void)_setRelation:(int)arg1;
- (void)_setSecondAttribute:(int)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1 constant:(float)arg2;
- (id)_symbolicConstant;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id /* block */)arg1;
- (id)animations;
- (id)asciiArtDescription;
- (float)constant;
- (id)container;
- (void)dealloc;
- (id)description;
- (id)descriptionAccessory;
- (float)dissatisfaction;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (int)firstAttribute;
- (id)firstItem;
- (BOOL)hasBeenLowered;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isActive;
- (float)multiplier;
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (float)priority;
- (float)priorityForVariable:(id)arg1;
- (int)relation;
- (int)secondAttribute;
- (id)secondItem;
- (void)setActive:(BOOL)arg1;
- (void)setAnimations:(id)arg1;
- (void)setConstant:(float)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasBeenLowered:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(float)arg1;
- (void)setShouldBeArchived:(BOOL)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (BOOL)shouldBeArchived;
- (id)symbolicConstant;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (BOOL)_UIWantsMarginAttributeSupport;

- (id)_baselineLoweringInfoForFirstItem:(BOOL)arg1;
- (id)_encodedConstant;
- (id)_ola_dimensionItem;
- (id)_ola_dimensionRefItem;
- (void)_setBaselineLoweringInfo:(id)arg1 forFirstItem:(BOOL)arg2;
- (void)_setEncodedConstant:(id)arg1;
- (id)_uiFirstRefView;
- (id)_uiSecondRefView;
- (BOOL)defaultResolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities

+ (id)ax_constraintsToMakeView:(id)arg1 sameDimensionsAsView:(id)arg2;

- (void)ax_removeFromContainer;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkBaselineConstraintsForViewsFontsLeadings:(id)arg1 superview:(id)arg2 options:(int)arg3;
+ (id)_gkConstraintForView:(id)arg1 baselineAlignedUnderView:(id)arg2 offsetBy:(float)arg3;
+ (id)_gkConstraintForView:(id)arg1 centeredXInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 centeredYInView:(id)arg2;
+ (id)_gkConstraintForView:(id)arg1 equalsAttribute:(int)arg2 ofView:(id)arg3;
+ (id)_gkConstraintForView:(id)arg1 withConstantHeight:(float)arg2;
+ (id)_gkConstraintForView:(id)arg1 withConstantWidth:(float)arg2;
+ (id)_gkConstraintForView:(id)arg1 withHeightDerivedFromView:(id)arg2 insetBy:(float)arg3;
+ (id)_gkConstraintForView:(id)arg1 withWidthDerivedFromView:(id)arg2 insetBy:(float)arg3;
+ (id)_gkConstraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 leading:(float)arg7 fontTextStyle:(id)arg8;
+ (id)_gkConstraintsForView:(id)arg1 centeredXInView:(id)arg2 enforceMargin:(float)arg3;
+ (id)_gkConstraintsForView:(id)arg1 withinView:(id)arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)_gkConstraintsForViews:(id)arg1 alignedByAttribute:(int)arg2;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(float)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg5;
+ (id)_gkConstraintsForViews:(id)arg1 contiguouslyLaidOutVertically:(BOOL)arg2 overlap:(float)arg3 withinView:(id)arg4 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg5 applyOrthogonalConstraints:(BOOL)arg6;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
+ (id)constraintsByAttachingView:(id)arg1 toView:(id)arg2 inCorner:(unsigned int)arg3 offset:(struct UIOffset { float x1; float x2; })arg4;
+ (id)constraintsByCenteringAndContainingView:(id)arg1 inView:(id)arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
+ (id)constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(int)arg3 offset:(struct UIOffset { float x1; float x2; })arg4;
+ (id)constraintsBySizingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI

+ (BOOL)naui_areConstraints:(id)arg1 equalToConstraints:(id)arg2;
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
+ (id)naui_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 relatedBy:(int)arg4 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg5;
+ (id)naui_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned int)arg3 offset:(struct UIOffset { float x1; float x2; })arg4;
+ (id)naui_constraintsBySizingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)naui_constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;
+ (id)naui_viewsInConstraints:(id)arg1;

- (id)naui_debugIdentifierWithBaseLabel:(id)arg1;
- (BOOL)naui_isEqualToConstraint:(id)arg1;
- (void)naui_setIdentifierWithLabel:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus

+ (id)PG_constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 priority:(float)arg8;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)constraintWithItem:(id)arg1 height:(float)arg2;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 priority:(float)arg8;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

- (void)tk_removeFromContainer;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

+ (BOOL)rc_areConstraints:(id)arg1 equalToConstraints:(id)arg2;
+ (id)rc_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
+ (id)rc_constraintsByAttachingView:(id)arg1 toView:(id)arg2 alongEdges:(unsigned int)arg3 relatedBy:(int)arg4 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg5;
+ (id)rc_constraintsByCenteringView:(id)arg1 withView:(id)arg2 alongAxes:(unsigned int)arg3 offset:(struct UIOffset { float x1; float x2; })arg4;
+ (id)rc_constraintsBySizingView:(id)arg1 toSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)rc_constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4 label:(id)arg5;
+ (id)rc_viewsInConstraints:(id)arg1;

- (id)rc_debugIdentifierWithBaseLabel:(id)arg1;
- (BOOL)rc_isEqualToConstraint:(id)arg1;
- (void)rc_setIdentifierWithLabel:(id)arg1;

@end
