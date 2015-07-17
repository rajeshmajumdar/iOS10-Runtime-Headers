/* Generated by RuntimeBrowser.
 */

@protocol AVAudioIOClient <NSObject>

@required

- (BOOL)canProcessAudio;
- (int)deviceRole;
- (BOOL)onCaptureSound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned long)arg9;
- (BOOL)onPlaySound:(char *)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned int)arg4 averagePower:(float)arg5;
- (void)setCanProcessAudio:(BOOL)arg1;

@end
