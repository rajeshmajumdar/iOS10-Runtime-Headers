/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFormattingManager : NSObject {
    BOOL  _supportsVerticalText;
    BOOL  _wantsCustomKerning;
}

@property (nonatomic, readonly) BOOL supportsVerticalText;
@property (nonatomic, readonly) BOOL wantsCustomKerning;

+ (id)sharedManager;

- (void)_commonCMKFormattingManagerInitialization;
- (id)init;
- (BOOL)supportsVerticalText;
- (BOOL)wantsCustomKerning;

@end
