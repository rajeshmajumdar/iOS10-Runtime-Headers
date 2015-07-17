/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentPickerViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining> {
    _UIResilientRemoteViewContainerViewController * _childViewController;
    <UIDocumentPickerDelegate> * _delegate;
    unsigned int  _documentPickerMode;
    BOOL  _ignoreApplicationEntitlementForImport;
    _UIRemoteViewService * _remoteViewService;
    NSMutableArray * _stitchingTokens;
    NSURL * _uploadURL;
    <UIDocumentPickerDelegate> * _weak_delegate;
}

@property (getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:, nonatomic) BOOL _ignoreApplicationEntitlementForImport;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic) <UIDocumentPickerDelegate> *delegate;
@property (nonatomic) unsigned int documentPickerMode;
@property (getter=_remoteViewController, nonatomic, readonly, retain) _UIDocumentPickerRemoteViewController *remoteViewController;
@property (nonatomic, retain) _UIRemoteViewService *remoteViewService;
@property (nonatomic, retain) NSMutableArray *stitchingTokens;
@property (nonatomic, copy) NSURL *uploadURL;

+ (void)_checkContentTypes:(id)arg1;

- (void).cxx_destruct;
- (void)_callDelegateWithSelectedURLAndDismiss:(id)arg1 completion:(id /* block */)arg2;
- (id)_childViewController;
- (void)_commonInitWithCompletion:(id /* block */)arg1;
- (void)_didSelectPicker;
- (void)_didSelectURL:(id)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(id)arg1;
- (void)_displayLocationsMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_finishStitching;
- (BOOL)_ignoreApplicationEntitlementForImport;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (id)_initWithViewController:(id)arg1 inMode:(unsigned int)arg2 uploadURLOrNil:(id)arg3;
- (void)_prepareForDeletionIfNecessary;
- (id)_remoteViewController;
- (void)_setChildViewController:(id)arg1;
- (void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1;
- (void)_stitchFileCreationAtURL:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (unsigned int)documentPickerMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned int)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned int)arg2;
- (id)remoteViewService;
- (void)setDelegate:(id)arg1;
- (void)setDocumentPickerMode:(unsigned int)arg1;
- (void)setRemoteViewService:(id)arg1;
- (void)setStitchingTokens:(id)arg1;
- (void)setUploadURL:(id)arg1;
- (id)stitchingTokens;
- (id)uploadURL;

@end
