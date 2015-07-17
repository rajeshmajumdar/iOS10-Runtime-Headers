/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlayContentRegistry : NSObject {
    UIViewController * __cachedCurrentContent;
    NSPointerArray * __contentProviders;
    <PUAirPlayControllerContentProvider> * _currentContentProvider;
}

@property (setter=_setCachedCurrentContent:, nonatomic, retain) UIViewController *_cachedCurrentContent;
@property (setter=_setContentProviders:, nonatomic, retain) NSPointerArray *_contentProviders;
@property (nonatomic, retain) <PUAirPlayControllerContentProvider> *currentContentProvider;

- (void).cxx_destruct;
- (id)_cachedCurrentContent;
- (id)_contentProviders;
- (unsigned int)_indexOfContentProvider:(id)arg1;
- (void)_invalidateCurrentContent;
- (void)_setCachedCurrentContent:(id)arg1;
- (void)_setContentProviders:(id)arg1;
- (void)_setCurrentContentProvider:(id)arg1;
- (void)_updateCurrentContentProvider;
- (void)addContentProvider:(id)arg1;
- (void)clearContent;
- (id)contentForController:(id)arg1;
- (id)currentContentProvider;
- (id)init;
- (void)removeContentProvider:(id)arg1;

@end
