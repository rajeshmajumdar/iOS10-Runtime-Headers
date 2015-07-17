/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
    NSArray * _connections;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    NSArray * _metadata;
    NSURL * _outputFileURL;
    BOOL  _paused;
    BOOL  _recording;
    long long  _settingsID;
}

@property (readonly) NSArray *connections;
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage;
@property (retain) NSArray *metadata;
@property (readonly) NSURL *outputFileURL;
@property (getter=isPaused, nonatomic) BOOL paused;
@property (getter=isRecording, nonatomic) BOOL recording;
@property (readonly) long long settingsID;

+ (id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;

- (id)connections;
- (void)dealloc;
- (id)delegateStorage;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4;
- (BOOL)isPaused;
- (BOOL)isRecording;
- (id)metadata;
- (id)outputFileURL;
- (void)setMetadata:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setRecording:(BOOL)arg1;
- (long long)settingsID;

@end
