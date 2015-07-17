/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLRepresentation : NSObject <WebDocumentDOM, WebDocumentRepresentation> {
    WebHTMLRepresentationPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)supportedImageMIMETypes;
+ (id)supportedMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)DOMDocument;
- (BOOL)_isDisplayingWebArchive;
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;
- (BOOL)canProvideDocumentSource;
- (BOOL)canSaveAsWebArchive;
- (id)controlsInForm:(id)arg1;
- (id)currentForm;
- (void)dealloc;
- (id)documentSource;
- (BOOL)elementDoesAutoComplete:(id)arg1;
- (BOOL)elementIsPassword:(id)arg1;
- (id)elementWithName:(id)arg1 inForm:(id)arg2;
- (void)finalize;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (id)formForElement:(id)arg1;
- (id)init;
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned int*)arg3 resultIsInCellAbove:(BOOL*)arg4;
- (void)setDataSource:(id)arg1;
- (id)title;

@end
