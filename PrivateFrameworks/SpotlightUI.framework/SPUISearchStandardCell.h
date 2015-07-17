/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUISearchStandardCell : SPUISearchTableViewCell {
    UILabel * _auxiliarySubtitleLabel;
    UILabel * _auxiliaryTitleLabel;
    NSArray * _bottomConstraints;
    SPUISearchPlayButton * _mediaPlayButton;
    SPUIObservingLabel * _subtitleLabel;
    NSDictionary * _subtitleTextAttributes;
    SPUIObservingLabel * _summaryLabel;
    NSDictionary * _summaryTextAttributes;
    SPUIObservingLabel * _titleLabel;
    NSDictionary * _titleTextAttributes;
    UIImageView * _unreadBadge;
    UIImageView * _vipBadge;
}

@property (nonatomic, readonly) UILabel *auxiliarySubtitleLabel;
@property (nonatomic, readonly) UILabel *auxiliaryTitleLabel;
@property (nonatomic, readonly) NSArray *bottomConstraints;
@property (nonatomic, readonly) float leftTextMargin;
@property (nonatomic, readonly) UIView *leftView;
@property (nonatomic, readonly) UIView<SPUISearchText> *subtitleLabel;
@property (nonatomic, retain) NSDictionary *subtitleTextAttributes;
@property (nonatomic, readonly) UIView<SPUISearchText> *summaryLabel;
@property (nonatomic, retain) NSDictionary *summaryTextAttributes;
@property (nonatomic, readonly) UIView<SPUISearchText> *titleLabel;
@property (nonatomic, retain) NSDictionary *titleTextAttributes;
@property (nonatomic, readonly) UIImageView *unreadBadge;
@property (nonatomic, readonly) UIImageView *vipBadge;

+ (id)starImage;
+ (id)unreadImage;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_updateAuxiliaryFonts;
- (id)accessoryViewForSection:(id)arg1 result:(id)arg2;
- (id)auxiliarySubtitleLabel;
- (id)auxiliaryTitleLabel;
- (id)bottomConstraints;
- (id)constantConstraints;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (float)leftTextMargin;
- (id)leftTextView;
- (id)leftView;
- (id)mediaPlayButtonForTrackID:(unsigned long long)arg1 local:(BOOL)arg2;
- (id)rightViewFrom:(id)arg1;
- (void)setSubtitleTextAttributes:(id)arg1;
- (void)setSummaryTextAttributes:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (id)subtitleLabel;
- (id)subtitleTextAttributes;
- (id)summaryLabel;
- (id)summaryTextAttributes;
- (id)titleLabel;
- (id)titleTextAttributes;
- (id)unreadBadge;
- (void)updateAuxiliariesWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (void)updateBadgesWithSection:(id)arg1 result:(id)arg2;
- (void)updateFonts;
- (void)updateLabel:(id)arg1 withValue:(id)arg2;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (id)variableConstraints;
- (id)vipBadge;

@end
