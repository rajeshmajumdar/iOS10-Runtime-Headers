/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowViewControllerSpec : PUViewControllerSpec {
    BOOL  _isAirplayRouteAvailable;
    BOOL  _isAirplayScreenAvailable;
    BOOL  _isChromeVisible;
    unsigned int  _mode;
    BOOL  _shouldObserveAirplayRoute;
    BOOL  _shouldShowAirplayButton;
    BOOL  _shouldShowChromeBars;
    BOOL  _shouldShowPlaceholder;
}

@property (nonatomic, readonly) PUSlideshowViewControllerSpecChange *currentChange;
@property (setter=setAirplayRouteAvailable:, nonatomic) BOOL isAirplayRouteAvailable;
@property (setter=setAirplayScreenAvailable:, nonatomic) BOOL isAirplayScreenAvailable;
@property (setter=setChromeVisible:, nonatomic) BOOL isChromeVisible;
@property (nonatomic, readonly) unsigned int mode;
@property (nonatomic) BOOL shouldObserveAirplayRoute;
@property (nonatomic, readonly) BOOL shouldPauseWhenAppResignsActive;
@property (nonatomic, readonly) BOOL shouldRegisterToAirplay;
@property (nonatomic) BOOL shouldShowAirplayButton;
@property (nonatomic) BOOL shouldShowChromeBars;
@property (nonatomic) BOOL shouldShowPlaceholder;
@property (nonatomic, readonly) BOOL shouldUseChromeBars;
@property (nonatomic, readonly) BOOL shouldUseTapGesture;

- (void)_setShouldObserveAirplayRoute:(BOOL)arg1;
- (void)_setShouldShowAirplayButton:(BOOL)arg1;
- (void)_setShouldShowChromeBars:(BOOL)arg1;
- (void)_setShouldShowPlaceholder:(BOOL)arg1;
- (id)currentChange;
- (id)init;
- (id)initWithMode:(unsigned int)arg1;
- (BOOL)isAirplayRouteAvailable;
- (BOOL)isAirplayScreenAvailable;
- (BOOL)isChromeVisible;
- (unsigned int)mode;
- (id)newSpecChange;
- (void)setAirplayRouteAvailable:(BOOL)arg1;
- (void)setAirplayScreenAvailable:(BOOL)arg1;
- (void)setChromeVisible:(BOOL)arg1;
- (BOOL)shouldObserveAirplayRoute;
- (BOOL)shouldPauseWhenAppResignsActive;
- (BOOL)shouldRegisterToAirplay;
- (BOOL)shouldShowAirplayButton;
- (BOOL)shouldShowChromeBars;
- (BOOL)shouldShowPlaceholder;
- (BOOL)shouldUseChromeBars;
- (BOOL)shouldUseTapGesture;
- (void)updateIfNeeded;

@end
