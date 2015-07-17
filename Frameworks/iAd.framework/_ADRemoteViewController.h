/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface _ADRemoteViewController : _UIRemoteViewController {
    BOOL  _hasBeenDismissed;
    unsigned int  _remoteSupportedInterfaceOrientations;
}

@property (nonatomic) BOOL hasBeenDismissed;
@property (nonatomic) unsigned int remoteSupportedInterfaceOrientations;

+ (id)serviceViewControllerInterface;

- (BOOL)hasBeenDismissed;
- (unsigned int)remoteSupportedInterfaceOrientations;
- (void)setHasBeenDismissed:(BOOL)arg1;
- (void)setRemoteSupportedInterfaceOrientations:(unsigned int)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)updateInterfaceOrientationIfNeeded;

@end
