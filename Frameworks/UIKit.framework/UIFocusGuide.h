/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIFocusGuide : UILayoutGuide <_UIFocusRegion> {
    BOOL  _automaticallyDisableWhenIntersectingFocus;
    BOOL  _automaticallyPreferOwningView;
    BOOL  _didSetPreferredFocusedView;
    BOOL  _enabled;
    UIView * _preferredFocusedView;
}

@property (getter=_automaticallyDisableWhenIntersectingFocus, setter=_setAutomaticallyDisableWhenIntersectingFocus:, nonatomic) BOOL automaticallyDisableWhenIntersectingFocus;
@property (getter=_automaticallyPreferOwningView, setter=_setAutomaticallyPreferOwningView:, nonatomic) BOOL automaticallyPreferOwningView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_automaticallyDisableWhenIntersectingFocus;
- (BOOL)_automaticallyPreferOwningView;
- (id)_childFocusRegions;
- (void)_didUpdateFocusToPreferredFocusedView;
- (id)_focusDebugOverlayParentView;
- (BOOL)_focusRegionCanBecomeFocused;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_focusRegionFrame;
- (id)_focusRegionGuides;
- (BOOL)_focusRegionIsEligibleForFocus;
- (id)_focusRegionItem;
- (id)_focusRegionView;
- (BOOL)_isTransparentFocusRegion;
- (void)_setAutomaticallyDisableWhenIntersectingFocus:(BOOL)arg1;
- (void)_setAutomaticallyPreferOwningView:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEnabled;
- (id)preferredFocusedView;
- (void)setEnabled:(BOOL)arg1;
- (void)setPreferredFocusedView:(id)arg1;

@end
