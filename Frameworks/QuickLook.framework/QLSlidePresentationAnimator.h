/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSlidePresentationAnimator : QLPreviewTransitionAnimator <UIViewControllerInteractiveTransitioning> {
    UIView * _backgroundColorView;
    QLDismissGestureRecognizer * _gestureRecognizer;
    QLPreviewController * _previewController;
    struct CGSize { 
        float width; 
        float height; 
    }  _realSize;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceFrame;
    UIView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) QLDismissGestureRecognizer *gestureRecognizer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)finishAnimatingDismissalWithCompletionHandler:(id /* block */)arg1;
- (void)finishTransition:(BOOL)arg1;
- (id)gestureRecognizer;
- (void)startInteractiveTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)updateSlideProgress;

@end
