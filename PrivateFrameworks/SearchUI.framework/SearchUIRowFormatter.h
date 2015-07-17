/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRowFormatter : NSObject {
    BOOL  _centerText;
    UIFont * _descriptionFont;
    UIFont * _footnoteFont;
    float  _interResultSpacing;
    float  _spacingBetweenDescriptionAndFootnote;
    float  _spacingBetweenDescriptions;
    float  _spacingBetweenTitleAndDescription;
    float  _spacingBetweenTitleAndTopView;
    BOOL  _thumbnailFillsWidth;
    UIFont * _titleFont;
}

@property BOOL centerText;
@property (retain) UIFont *descriptionFont;
@property (retain) UIFont *footnoteFont;
@property float interResultSpacing;
@property float spacingBetweenDescriptionAndFootnote;
@property float spacingBetweenDescriptions;
@property float spacingBetweenTitleAndDescription;
@property float spacingBetweenTitleAndTopView;
@property BOOL thumbnailFillsWidth;
@property (retain) UIFont *titleFont;

- (void).cxx_destruct;
- (BOOL)centerText;
- (id)descriptionFont;
- (id)footnoteFont;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2 scrollable:(BOOL)arg3;
- (id)initWithResults:(id)arg1 style:(unsigned int)arg2;
- (id)initWithRowType:(unsigned int)arg1 style:(unsigned int)arg2;
- (float)interResultSpacing;
- (void)setCenterText:(BOOL)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setFootnoteFont:(id)arg1;
- (void)setInterResultSpacing:(float)arg1;
- (void)setSpacingBetweenDescriptionAndFootnote:(float)arg1;
- (void)setSpacingBetweenDescriptions:(float)arg1;
- (void)setSpacingBetweenTitleAndDescription:(float)arg1;
- (void)setSpacingBetweenTitleAndTopView:(float)arg1;
- (void)setThumbnailFillsWidth:(BOOL)arg1;
- (void)setTitleFont:(id)arg1;
- (float)spacingBetweenDescriptionAndFootnote;
- (float)spacingBetweenDescriptions;
- (float)spacingBetweenTitleAndDescription;
- (float)spacingBetweenTitleAndTopView;
- (BOOL)thumbnailFillsWidth;
- (id)titleFont;

@end
