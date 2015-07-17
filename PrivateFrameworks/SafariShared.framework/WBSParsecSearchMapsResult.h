/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult <WBSParsecMapsResultFeedbackDelegate, WBSParsecSearchResultPresentedInCard> {
    NSArray * _additionalMapItems;
    WBSParsecSearchMapsResultExtraCompletionItem * _extraCompletionItem;
    WBSParsecSearchResult * _hiddenParsecResult;
    MKMapItem * _mapItem;
    NSString * _mapsDataType;
    NSString * _mapsResultType;
    NSURL * _moreURL;
    NSString * _nearbyBusinessesString;
    WBSParsecSearchSession * _parsecSearchSession;
}

@property (nonatomic, readonly) NSArray *additionalMapItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WBSParsecSearchMapsResultExtraCompletionItem *extraCompletionItem;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) WBSParsecSearchResult *hiddenParsecResult;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) NSString *mapsResultType;
@property (nonatomic, readonly) NSURL *moreURL;
@property (nonatomic, readonly) NSString *nearbyBusinessesString;
@property (nonatomic, retain) WBSParsecSearchSession *parsecSearchSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalMapItems;
- (id)extraCompletionItem;
- (id)hiddenParsecResult;
- (id)initWithDictionary:(id)arg1;
- (id)mapItem;
- (id)mapsResultType;
- (id)moreURL;
- (id)nearbyBusinessesString;
- (id)parsecSearchSession;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (void)placeViewControllerShouldLogFeedbackForDismissal:(id)arg1;
- (void)setHiddenParsecResult:(id)arg1;
- (void)setParsecSearchSession:(id)arg1;
- (id)supportedStyleOverrides;

@end
