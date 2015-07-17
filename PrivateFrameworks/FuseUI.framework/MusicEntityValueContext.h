/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityValueContext : NSObject <NSCoding, NSCopying> {
    <MusicEntityValueProviding> * _containerEntityValueProvider;
    MPUContentItemIdentifierCollection * _containerIdentifierCollection;
    MPPlaybackContext * _containerPlaybackContext;
    <MusicEntityValueProviding> * _itemEntityValueProvider;
    unsigned int  _itemGlobalIndex;
    MPUContentItemIdentifierCollection * _itemIdentifierCollection;
    MPPlaybackContext * _itemPlaybackContext;
    BOOL  _wantsContainerEntityValueProvider;
    BOOL  _wantsContainerIdentifierCollection;
    BOOL  _wantsContainerPlaybackContext;
    BOOL  _wantsItemEntityValueProvider;
    BOOL  _wantsItemGlobalIndex;
    BOOL  _wantsItemIdentifierCollection;
    BOOL  _wantsItemPlaybackContext;
}

@property (nonatomic, retain) <MusicEntityValueProviding> *containerEntityValueProvider;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *containerIdentifierCollection;
@property (nonatomic, retain) MPPlaybackContext *containerPlaybackContext;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (nonatomic, retain) <MusicEntityValueProviding> *itemEntityValueProvider;
@property (nonatomic) unsigned int itemGlobalIndex;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *itemIdentifierCollection;
@property (nonatomic, retain) MPPlaybackContext *itemPlaybackContext;
@property (nonatomic) BOOL wantsContainerEntityValueProvider;
@property (nonatomic) BOOL wantsContainerIdentifierCollection;
@property (nonatomic) BOOL wantsContainerPlaybackContext;
@property (nonatomic) BOOL wantsItemEntityValueProvider;
@property (nonatomic) BOOL wantsItemGlobalIndex;
@property (nonatomic) BOOL wantsItemIdentifierCollection;
@property (nonatomic) BOOL wantsItemPlaybackContext;

- (void).cxx_destruct;
- (void)configureWithMediaEntity:(id)arg1;
- (id)containerEntityValueProvider;
- (id)containerIdentifierCollection;
- (id)containerPlaybackContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityValueProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemEntityValueProvider;
- (unsigned int)itemGlobalIndex;
- (id)itemIdentifierCollection;
- (id)itemPlaybackContext;
- (void)resetOutputValues;
- (void)setContainerEntityValueProvider:(id)arg1;
- (void)setContainerIdentifierCollection:(id)arg1;
- (void)setContainerPlaybackContext:(id)arg1;
- (void)setItemEntityValueProvider:(id)arg1;
- (void)setItemGlobalIndex:(unsigned int)arg1;
- (void)setItemIdentifierCollection:(id)arg1;
- (void)setItemPlaybackContext:(id)arg1;
- (void)setWantsContainerEntityValueProvider:(BOOL)arg1;
- (void)setWantsContainerIdentifierCollection:(BOOL)arg1;
- (void)setWantsContainerPlaybackContext:(BOOL)arg1;
- (void)setWantsItemEntityValueProvider:(BOOL)arg1;
- (void)setWantsItemGlobalIndex:(BOOL)arg1;
- (void)setWantsItemIdentifierCollection:(BOOL)arg1;
- (void)setWantsItemPlaybackContext:(BOOL)arg1;
- (BOOL)wantsContainerEntityValueProvider;
- (BOOL)wantsContainerIdentifierCollection;
- (BOOL)wantsContainerPlaybackContext;
- (BOOL)wantsItemEntityValueProvider;
- (BOOL)wantsItemGlobalIndex;
- (BOOL)wantsItemIdentifierCollection;
- (BOOL)wantsItemPlaybackContext;

@end
