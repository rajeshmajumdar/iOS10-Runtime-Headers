/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost> {
    <_SBUIWidgetHost> * _widgetHost;
    NSString * _widgetIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } preferredViewSize;
@property (readonly) Class superclass;
@property (nonatomic) <_SBUIWidgetHost> *widgetHost;
@property (nonatomic, copy) NSString *widgetIdentifier;

- (void)dealloc;
- (void)hostDidDismiss;
- (void)hostDidPresent;
- (void)hostWillDismiss;
- (void)hostWillPresent;
- (void)invalidatePreferredViewSize;
- (struct CGSize { float x1; float x2; })preferredViewSize;
- (void)requestLaunchOfURL:(id)arg1;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (void)setWidgetHost:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (id)widgetHost;
- (id)widgetIdentifier;

@end
