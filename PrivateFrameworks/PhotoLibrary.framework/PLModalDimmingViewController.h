/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLModalDimmingViewController : UIViewController {
    UIViewController<PLModalDimmingContained> * _contentViewController;
    UIImageView * _vignetteView;
    UIView * _wrapperView;
}

@property (nonatomic, retain) UIViewController<PLModalDimmingContained> *contentViewController;

- (void)_updateVignetteToOrientation:(int)arg1;
- (void)_updateWrapperView:(id)arg1 toOrientation:(int)arg2 forViewController:(id)arg3;
- (id)contentViewController;
- (void)dealloc;
- (void)dismissWithCustomAnimation:(int)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)presentModalOnViewController:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)presentWithCustomAnimation;
- (void)setContentViewController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
