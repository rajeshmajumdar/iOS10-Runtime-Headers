/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject

@property (nonatomic) BOOL disabled;
@property (nonatomic, copy) NSString *frameId;
@property (nonatomic) int origin;
@property (nonatomic, copy) NSString *sourceURL;
@property (nonatomic, copy) NSString *styleSheetId;
@property (nonatomic, copy) NSString *title;

- (BOOL)disabled;
- (id)frameId;
- (id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(int)arg4 title:(id)arg5 disabled:(BOOL)arg6;
- (int)origin;
- (void)setDisabled:(BOOL)arg1;
- (void)setFrameId:(id)arg1;
- (void)setOrigin:(int)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setStyleSheetId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceURL;
- (id)styleSheetId;
- (id)title;

@end
