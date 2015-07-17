/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKStillImageCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {
    int  _captureDevice;
    <CMKStillImageCaptureRequestDelegate> * _delegate;
    int  _deviceOrientation;
    int  _flashMode;
    int  _hdrMode;
    BOOL  _transient;
    BOOL  _usesStillImageStabilization;
    BOOL  _wantsAudioForCapture;
}

@property (nonatomic, readonly) int captureDevice;
@property (nonatomic, readonly) <CMKStillImageCaptureRequestDelegate> *delegate;
@property (nonatomic, readonly) int deviceOrientation;
@property (nonatomic, readonly) int flashMode;
@property (nonatomic, readonly) int hdrMode;
@property (getter=isTransient, nonatomic, readonly) BOOL transient;
@property (nonatomic, readonly) BOOL usesStillImageStabilization;
@property (nonatomic, readonly) BOOL wantsAudioForCapture;

- (void).cxx_destruct;
- (int)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (int)deviceOrientation;
- (int)flashMode;
- (int)hdrMode;
- (id)init;
- (BOOL)isTransient;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)usesStillImageStabilization;
- (BOOL)wantsAudioForCapture;

@end
