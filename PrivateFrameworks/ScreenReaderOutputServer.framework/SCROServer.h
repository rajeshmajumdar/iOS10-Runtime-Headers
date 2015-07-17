/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROServer : NSObject {
    long  _clientCount;
    NSLock * _contentLock;
    unsigned int  _deathPort;
    struct __CFRunLoopSource { } * _deathSource;
    struct __CFRunLoopTimer { } * _deathTimer;
    <SCROServerDelegate> * _delegate;
    BOOL  _isRegisteredWithMach;
    unsigned int  _serverPort;
    struct __CFRunLoopSource { } * _serverSource;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedServer;

- (long)_clientCount;
- (struct __CFRunLoopTimer { }*)_deathTimer;
- (long)_incrementClientCount;
- (int)_registerForNotificationOnDeathPort:(unsigned int)arg1;
- (void)_setClientCount:(long)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (struct __CFRunLoopSource { }*)serverSource;
- (void)setDelegate:(id)arg1;
- (void)unregisterWithMach;

@end
