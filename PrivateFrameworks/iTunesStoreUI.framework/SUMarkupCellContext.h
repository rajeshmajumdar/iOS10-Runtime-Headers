/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMarkupCellContext : SUItemCellContext {
    int  _pendingWebViewLoads;
    NSString * _stylesheet;
    struct __CFDictionary { } * _webViewCache;
    float  _webViewWidth;
}

@property (nonatomic, retain) NSString *stylesheet;
@property (nonatomic) float webViewWidth;

- (void)dealloc;
- (void)setStylesheet:(id)arg1;
- (void)setWebViewWidth:(float)arg1;
- (id)stylesheet;
- (void)webViewDidFinishLoading:(id)arg1;
- (id)webViewForMarkup:(id)arg1;
- (float)webViewWidth;

@end
