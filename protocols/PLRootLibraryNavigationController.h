/* Generated by RuntimeBrowser.
 */

@protocol PLRootLibraryNavigationController <NSObject, PLCloudFeedNavigating>

@required

- (BOOL)albumIsAvailableForNavigation:(struct NSObject { Class x1; }*)arg1;
- (BOOL)assetIsAvailableForNavigation:(PLManagedAsset *)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;
- (BOOL)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1;
- (BOOL)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1 refetchSectionsIfNeeded:(BOOL)arg2;
- (BOOL)cloudFeedIsAvailableForNavigation;
- (BOOL)commentIsAvailableForNavigation:(PLCloudSharedComment *)arg1 inAsset:(PLManagedAsset *)arg2;
- (BOOL)contentModeIsAvailableForNavigation:(int)arg1;
- (void)navigateToAlbum:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: struct NSObject { Class x1; }*, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToAsset:(PLManagedAsset *)arg1 animated:(BOOL)arg2;
- (void)navigateToAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (void)navigateToCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToCloudFeedWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToComment:(PLCloudSharedComment *)arg1 forAsset:(PLManagedAsset *)arg2 animated:(BOOL)arg3;
- (void)navigateToContentMode:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: int, BOOL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)navigateToPhotosContentBottomAnimated:(BOOL)arg1;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealCloudFeedAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLManagedAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedComment:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedComment *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)navigateToRevealCloudFeedInvitationForAlbum:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PLCloudSharedAlbum *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*

@end
