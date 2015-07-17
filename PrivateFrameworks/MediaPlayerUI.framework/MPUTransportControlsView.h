/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUTransportControlsView : UIView {
    NSArray * _availableTransportControls;
    NSMutableDictionary * _classByReuseIdentifier;
    <MPUTransportControlsViewDataSource> * _dataSource;
    <MPUTransportControlsViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _insetsForExpandingButtons;
    <MPUTransportControlsViewLayoutDelegate> * _layoutDelegate;
    unsigned int  _minimumNumberOfTransportButtonsForLayout;
    NSMutableDictionary * _recycledButtonsByReuseIdentifier;
    NSMapTable * _reuseIdentifierByButton;
    NSMutableArray * _sortedVisibleControlsWithBlanks;
    BOOL  _sortedVisibleControlsWithBlanksNeedsReload;
    NSMutableSet * _typesOfControlsToReload;
    BOOL  _usesLegacyLayoutHeuristics;
    NSMutableDictionary * _visibleButtonByControlType;
}

@property (nonatomic, copy) NSArray *availableTransportControls;
@property (nonatomic) <MPUTransportControlsViewDataSource> *dataSource;
@property (nonatomic) <MPUTransportControlsViewDelegate> *delegate;
@property (getter=_insetsForExpandingButtons, setter=_setInsetsForExpandingButtons:, nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insetsForExpandingButtons;
@property (nonatomic) <MPUTransportControlsViewLayoutDelegate> *layoutDelegate;
@property (nonatomic) unsigned int minimumNumberOfTransportButtonsForLayout;
@property (getter=_usesLegacyLayoutHeuristics, setter=_setUsesLegacyLayoutHeuristics:, nonatomic) BOOL usesLegacyLayoutHeuristics;

+ (id)defaultTransportControls;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)_availableTransportControlsForGroup:(int)arg1;
- (void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2;
- (id)_createTransportButtonWithReuseIdentifier:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_insetsForExpandingButtons;
- (void)_recycleTransportButtonWithControlType:(int)arg1;
- (void)_reloadSortedVisibleControlsWithBlanks;
- (void)_setInsetsForExpandingButtons:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_setUsesLegacyLayoutHeuristics:(BOOL)arg1;
- (id)_transportButtonForControlType:(int)arg1;
- (struct CGSize { float x1; float x2; })_transportControlButtonSize;
- (void)_transportControlLongPressBegan:(id)arg1;
- (void)_transportControlLongPressEnded:(id)arg1;
- (void)_transportControlTapped:(id)arg1;
- (void)_transportControlTouchEntered:(id)arg1;
- (void)_transportControlTouchExited:(id)arg1;
- (id)_typesFromTransportControls:(id)arg1;
- (id)_typesOfVisibleControls;
- (BOOL)_usesLegacyLayoutHeuristics;
- (id)_visibleTransportControlAtIndex:(unsigned int)arg1;
- (void)_willRemoveTransportButton:(id)arg1;
- (id)availableTransportControlWithType:(int)arg1;
- (id)availableTransportControls;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (unsigned int)minimumNumberOfTransportButtonsForLayout;
- (void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2;
- (void)reloadTransportButtonWithControlType:(int)arg1;
- (void)setAvailableTransportControls:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setMinimumNumberOfTransportButtonsForLayout:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
