/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal * _outputDevice;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSString *name;

+ (id)sharedLocalDevice;

- (id)ID;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (id)_weakReference;
- (void)dealloc;
- (struct OpaqueFigEndpoint { }*)figEndpoint;
- (void)finalize;
- (double)frecencyScore;
- (unsigned int)hash;
- (id)init;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)updateFrecencyScore;

@end
