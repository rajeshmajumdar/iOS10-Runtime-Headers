/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIApplicationExtensionActivity : UIActivity {
    NSExtensionItem * __injectedExtensionItem;
    _UIActivityBundleHelper * _activityBundleHelper;
    NSExtension * _applicationExtension;
    id  _extensionContextIdentifier;
    id /* block */  _extensionRequestCleanupCompletion;
    UIViewController * _extensionViewController;
    NSString * _localizedExtensionBundleName;
    id /* block */  _presenterCompletion;
    UIViewController * _presenterViewController;
    UIImage * _renderedActivityImage;
    UIImage * _renderedActivitySettingsImage;
}

@property (nonatomic, retain) NSExtensionItem *_injectedExtensionItem;
@property (nonatomic, retain) _UIActivityBundleHelper *activityBundleHelper;
@property (nonatomic, retain) NSExtension *applicationExtension;
@property (nonatomic, copy) id extensionContextIdentifier;
@property (nonatomic, copy) id /* block */ extensionRequestCleanupCompletion;
@property (nonatomic, retain) UIViewController *extensionViewController;
@property (nonatomic, copy) NSString *localizedExtensionBundleName;
@property (nonatomic, copy) id /* block */ presenterCompletion;
@property (nonatomic) UIViewController *presenterViewController;
@property (nonatomic, retain) UIImage *renderedActivityImage;
@property (nonatomic, retain) UIImage *renderedActivitySettingsImage;

+ (id)_applicationExtensionActivitiesForItems:(id)arg1;
+ (int)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (BOOL)_canBeExcludedByActivityViewController:(id)arg1;
- (void)_cleanup;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)_injectedExtensionItem;
- (void)_injectedJavaScriptResult:(id)arg1;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (BOOL)_isServiceExtension;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_presentExtensionViewControllerIfPossible;
- (id)activityBundleHelper;
- (id)activityTitle;
- (id)activityType;
- (id)applicationExtension;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)extensionContextIdentifier;
- (id /* block */)extensionRequestCleanupCompletion;
- (id)extensionViewController;
- (id)initWithApplicationExtension:(id)arg1;
- (id)localizedExtensionBundleName;
- (void)prepareWithActivityItems:(id)arg1;
- (id /* block */)presenterCompletion;
- (id)presenterViewController;
- (id)renderedActivityImage;
- (id)renderedActivitySettingsImage;
- (void)setActivityBundleHelper:(id)arg1;
- (void)setApplicationExtension:(id)arg1;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setExtensionRequestCleanupCompletion:(id /* block */)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setLocalizedExtensionBundleName:(id)arg1;
- (void)setPresenterCompletion:(id /* block */)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)setRenderedActivityImage:(id)arg1;
- (void)setRenderedActivitySettingsImage:(id)arg1;
- (void)set_injectedExtensionItem:(id)arg1;

@end
