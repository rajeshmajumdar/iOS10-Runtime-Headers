/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNowPlayingInfoCenter : NSObject {
    NSDictionary * _nowPlayingInfo;
    NSDate * _pushDate;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _queuedNowPlayingInfo;
}

@property (copy) NSDictionary *nowPlayingInfo;

+ (id)defaultCenter;

- (void).cxx_destruct;
- (id)_init;
- (void)_pushNowPlayingInfoAndRetry:(BOOL)arg1;
- (id)init;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;

@end
