/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityViewDescriptor : NSObject <NSCopying> {
    BOOL  _defaultAllowsSectionHeaders;
    MusicEntityViewContentDescriptor * _defaultContentDescriptor;
    MusicEntityViewContentDescriptor * _defaultSectionHeaderContentDescriptor;
    <MusicEntityProviding> * _entityProvider;
    BOOL  _rightSeparatorInsetFollowsLayoutMargin;
    int  _scrollIndicatorStyle;
    int  _sectionHeaderHairlineStyleForNonFloatingState;
    UIColor * _sectionHeaderTextColorForNonFloatingState;
    float  _sectionHeaderTopContentInset;
    BOOL  _sectionHeaderViewsFloat;
    BOOL  _usesUppercaseLettersForSectionHeaderTitles;
}

@property (nonatomic) BOOL defaultAllowsSectionHeaders;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *defaultContentDescriptor;
@property (nonatomic, retain) MusicEntityViewContentDescriptor *defaultSectionHeaderContentDescriptor;
@property (nonatomic, retain) <MusicEntityProviding> *entityProvider;
@property (nonatomic) BOOL rightSeparatorInsetFollowsLayoutMargin;
@property (nonatomic) int scrollIndicatorStyle;
@property (nonatomic) int sectionHeaderHairlineStyleForNonFloatingState;
@property (nonatomic, retain) UIColor *sectionHeaderTextColorForNonFloatingState;
@property (nonatomic) float sectionHeaderTopContentInset;
@property (nonatomic) BOOL sectionHeaderViewsFloat;
@property (nonatomic) BOOL usesUppercaseLettersForSectionHeaderTitles;

- (void).cxx_destruct;
- (BOOL)allowsSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)contentDescriptorForIndexPath:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)defaultAllowsSectionHeaders;
- (id)defaultContentDescriptor;
- (id)defaultSectionHeaderContentDescriptor;
- (id)entityProvider;
- (void)enumerateContentDescriptorsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionHeaderContentDescriptorsUsingBlock:(id /* block */)arg1;
- (id)init;
- (BOOL)rightSeparatorInsetFollowsLayoutMargin;
- (int)scrollIndicatorStyle;
- (id)sectionHeaderContentDescriptorForSectionIndex:(unsigned int)arg1;
- (int)sectionHeaderHairlineStyleForNonFloatingState;
- (id)sectionHeaderTextColorForNonFloatingState;
- (float)sectionHeaderTopContentInset;
- (BOOL)sectionHeaderViewsFloat;
- (void)setDefaultAllowsSectionHeaders:(BOOL)arg1;
- (void)setDefaultContentDescriptor:(id)arg1;
- (void)setDefaultSectionHeaderContentDescriptor:(id)arg1;
- (void)setEntityProvider:(id)arg1;
- (void)setRightSeparatorInsetFollowsLayoutMargin:(BOOL)arg1;
- (void)setScrollIndicatorStyle:(int)arg1;
- (void)setSectionHeaderHairlineStyleForNonFloatingState:(int)arg1;
- (void)setSectionHeaderTextColorForNonFloatingState:(id)arg1;
- (void)setSectionHeaderTopContentInset:(float)arg1;
- (void)setSectionHeaderViewsFloat:(BOOL)arg1;
- (void)setUsesUppercaseLettersForSectionHeaderTitles:(BOOL)arg1;
- (BOOL)usesUppercaseLettersForSectionHeaderTitles;

@end
