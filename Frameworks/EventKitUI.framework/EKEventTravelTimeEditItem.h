/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventTravelTimeEditItem : EKEventEditItem {
    BOOL  _isHidden;
}

- (void)_updateHiddenState;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned int)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (BOOL)forceRefreshStartAndEndDatesOnCommit;
- (BOOL)isInline;
- (unsigned int)numberOfSubitems;

@end
