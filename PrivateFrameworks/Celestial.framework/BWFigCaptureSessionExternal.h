/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureSessionExternal : NSObject <BWGraphStatusDelegate> {
    struct OpaqueFigCaptureSession { } * _captureSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)graph:(id)arg1 didFinishStartingWithError:(long)arg2;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;

@end
