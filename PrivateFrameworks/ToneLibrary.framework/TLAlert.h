/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlert : NSObject {
    NSString * _accountIdentifier;
    NSArray * _alertCompletions;
    NSTimer * _completionFallbackTimer;
    long long  _instanceIndex;
    BOOL  _repeatedlyPlaying;
    BOOL  _shouldOverrideMasterSwitches;
    NSString * _toneIdentifier;
    int  _type;
    NSString * _vibrationIdentifier;
}

@property (setter=_setAlertCompletions:, nonatomic, copy) NSArray *_alertCompletions;
@property (setter=_setCompletionFallbackTimer:, nonatomic, retain) NSTimer *_completionFallbackTimer;
@property (setter=_setInstanceIndex:, nonatomic) long long _instanceIndex;
@property (getter=_isRepeatedlyPlaying, setter=_setRepeatedlyPlaying:, nonatomic) BOOL _repeatedlyPlaying;
@property (setter=_setShouldOverrideMasterSwitches:, nonatomic) BOOL _shouldOverrideMasterSwitches;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *vibrationIdentifier;

+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;
+ (void)_setWatchPrefersSalientToneAndVibration:(BOOL)arg1;
+ (BOOL)_watchPrefersSalientToneAndVibration;
+ (void)playToneAndVibrationForType:(int)arg1;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;

- (id)_alertCompletions;
- (id)_completionFallbackTimer;
- (id)_initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;
- (long long)_instanceIndex;
- (BOOL)_isRepeatedlyPlaying;
- (void)_setAccountIdentifier:(id)arg1;
- (void)_setAlertCompletions:(id)arg1;
- (void)_setCompletionFallbackTimer:(id)arg1;
- (void)_setInstanceIndex:(long long)arg1;
- (void)_setRepeatedlyPlaying:(BOOL)arg1;
- (void)_setShouldOverrideMasterSwitches:(BOOL)arg1;
- (void)_setToneIdentifier:(id)arg1;
- (void)_setType:(int)arg1;
- (void)_setVibrationIdentifier:(id)arg1;
- (BOOL)_shouldOverrideMasterSwitches;
- (id)accountIdentifier;
- (void)dealloc;
- (id)description;
- (id)initWithType:(int)arg1;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (BOOL)playWithCompletionHandler:(id /* block */)arg1 targetQueue:(id)arg2;
- (void)startPlayingRepeatedly;
- (void)stop;
- (void)stopPlayingRepeatedlyWithOptions:(unsigned int)arg1 completionHandler:(id /* block */)arg2 targetQueue:(id)arg3;
- (void)stopWithFadeOutDuration:(double)arg1;
- (id)toneIdentifier;
- (int)type;
- (id)vibrationIdentifier;

@end
