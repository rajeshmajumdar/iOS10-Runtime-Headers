/* Generated by RuntimeBrowser.
 */

@protocol AVPictureInPictureControllerDelegate <NSObject>

@optional

- (void)pictureInPictureController:(void *)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: AVPictureInPictureController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerFailedToStartPictureInPicture:(AVPictureInPictureController *)arg1 withError:(NSError *)arg2;
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController *)arg1;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController *)arg1;

@end
