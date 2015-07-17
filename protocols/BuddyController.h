/* Generated by RuntimeBrowser.
 */

@protocol BuddyController <NSObject>

@required

- (void)setDelegate:(id <BuddyControllerDelegate>)arg1;

@optional

+ (BOOL)controllerNeedsToRun;
+ (void)skip;

- (BOOL)controllerAllowsNavigatingBack;
- (void)controllerWasPopped;
- (void)performExtendedInitializationWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (BOOL)presentHostedViewController;
- (void)removeFromNavHierarchyOf:(UINavigationController *)arg1;
- (BOOL)shouldAllowStartOver;
- (BOOL)shouldSuppressExtendedInitializationActivityIndicator;
- (void)startOver;
- (UIViewController *)viewController;
- (void)willDisplayStartOver;

@end
