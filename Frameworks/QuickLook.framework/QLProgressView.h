/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLProgressView : UIView {
    int  _backgroundColorType;
    UILabel * _loadingTextLabel;
    UIActivityIndicatorView * _progressIndicator;
}

@property int backgroundColorType;
@property (copy) NSString *loadingText;

- (void)_update;
- (int)backgroundColorType;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (id)loadingText;
- (void)setBackgroundColorType:(int)arg1;
- (void)setLoadingText:(id)arg1;

@end
