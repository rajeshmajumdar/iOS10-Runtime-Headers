/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecMovieCardDetailSection : WBSParsecModel {
    unsigned int  _descriptionMaxLines;
    NSString * _descriptionText;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned int descriptionMaxLines;
@property (nonatomic, readonly, copy) NSString *descriptionText;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)movieCardDetailSectionSchema;

- (void).cxx_destruct;
- (unsigned int)descriptionMaxLines;
- (id)descriptionText;
- (id)initWithDictionary:(id)arg1;
- (id)title;

@end
