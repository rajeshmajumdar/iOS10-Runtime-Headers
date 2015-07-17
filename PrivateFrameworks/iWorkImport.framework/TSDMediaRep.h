/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDMediaRep : TSDStyledRep {
    CALayer * mFrameMaskLayer;
    TSDFrameRep * mFrameRep;
    BOOL  mIsZooming;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mLastPictureFrameLayerRect;
    CAShapeLayer * mMaskLayer;
    CAShapeLayer * mStrokeLayer;
    CALayer * mTapToReplaceLayer;
}

@property (nonatomic, readonly) TSDMediaInfo *mediaInfo;
@property (nonatomic, readonly) TSDMediaLayout *mediaLayout;

- (void)dealloc;
- (BOOL)i_shouldRenderStroke:(id)arg1;
- (void)i_updateFrameRep;
- (BOOL)isPlaceholder;
- (id)mediaInfo;
- (id)mediaLayout;

@end
