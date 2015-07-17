/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicPlayerSessionController : NSObject {
    MusicAVPlayer * _activePlayer;
    MusicAVPlayer * _primaryPlayer;
    BOOL  _shouldResumePrimaryPlayback;
}

@property (nonatomic, readonly) MusicAVPlayer *activePlayer;
@property (nonatomic, retain) MusicAVPlayer *primaryPlayer;

+ (id)sharedSessionController;

- (void).cxx_destruct;
- (id)activePlayer;
- (void)beginSessionForPlayer:(id)arg1 startPlayback:(BOOL)arg2;
- (void)endSessionForPlayer:(id)arg1;
- (id)primaryPlayer;
- (void)setPrimaryPlayer:(id)arg1;

@end