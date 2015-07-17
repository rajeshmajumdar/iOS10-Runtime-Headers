/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGPlaybackProgressIndicator : UIView {
    UIView * _containerView;
    NSArray * _loadedTimeRanges;
    _PGPlaybackProgressIndicatorMaskView * _loadedTimeRangesMaskView;
    double  _playbackProgress;
    _PGPlaybackProgressIndicatorMaskView * _playbackProgressMaskView;
}

@property (nonatomic, retain) NSArray *loadedTimeRanges;
@property (nonatomic) double playbackProgress;

- (void).cxx_destruct;
- (void)_updateLoadedTimeRangesMaskViewMaskRanges;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)loadedTimeRanges;
- (double)playbackProgress;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPlaybackProgress:(double)arg1;

@end
