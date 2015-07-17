/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureStillImageOutput : AVCaptureStillImageOutput {
    CAMCaptureEngine * __captureEngine;
    NSMutableDictionary * __userInfoBySettingsID;
    NSObject<OS_dispatch_queue> * __userInfoQueue;
    NSDictionary * _currentUserInfo;
    NSDictionary * _userInfoForNextCapture;
}

@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, readonly) NSMutableDictionary *_userInfoBySettingsID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_userInfoQueue;
@property (nonatomic, copy) NSDictionary *currentUserInfo;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic, copy) NSDictionary *userInfoForNextCapture;

- (void).cxx_destruct;
- (id)_captureEngine;
- (void)_incrementSettingsIDAndStoreCaptureUserInfo;
- (id)_userInfoBySettingsID;
- (id)_userInfoQueue;
- (void)_userInfoQueueAtomicIncrementSettingsID;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)currentUserInfo;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)initWithEngine:(id)arg1;
- (void)setCurrentUserInfo:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInfoForNextCapture:(id)arg1;
- (id)userInfo;
- (id)userInfoForNextCapture;

@end
